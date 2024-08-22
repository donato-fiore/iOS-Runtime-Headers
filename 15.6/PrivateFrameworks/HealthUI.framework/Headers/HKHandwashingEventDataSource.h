// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHANDWASHINGEVENTDATASOURCE_H
#define HKHANDWASHINGEVENTDATASOURCE_H



#import "HKHealthQueryChartCacheDataSource.h"

@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource

@property (nonatomic) NSInteger timeScope; // ivar: _timeScope
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


+(CGFloat)durationForCompleteSample;
-(BOOL)doesDurationMeetGoal:(CGFloat)arg0 ;
-(BOOL)supportsChartQueryDataGeneration;
-(CGFloat)durationForObject:(id)arg0 ;
-(id)_averageDurationChartModelForObjects:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)_dailyAverageChartModelForObjects:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)chartModelsForSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)chartPointsForSamples:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif