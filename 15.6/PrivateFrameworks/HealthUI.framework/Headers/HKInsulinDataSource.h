// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINSULINDATASOURCE_H
#define HKINSULINDATASOURCE_H



#import "HKHealthQueryChartCacheDataSource.h"

@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(BOOL)supportsChartQueryDataGeneration;
-(id)_chartPointsWithBasalInsulinValues:(id)arg0 withTotalInsulinValues:(id)arg1 filterInterval:(id)arg2 sourceTimeZone:(id)arg3 ;
-(id)_dailyAverageInsulinValuesFromStatistics:(id)arg0 queryStartDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)_insulinDataSourceQueryDataFromBasalStatisticsCollection:(id)arg0 totalStatisticsCollection:(id)arg1 queryStartDate:(id)arg2 statisticsInterval:(id)arg3 ;
-(id)_insulinValuesFromStatistics:(id)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif