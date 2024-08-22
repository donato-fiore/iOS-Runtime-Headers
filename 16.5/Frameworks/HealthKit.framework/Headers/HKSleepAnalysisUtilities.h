// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPANALYSISUTILITIES_H
#define HKSLEEPANALYSISUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKSleepAnalysisUtilities : NSObject



+(CGFloat)_durationFromDateIntervals:(id)arg0 ;
+(id)_aggregatedPeriodsForPeriodsBySource:(id)arg0 orderedSources:(id)arg1 ;
+(id)_periodsBySourceForSamples:(id)arg0 calendar:(id)arg1 ;
+(id)_samplesBySourceForSamples:(id)arg0 ;
+(id)boundingDateIntervalsForDateIntervals:(id)arg0 ;
+(id)dateIntervalBoundingSleepPeriods:(id)arg0 ;
+(id)filterSleepDays:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)filterSleepPeriods:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)filterSleepSamples:(id)arg0 categoryValue:(NSInteger)arg1 ;
+(id)sleepAnalysisForSleepDays:(id)arg0 ;
+(id)sleepAnalysisIntervalForStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 stratOfDayTransform:(id)arg3 ;
// +(id)sleepDaysFromQueryResult:(id)arg0 calendar:(id)arg1 startOfDayTransform:(id)arg2 orderedSources:(unk)arg3  ;
+(id)sleepPeriodSegmentsFromSleepSamples:(id)arg0 minimumInterSegmentTimeInterval:(CGFloat)arg1 categoryValue:(NSInteger)arg2 ;
+(id)sleepPeriodsFromSamples:(id)arg0 calendar:(id)arg1 ;
+(id)sortedSleepPeriodSegmentsFromSleepSamples:(id)arg0 ;
+(void)_enumerateSleepPeriodsForAnalysis:(id)arg0 calendar:(id)arg1 dateInterval:(id)arg2 dateComponents:(id)arg3 analysisBlock:(id)arg4 ;
+(void)categorizeSleepPeriods:(id)arg0 dateInterval:(id)arg1 calendar:(id)arg2 ;


@end


#endif