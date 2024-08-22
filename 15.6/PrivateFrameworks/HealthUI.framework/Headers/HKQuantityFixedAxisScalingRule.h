// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYFIXEDAXISSCALINGRULE_H
#define HKQUANTITYFIXEDAXISSCALINGRULE_H

@class NSDictionary, HKQuantity, HKUnit;
@protocol HKInteractiveChartQuantityDefaultAxisBoundsProvider;


#import "HKAbstractFixedAxisScalingRule.h"
#import "HKValueRange.h"

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider>

 {
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
}


@property (retain, nonatomic) HKValueRange *noDataAxisBounds; // ivar: _noDataAxisBounds
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit


+(id)ruleWithDefaultAxisBounds:(id)arg0 axisBoundsOverrides:(id)arg1 ;
+(id)ruleWithDefaultAxisBounds:(id)arg0 axisBoundsOverrides:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg0 ;
-(id)_numberRangeFromQuantityRangeForUnit:(id)arg0 quantityRange:(id)arg1 ;
-(id)noDataStartingRange;
-(void)_convertQuantityRanges;


@end


#endif