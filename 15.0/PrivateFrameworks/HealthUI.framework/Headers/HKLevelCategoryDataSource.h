// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLEVELCATEGORYDATASOURCE_H
#define HKLEVELCATEGORYDATASOURCE_H

@class HKSampleType, NSArray;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id *pointStyleBlock; // ivar: _pointStyleBlock
@property (retain, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock
@property (retain, nonatomic) NSArray *valueOrder; // ivar: _valueOrder


-(BOOL)supportsChartQueryDataGeneration;
-(id)_chartPointsWithSamples:(id)arg0 sourceTimeZone:(id)arg1 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif