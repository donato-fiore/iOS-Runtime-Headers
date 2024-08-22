// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPCHARTDATASOURCE_H
#define HKSLEEPCHARTDATASOURCE_H

@class NSCalendar;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar


-(BOOL)supportsChartQueryDataGeneration;
-(CGFloat)_findMidPointOffsetForSummary:(id)arg0 sleepCategory:(NSInteger)arg1 ;
-(id)_chartPointDateForSummary:(id)arg0 ;
-(id)_computeAveragePeriodsFromSummaries:(id)arg0 summaryDateInterval:(id)arg1 ;
-(id)_computeOneWeeklySummary:(id)arg0 ;
-(id)_computeWeeklySummaries:(id)arg0 ;
-(id)_endOfWeekContainingDate:(id)arg0 ;
-(id)_lastNonEmptySchedules:(id)arg0 ;
-(id)_lastNonZeroDurationGoal:(id)arg0 ;
-(id)_mappingFunctionForConsistencyChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForDurationChartWithContext:(SEL)arg0 ;
-(id)_secondsFromStartDate:(id)arg0 dateComponents:(id)arg1 ;
-(id)_sleepDurationGoalFromQuantity:(id)arg0 ;
-(id)_sleepScheduleForSummary:(id)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithHealthStore:(id)arg0 representativeDisplayType:(id)arg1 calendar:(id)arg2 ;
-(id)mappingFunctionForContext:(SEL)arg0 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif