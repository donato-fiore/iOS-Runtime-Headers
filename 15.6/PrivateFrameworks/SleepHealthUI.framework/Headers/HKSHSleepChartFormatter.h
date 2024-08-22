// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHSLEEPCHARTFORMATTER_H
#define HKSHSLEEPCHARTFORMATTER_H

@class HKInteractiveChartDataFormatter, HKHealthStore;



@interface HKSHSleepChartFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(id)_attributedValueString:(id)arg0 valueFont:(id)arg1 ;
-(id)_firstCalendarForSummaries:(id)arg0 ;
-(id)_firstDateForSummaries:(id)arg0 ;
-(id)_lastSleepGoalForSummaries:(id)arg0 ;
-(id)_localizedSchedulesFromSummaries:(id)arg0 timeFont:(id)arg1 amPmFont:(id)arg2 ;
-(id)_rangeDataForAverageBedtime:(id)arg0 averageWakeTime:(id)arg1 averageSleepStartTime:(id)arg2 averageSleepEndTime:(id)arg3 calendar:(id)arg4 firstDayStart:(id)arg5 timeFont:(id)arg6 amPmFont:(id)arg7 ;
-(id)_rangeDataForDurationGoalWithSleepDaySummaries:(id)arg0 valueFont:(id)arg1 unitFont:(id)arg2 ;
-(id)_rangeDataForInBedDuration:(id)arg0 sleepDuration:(id)arg1 summaryCount:(NSInteger)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)_rangeDataForSleepScheduleWithSleepDaySummaries:(id)arg0 timeFont:(id)arg1 amPmFont:(id)arg2 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;


@end


#endif