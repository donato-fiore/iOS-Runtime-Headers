// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKTIMEPERIODSERIESDATASOURCE_H
#define HKTIMEPERIODSERIESDATASOURCE_H

@class NSPredicate, HKSampleType;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSPredicate *queryPredicate; // ivar: _queryPredicate
@property (retain, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(BOOL)supportsChartQueryDataGeneration;
-(id)_calculateTotalDurationFromSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 interval:(id)arg3 intervalOut:(*id)arg4 intervalCountsOut:(*id)arg5 ;
-(id)_chartPointsWithStatisticsInterval:(id)arg0 dateIntervalsToTotals:(id)arg1 intervalCounts:(id)arg2 sourceTimeZone:(id)arg3 ;
-(id)_codableDataWithSamples:(id)arg0 blockStart:(id)arg1 blockEnd:(id)arg2 intervalComponents:(id)arg3 ;
-(id)_codableTimePeriodDataWithDictionary:(id)arg0 ;
-(id)_startOfDayTransform:(SEL)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif