// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHORIZONTALTIMEPERIODDATASOURCE_H
#define HKHORIZONTALTIMEPERIODDATASOURCE_H

@class HKSampleType, NSArray;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock
@property (retain, nonatomic) NSArray *valueOrder; // ivar: _valueOrder


-(BOOL)supportsChartQueryDataGeneration;
-(id)_chartPointsWithDateIntervalsByValue:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)_codableQueryDataWithSamples:(id)arg0 ;
-(id)_dateIntervalsByValueWithCodableQueryData:(id)arg0 ;
-(id)_organizeSamplesByValueAndDateInterval:(id)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif