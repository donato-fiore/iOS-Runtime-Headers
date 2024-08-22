// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPUTILITIES_H
#define HKSLEEPUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKSleepUtilities : NSObject



+(NSInteger)_axisPurposeForSleepSeriesType:(NSInteger)arg0 ;
+(id)_durationGoalDataForSleepDays:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)_fillStylesFromColors:(id)arg0 ;
+(id)_generateDailyTimePeriodSeries;
+(id)_generateDailyTimePeriodSeriesWithSchedules;
+(id)_generateDurationSleepGoalSeries;
+(id)_generateDurationSleepSeries;
+(id)_goalLineMarkerStyle;
+(id)_goalLineStrokeStyle;
+(id)_lessSaturatedColorWithColor:(id)arg0 ;
+(id)_scheduleMarkerStyleWithColor:(id)arg0 ;
+(id)_sleepSeriesAxisForSleepSeriesType:(NSInteger)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 ;
+(id)_sleepSeriesForType:(NSInteger)arg0 ;
+(id)_standardRangeDataForSleepDays:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)buildPrimarySleepCacheWithHealthStore:(id)arg0 sleepDisplayType:(id)arg1 sleepDataSourceProvider:(id)arg2 chartCacheController:(id)arg3 ;
+(id)buildSleepGraphSeriesForSleepSeriesType:(NSInteger)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 ;
+(id)durationGoalForSleepDay:(id)arg0 ;
+(id)rangeDataForSleepChartInfo:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
+(id)sleepDisplayTypesWithHealthStore:(id)arg0 sleepDisplayType:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4 sleepChartFormatter:(id)arg5 sleepSeriesType:(NSInteger)arg6 sharedSleepCache:(id)arg7 customSleepSeries:(id)arg8 ;
+(id)verticalNumericalAxis;
+(void)_applyModificationsToSleepSeries:(id)arg0 sleepSeriesType:(NSInteger)arg1 sleepDisplayType:(id)arg2 unitController:(id)arg3 ;


@end


#endif