// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTHEARINGSENSITIVITYFORMATTER_H
#define HKINTERACTIVECHARTHEARINGSENSITIVITYFORMATTER_H



#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartHearingSensitivityFormatter : HKInteractiveChartDataFormatter



-(id)_formattedStringForValue:(id)arg0 ;
-(id)_unitNameFromUnit:(id)arg0 number:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg0 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithUnitController:(id)arg0 ;


@end


#endif