// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITESTERMATHUTILS_H
#define TITESTERMATHUTILS_H


#import <Foundation/Foundation.h>


@interface TITesterMathUtils : NSObject



+(CGFloat)distanceBetween:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
+(int)solveSystemOfEquations:(*float)arg0 withBMatrix:(*float)arg1 size:(int)arg2 ;


@end


#endif