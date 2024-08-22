// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTPIEAXIS_H
#define TSCHCHARTPIEAXIS_H



#import "TSCHChartStackedPercentValueAxis.h"

@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis



-(BOOL)supportsAxisValueLabels;
-(BOOL)supportsFormattedStringForInvalidValue;
-(BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
-(CGFloat)totalForGroupIndex:(NSUInteger)arg0 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0 ;
-(id)formattedStringForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;


@end


#endif