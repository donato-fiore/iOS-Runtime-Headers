// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTBLOODPRESSUREFORMATTER_H
#define HKINTERACTIVECHARTBLOODPRESSUREFORMATTER_H



#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter



-(id)_formattedStringWithRange:(id)arg0 displayUnit:(BOOL)arg1 ;
-(id)_stringFromRange:(id)arg0 numberFormatter:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg0 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;


@end


#endif