// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIAUTOCALCULATORUTILS_H
#define PIAUTOCALCULATORUTILS_H


#import <Foundation/Foundation.h>


@interface PIAutoCalculatorUtils : NSObject



+(struct CGPoint )averageCGPoints:(struct CGPoint *)arg0 pointCount:(NSUInteger)arg1 ;
+(struct CGPoint )averagePoints:(struct CGPoint *)arg0 pointCount:(NSUInteger)arg1 ;
+(struct CGPoint )convertFacePoint:(struct CGPoint )arg0 toImagePointWithFaceRect:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;


@end


#endif