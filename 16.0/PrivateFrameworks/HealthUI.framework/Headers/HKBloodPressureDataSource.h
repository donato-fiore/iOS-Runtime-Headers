// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKBLOODPRESSUREDATASOURCE_H
#define HKBLOODPRESSUREDATASOURCE_H



#import "HKHealthQueryChartCacheDataSource.h"

@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(BOOL)supportsChartQueryDataGeneration;
-(NSUInteger)queryStatisticsOption;
-(id)_chartPointsWithSystolicResults:(id)arg0 diastolicResults:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 sourceTimeZone:(id)arg4 ;
-(id)_earliestDateForSystolicResults:(id)arg0 diastolicResults:(id)arg1 ;
-(id)_latestDateForSystolicResults:(id)arg0 diastolicResults:(id)arg1 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif