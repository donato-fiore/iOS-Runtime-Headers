// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPUTILITIES_H
#define HKSLEEPUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKSleepUtilities : NSObject



+(NSInteger)_axisPurposeForSleepSeriesType:(NSInteger)arg0 ;
+(id)_durationGoalDataForSleepDays:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)_fillStylesFromColors:(id)arg0 ;
+(id)_findOrCreateSleepChartCacheForSleepDisplayType:(id)arg0 cacheIdentifier:(id)arg1 cacheController:(id)arg2 dataSourceProvider:(id)arg3 ;
+(id)_generateComparisonSleepSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_generateDailyTimePeriodSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_generateDailyTimePeriodSeriesWithSchedulesForTimeScope:(NSInteger)arg0 ;
+(id)_generateDurationSleepGoalSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_generateDurationSleepSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_generateSleepStageDurationSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_generateSleepStageSeriesForTimeScope:(NSInteger)arg0 ;
+(id)_goalLineMarkerStyle;
+(id)_goalLineStrokeStyle;
+(id)_gradientFillColorForSleepAnalysis:(NSInteger)arg0 gradientPosition:(CGFloat)arg1 ;
+(id)_lessSaturatedColorWithColor:(id)arg0 ;
+(id)_scheduleMarkerStyleWithColor:(id)arg0 ;
+(id)_seriesStrokeStyle;
+(id)_sleepSeriesAxisForSleepSeries:(id)arg0 sleepSeriesType:(NSInteger)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 numericAxisConfigurationOverrides:(id)arg4 ;
+(id)_sleepSeriesForType:(NSInteger)arg0 timeScope:(NSInteger)arg1 ;
+(id)_standardRangeDataForSleepDays:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)buildSleepChartCachesWithDisplayType:(id)arg0 dataSourceProvider:(id)arg1 cacheController:(id)arg2 healthStore:(id)arg3 ;
+(id)buildSleepGraphSeriesForSleepSeriesType:(NSInteger)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 numericAxisConfigurationOverrides:(id)arg3 timeScope:(NSInteger)arg4 ;
+(id)buildSleepGraphSeriesMappingWithSleepSeriesType:(NSInteger)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 numericAxisConfigurationOverrides:(id)arg3 ;
+(id)durationGoalForSleepDay:(id)arg0 ;
+(id)fillStyleForSleepCategoryValue:(NSInteger)arg0 isActive:(BOOL)arg1 ;
+(id)localizedInfographicDescriptionForCategoryValue:(NSInteger)arg0 ;
+(id)localizedInfographicTitleForCategoryValue:(NSInteger)arg0 ;
+(id)rangeDataForSleepChartInfo:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)sleepDaySummaryNoonAlignedXValue:(id)arg0 ;
+(id)sleepDaySummaryStandardXValue:(id)arg0 ;
+(id)sleepDisplayTypesWithHealthStore:(id)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4 sleepChartFormatter:(id)arg5 sleepSeriesType:(NSInteger)arg6 sleepChartCaches:(id)arg7 customSleepSeries:(id)arg8 isStackedChart:(BOOL)arg9 ;
+(id)sleepDisplayTypesWithHealthStore:(id)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4 sleepChartFormatter:(id)arg5 sleepSeriesType:(NSInteger)arg6 sleepChartCaches:(id)arg7 customSleepSeriesMapping:(id)arg8 isStackedChart:(BOOL)arg9 ;
+(id)sleepDurationNoDataRange;
+(id)sleepStageContextTitleForSleepValue:(NSInteger)arg0 timeScope:(NSInteger)arg1 ;
+(id)sleepStageFillStylesWithActiveSleepStage:(id)arg0 ;
+(id)verticalNumericalAxisWithConfigurationOverrides:(id)arg0 ;
+(void)_applyModificationsToSleepSeries:(id)arg0 sleepSeriesType:(NSInteger)arg1 sleepDisplayType:(id)arg2 timeScope:(NSInteger)arg3 unitController:(id)arg4 numericAxisConfigurationOverrides:(id)arg5 ;


@end


#endif