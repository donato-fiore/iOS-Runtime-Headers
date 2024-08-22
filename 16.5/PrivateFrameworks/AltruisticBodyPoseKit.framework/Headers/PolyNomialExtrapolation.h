// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POLYNOMIALEXTRAPOLATION_H
#define POLYNOMIALEXTRAPOLATION_H


#import <Foundation/Foundation.h>


@interface PolyNomialExtrapolation : NSObject {
    int _N;
    int _n;
    Matrix<float, 0U, 0U, false> _A;
    Matrix<float, 0U, 1U, false> _b;
    vector<float, std::allocator<float>> _g;
    deque<float, std::allocator<float>> _x;
    deque<float, std::allocator<float>> _y;
}




-(BOOL)ready;
-(id)initWithHistorySize:(NSUInteger)arg0 degreeOfPolynomial:(NSUInteger)arg1 ;
-(id)predict;
-(void)printHistoryNamed:(id)arg0 ;
-(void)pushPoint;


@end


#endif