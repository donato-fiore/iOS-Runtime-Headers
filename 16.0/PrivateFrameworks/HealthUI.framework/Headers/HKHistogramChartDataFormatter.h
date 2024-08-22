// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHISTOGRAMCHARTDATAFORMATTER_H
#define HKHISTOGRAMCHARTDATAFORMATTER_H

@class HKUnit;


#import "HKInteractiveChartDataFormatter.h"

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter

@property (readonly, nonatomic) HKUnit *unit; // ivar: _unit


-(id)_formattedStringWithValue:(CGFloat)arg0 unit:(id)arg1 showUnit:(BOOL)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg0 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithUnit:(id)arg0 ;


@end


#endif