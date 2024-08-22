// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTAPPLEWALKINGSTEADINESSFORMATTER_H
#define HKINTERACTIVECHARTAPPLEWALKINGSTEADINESSFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartAppleWalkingSteadinessFormatter : HKInteractiveChartGenericStatFormatter



-(id)_formattedCurrentValueForChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)attributedStringWithValue:(CGFloat)arg0 unit:(id)arg1 showUnit:(BOOL)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)selectedRangeSeparatorString;


@end


#endif