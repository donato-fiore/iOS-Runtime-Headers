// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTBLOODGLUCOSEPERCENTINRANGEFORMATTER_H
#define HKINTERACTIVECHARTBLOODGLUCOSEPERCENTINRANGEFORMATTER_H

@class NSNumberFormatter;


#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartBloodGlucosePercentInRangeFormatter : HKInteractiveChartDataFormatter

@property (nonatomic) NSInteger highlightedClassification; // ivar: _highlightedClassification
@property (readonly, copy, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter


-(CGFloat)_fractionForHighlightedClassificationFromDataPoint:(id)arg0 ;
-(NSInteger)_selectedRangeDataTypeForContext:(NSInteger)arg0 ;
-(id)_overallFractionInEuglycemiaForChartData:(id)arg0 ;
-(id)_rangeOfFractionInHighlightedClassificationForChartData:(id)arg0 ;
-(id)_stringFromFraction:(id)arg0 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)init;


@end


#endif