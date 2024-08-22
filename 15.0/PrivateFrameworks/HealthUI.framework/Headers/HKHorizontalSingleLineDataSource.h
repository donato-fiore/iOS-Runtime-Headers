// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHORIZONTALSINGLELINEDATASOURCE_H
#define HKHORIZONTALSINGLELINEDATASOURCE_H

@class HKSampleType;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(BOOL)supportsChartQueryDataGeneration;
-(id)_chartPointsWithSamples:(id)arg0 blockStart:(id)arg1 blockEnd:(id)arg2 sourceTimeZone:(id)arg3 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;
-(void)applyMarkStyleToPoint:(id)arg0 sample:(id)arg1 ;


@end


#endif