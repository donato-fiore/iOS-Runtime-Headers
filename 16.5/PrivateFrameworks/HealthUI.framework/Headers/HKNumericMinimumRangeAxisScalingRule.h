// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKNUMERICMINIMUMRANGEAXISSCALINGRULE_H
#define HKNUMERICMINIMUMRANGEAXISSCALINGRULE_H

@class NSNumber;
@protocol HKInteractiveChartNumericDefaultAxisBoundsProvider;


#import "HKAbstractMinimumRangeScalingRule.h"
#import "HKValueRange.h"

@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider>

 {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}


@property (retain, nonatomic) HKValueRange *noDataAxisBounds; // ivar: _noDataAxisBounds


+(id)ruleWithDefaultYAxisRange:(CGFloat)arg0 axisRangeOverrides:(id)arg1 ;
+(id)ruleWithDefaultYAxisRange:(CGFloat)arg0 minimumValue:(id)arg1 maximumValue:(id)arg2 axisRangeOverrides:(id)arg3 ;
+(id)ruleWithDefaultYAxisRange:(CGFloat)arg0 minimumValue:(id)arg1 maximumValue:(id)arg2 axisRangeOverrides:(id)arg3 noDataAxisBounds:(id)arg4 ;
-(id)noDataStartingRange;


@end


#endif