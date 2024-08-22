// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTTIMEPERIODFORMATTER_H
#define HKINTERACTIVECHARTTIMEPERIODFORMATTER_H



#import "HKInteractiveChartDataFormatter.h"
#import "HKTimePeriodDisplayTypeValueFormatter.h"

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {
    HKTimePeriodDisplayTypeValueFormatter *_timePeriodFormatter;
}




-(id)_formattedStringWithData:(id)arg0 roundToHours:(BOOL)arg1 displayUnit:(BOOL)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 items:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 items:(id)arg1 customDataType:(NSInteger)arg2 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;


@end


#endif