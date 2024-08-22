// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MATHUTILITY_H
#define MATHUTILITY_H


#import <Foundation/Foundation.h>


@interface MathUtility : NSObject



+(CGFloat)computeNewMeanFromValue:(CGFloat)arg0 currentMean:(CGFloat)arg1 currentCount:(NSUInteger)arg2 ;
+(CGFloat)computeNewVarianceFromValue:(CGFloat)arg0 currentMean:(CGFloat)arg1 currentCount:(NSUInteger)arg2 currentVariance:(CGFloat)arg3 ;
+(unsigned int)getMegabytesSignificantFiguresHistogramBinIndexForBytes:(NSUInteger)arg0 ;


@end


#endif