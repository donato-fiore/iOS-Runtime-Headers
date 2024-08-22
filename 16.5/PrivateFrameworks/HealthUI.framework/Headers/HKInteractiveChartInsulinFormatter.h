// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTINSULINFORMATTER_H
#define HKINTERACTIVECHARTINSULINFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartInsulinFormatter : HKInteractiveChartGenericStatFormatter



-(id)_formattedSelectedRangeLabelDataWithChartData:(id)arg0 items:(id)arg1 ;
-(id)_formattedStringWithBasalValue:(CGFloat)arg0 bolusValue:(CGFloat)arg1 ;
-(id)_formattedStringWithValue:(CGFloat)arg0 unit:(id)arg1 deliveryReason:(NSInteger)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;


@end


#endif