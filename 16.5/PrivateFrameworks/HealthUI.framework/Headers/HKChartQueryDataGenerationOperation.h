// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCHARTQUERYDATAGENERATIONOPERATION_H
#define HKCHARTQUERYDATAGENERATIONOPERATION_H

@class HKHealthStore, NSDate, NSDateComponents;


#import "HKChartCacheFetchOperation.h"
#import "HKHealthQueryChartCacheDataSource.h"

@interface HKChartQueryDataGenerationOperation : HKChartCacheFetchOperation {
    HKHealthStore *_healthStore;
    HKHealthQueryChartCacheDataSource *_dataSource;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_statisticsInterval;
    id *_clientCompletion;
    id *_fetchOperationManager;
    id *_cancelHandler;
}




-(id)initWithHealthStore:(id)arg0 dataSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4 operationDescription:(id)arg5 completion:(id)arg6 ;
-(void)completedWithResults:(id)arg0 error:(id)arg1 ;
-(void)startOperationWithCompletion:(id)arg0 ;
-(void)stopOperation;


@end


#endif