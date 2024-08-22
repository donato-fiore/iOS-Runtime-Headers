// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTSTACKEDPERCENTVALUEAXIS_H
#define TSCHCHARTSTACKEDPERCENTVALUEAXIS_H



#import "TSCHChartValueAxis.h"
#import "TSCHChartAxisAnalysis.h"

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {
    TSCHChartAxisAnalysis *_inProgressAnalysisForErrorBarData;
}




-(*CGFloat)unitSpaceValuesForSeries:(id)arg0 groupIndexSet:(id)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(BOOL)editableFormatForValueStrings;
-(BOOL)supportsReferenceLines;
-(BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
-(CGFloat)doubleAxisToModelValue:(CGFloat)arg0 ;
-(CGFloat)doubleModelToAxisValue:(CGFloat)arg0 forSeries:(id)arg1 ;
-(CGFloat)interceptForAxis:(id)arg0 ;
-(CGFloat)totalForGroupIndex:(NSUInteger)arg0 series:(id)arg1 ;
-(CGFloat)totalForIndex:(NSUInteger)arg0 useDownsampledTotals:(BOOL)arg1 ;
-(CGFloat)unitSpaceValueForDataSpaceValue:(CGFloat)arg0 series:(id)arg1 groupIndex:(NSUInteger)arg2 addValuesFromAllPreviousSeries:(BOOL)arg3 ;
-(CGFloat)unitSpaceValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(id)dataFormatter;
-(id)dataFormatterForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)formattedStringForAxisValue:(id)arg0 ;
-(id)formattedStringForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)userMax;
-(id)userMin;
-(id)valueForFormattedString:(id)arg0 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg0 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg0 ;
-(void)updateModelAxisAnalysis:(id)arg0 ;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg0 axisID:(id)arg1 analysis:(id)arg2 ;
-(void)updateMultiDataModelAxisAnalysis:(id)arg0 ;


@end


#endif