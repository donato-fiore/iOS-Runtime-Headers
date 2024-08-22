// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTGENERICSTATFORMATTER_H
#define HKINTERACTIVECHARTGENERICSTATFORMATTER_H

@class NSArray;
@protocol HKInteractiveChartRangeProvider;


#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSObject<HKInteractiveChartRangeProvider> *chartRangeProvider; // ivar: _chartRangeProvider
@property (retain, nonatomic) NSArray *configuredStatItems; // ivar: _configuredStatItems
@property (retain, nonatomic) NSArray *overrideStatFormatterItemOptions; // ivar: _overrideStatFormatterItemOptions


+(NSInteger)mapSingleItemToStatisticsType:(id)arg0 ;
-(id)_formatMin:(CGFloat)arg0 max:(CGFloat)arg1 unit:(id)arg2 ;
-(id)_formattedAnnotationForDistributionChartData:(id)arg0 ;
-(id)_formattedSelectedRangeLabelDataWithChartData:(id)arg0 items:(id)arg1 ;
-(id)_makeSelectedRangeDataWithAvg:(CGFloat)arg0 unit:(id)arg1 showUnit:(BOOL)arg2 statisticsType:(NSInteger)arg3 ;
-(id)_makeSelectedRangeDataWithMin:(CGFloat)arg0 max:(CGFloat)arg1 unit:(id)arg2 statisticsType:(NSInteger)arg3 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedUnitStringForChartData:(id)arg0 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;
-(id)selectedRangeSeparatorString;
-(void)configureFormatterForDisplayType:(id)arg0 quantityType:(id)arg1 chartRangeProvider:(id)arg2 timeScope:(NSInteger)arg3 context:(NSInteger)arg4 ;


@end


#endif