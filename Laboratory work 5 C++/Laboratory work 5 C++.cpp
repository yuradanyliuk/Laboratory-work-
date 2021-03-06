#include <iostream>
#include "String.h"
#include "GeometricShapes.h"
using namespace std;

void Task1();
void Task2();

int main()
{
    Task1();
}

void Task1()
{
    char* line = new char[7]{ 'a', 'b', 'c', 'd', 'e', '!', '\0' };
    Str s = Str(line);
    int len = s.GetLength();
    delete[] line;

    char* digitLine = new char[9]{ '1', '2', 'a', '3', 'b', 'c', '4', '5', '\0' };
    DigitalStr dS = DigitalStr(digitLine);
    len = dS.GetLength();
    delete[] digitLine;

    int* ds = dS.GetDigitStr();
    for (int i = 0; i < dS.GetDigitLength(); i++)
        cout << ds[i];
    cout << endl;

    dS.ReverseDigitStr();
    for (int i = 0; i < dS.GetDigitLength(); i++)
        cout << ds[i];
    cout << endl;
}

void Task2()
{
    double coord[3][2] = { { 0, 0 }, { 0, 3 }, { 4, 0 } };
    Triangle t = Triangle(coord);
    Shape* ptr = &t;
    double at = (*ptr).GetArea();
    double pt = (*ptr).GetPerimeter();

    Circle c = Circle(3);
    ptr = &c;
    double ac = (*ptr).GetArea();
    double pc = (*ptr).GetPerimeter();
}