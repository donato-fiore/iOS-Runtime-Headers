// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKNUMERICFIXEDAXISSCALINGRULE_H
#define HKNUMERICFIXEDAXISSCALINGRULE_H

@protocol HKInteractiveChartNumericDefaultAxisBoundsProvider;


#import "HKAbstractFixedAxisScalingRule.h"
#import "HKValueRange.h"

@interface HKNumericFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider>



@property (retain, nonatomic) HKValueRange *noDataAxisBounds; // ivar: _noDataAxisBounds


+(id)ruleWithDefaultAxisBounds:(id)arg0 axisBoundsOverrides:(id)arg1 ;
-(id)noDataStartingRange;


@end


#endif