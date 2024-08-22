// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKJULIANINDEXEDSEVENDAYQUANTITYDATASOURCE_H
#define HKJULIANINDEXEDSEVENDAYQUANTITYDATASOURCE_H

@class HKCalendarCache, HKQuantityType;


#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKJulianIndexedSevenDayQuantityDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKCalendarCache *calendarCache; // ivar: _calendarCache
@property (nonatomic) NSInteger dataSourceType; // ivar: _dataSourceType
@property (readonly, nonatomic) id *intervalUserInfoCreationBlock; // ivar: _intervalUserInfoCreationBlock
@property (readonly, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, nonatomic) id *singlePointUserInfoCreationBlock; // ivar: _singlePointUserInfoCreationBlock
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(BOOL)supportsChartQueryDataGeneration;
-(id)_createIntervalChartPointFromDateInterval:(id)arg0 timeZoneName:(id)arg1 yValue:(id)arg2 metadata:(id)arg3 ;
-(id)_createSinglePointChartPointFromDateInterval:(id)arg0 statisticsInterval:(id)arg1 timeZoneName:(id)arg2 yValue:(id)arg3 metadata:(id)arg4 ;
-(id)_intervalChartPointsWithSamples:(id)arg0 ;
-(id)_singlePointChartPointsWithSamples:(id)arg0 statisticsInterval:(id)arg1 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 quantityType:(id)arg2 unitController:(id)arg3 intervalUserInfoCreationBlock:(id)arg4 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 quantityType:(id)arg2 unitController:(id)arg3 singlePointUserInfoCreationBlock:(id)arg4 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif