// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYMINIMUMRANGEAXISSCALINGRULE_H
#define HKQUANTITYMINIMUMRANGEAXISSCALINGRULE_H

@class HKQuantity, NSDictionary, HKUnit;
@protocol HKInteractiveChartQuantityDefaultAxisBoundsProvider;


#import "HKAbstractMinimumRangeScalingRule.h"
#import "HKValueRange.h"

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider>

 {
    HKQuantity *_defaultYAxisRangeQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
}


@property (retain, nonatomic) HKValueRange *noDataAxisBounds; // ivar: _noDataAxisBounds
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit


+(id)ruleWithDefaultYAxisRange:(id)arg0 axisRangeOverrides:(id)arg1 ;
+(id)ruleWithDefaultYAxisRange:(id)arg0 minimumValue:(id)arg1 maximumValue:(id)arg2 axisRangeOverrides:(id)arg3 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg0 ;
-(id)noDataStartingRange;
-(void)_convertQuantities;


@end


#endif