// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTBASELINERELATIVESTATFORMATTER_H
#define HKINTERACTIVECHARTBASELINERELATIVESTATFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartBaselineRelativeStatFormatter : HKInteractiveChartGenericStatFormatter



-(id)_establishingBaselineSelectedRangeData;
-(id)_formattedStringForValue:(id)arg0 ;
-(id)_unavailableSelectedRangeData;
-(id)_unitNameFromUnit:(id)arg0 number:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;


@end


#endif