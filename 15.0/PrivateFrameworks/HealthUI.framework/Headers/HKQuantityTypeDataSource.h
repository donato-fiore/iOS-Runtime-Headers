// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYTYPEDATASOURCE_H
#define HKQUANTITYTYPEDATASOURCE_H

@class HKQuantityType;


#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource {
    id *_mappingFunction;
}


@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) NSUInteger statisticsOptions; // ivar: _statisticsOptions
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(BOOL)supportsChartQueryDataGeneration;
-(id)_averageByInterval:(id)arg0 startDate:(id)arg1 statistics:(id)arg2 ;
-(id)_createMappingFunction:(SEL)arg0 ;
-(id)_dailyAverageQueriesWithStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completion:(id)arg3 ;
-(id)_defaultQueriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithUnitController:(id)arg0 options:(NSUInteger)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
-(id)mappingFunctionForContext:(SEL)arg0 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif