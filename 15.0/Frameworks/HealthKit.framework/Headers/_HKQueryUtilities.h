// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKQUERYUTILITIES_H
#define _HKQUERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface _HKQueryUtilities : NSObject



+(BOOL)shouldUseDailyAverageWithDateComponents:(id)arg0 sampleType:(id)arg1 ;
+(CGFloat)totalDurationFromCoalescedDateIntervals:(id)arg0 ;
+(id)_processSleepQueryResults:(id)arg0 startDate:(id)arg1 intervalComponents:(id)arg2 sourceOrder:(id)arg3 calendar:(id)arg4 ;
+(id)arrayByCoalescingObjects:(id)arg0 startDate:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3 combiningBlock:(id)arg4 ;
+(id)averageSumFromQuantities:(id)arg0 unit:(id)arg1 ;
+(id)averageSumFromStatistics:(id)arg0 unit:(id)arg1 ;
+(id)calculateCountStatisticsWithSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 ;
+(id)calculateIncludedValuesWithSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 ;
+(id)calculateTotalDurationsWithTimePeriods:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 startOfDayTransform:(id)arg4 ;
+(id)coalesceTimePeriods:(id)arg0 strictStartDate:(id)arg1 strictEndDate:(id)arg2 ;
+(id)coalesceTimePeriodsFromSamples:(id)arg0 strictStartDate:(id)arg1 strictEndDate:(id)arg2 ;
+(id)coalesceTotalDurations:(id)arg0 startDate:(id)arg1 intervalComponents:(id)arg2 intervalRecordCountsOut:(*id)arg3 ;
+(id)countStatisticsQueryWithSampleType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 predicate:(id)arg4 completion:(id)arg5 ;
+(id)maximumFromQuantities:(id)arg0 unit:(id)arg1 ;
+(id)minimumFromQuantities:(id)arg0 unit:(id)arg1 ;
+(id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg0 ;
+(id)sleepQueryWithStartDate:(id)arg0 endDate:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3 predicate:(id)arg4 healthStore:(id)arg5 completion:(id)arg6 ;
+(void)_organizeSampleByStartDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 callback:(id)arg4 ;


@end


#endif