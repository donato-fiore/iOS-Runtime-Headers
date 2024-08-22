// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPANALYSISDATASOURCE_H
#define HKSLEEPANALYSISDATASOURCE_H



#import "HKHealthQueryChartCacheDataSource.h"

@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(id)_mappingFunctionForConsistencyChartWithContext:(SEL)arg0 ;
-(id)_mappingFunctionForDurationChartWithContext:(SEL)arg0 ;
-(id)mappingFunctionForContext:(SEL)arg0 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;


@end


#endif