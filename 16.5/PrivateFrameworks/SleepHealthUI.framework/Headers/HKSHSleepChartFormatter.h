// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHSLEEPCHARTFORMATTER_H
#define HKSHSLEEPCHARTFORMATTER_H

@class HKInteractiveChartDataFormatter, HKHealthStore;



@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(NSInteger)_statisticsTypeForSummaries:(id)arg0 calendar:(id)arg1 ;
-(id)_attributedValueString:(id)arg0 valueFont:(id)arg1 ;
-(id)_firstCalendarForSummaries:(id)arg0 ;
-(id)_firstDateForSummaries:(id)arg0 ;
-(id)_lastSleepGoalForSummaries:(id)arg0 ;
-(id)_localizedSchedulesFromSummaries:(id)arg0 timeFont:(id)arg1 amPmFont:(id)arg2 ;
-(id)_longTitleForSelectedRangeDataType:(NSInteger)arg0 statisticsType:(NSInteger)arg1 ;
-(id)_prefixColorForSleepValue:(NSInteger)arg0 isPrefixColorActive:(id)arg1 ;
-(id)_rangeDataForAverageInBedStartTime:(id)arg0 averageInBedEndTime:(id)arg1 averageSleepStartTime:(id)arg2 averageSleepEndTime:(id)arg3 inBedDuration:(id)arg4 sleepDuration:(id)arg5 calendar:(id)arg6 firstDayStart:(id)arg7 timeFont:(id)arg8 amPmFont:(id)arg9 formatterOptions:(NSUInteger)arg10 ;
-(id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
-(id)_rangeDataForDurationValue:(id)arg0 dataType:(NSInteger)arg1 sleepValue:(NSInteger)arg2 isPrefixColorActive:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 statisticsType:(NSInteger)arg6 formatterOptions:(NSUInteger)arg7 ;
-(id)_rangeDataForInBedDuration:(id)arg0 sleepDuration:(id)arg1 awakeDuration:(id)arg2 asleepCoreDuration:(id)arg3 asleepDeepDuration:(id)arg4 asleepREMDuration:(id)arg5 overrideDuration:(id)arg6 arePrefixColorsActive:(id)arg7 statisticsType:(NSInteger)arg8 valueFont:(id)arg9 unitFont:(id)arg10 formatterOptions:(NSUInteger)arg11 ;
-(id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)arg0 timeFont:(id)arg1 amPmFont:(id)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;


@end


#endif