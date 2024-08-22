// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPCHARTDATASOURCE_H
#define HKSLEEPCHARTDATASOURCE_H

@class NSString, NSCalendar;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource

@property (readonly, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSString *queryIdentifier; // ivar: _queryIdentifier
@property (readonly, nonatomic) NSUInteger queryOptions; // ivar: _queryOptions


-(BOOL)supportsChartQueryDataGeneration;
-(id)_mappingFunctionForComparisonChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForConsistencyChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForDurationChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForStagesChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForStagesDurationChartWithContext:(SEL)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithHealthStore:(id)arg0 representativeDisplayType:(id)arg1 queryOptions:(NSUInteger)arg2 cacheIdentifier:(id)arg3 queryIdentifier:(id)arg4 calendar:(id)arg5 ;
-(id)mappingFunctionForContext:(SEL)arg0 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif