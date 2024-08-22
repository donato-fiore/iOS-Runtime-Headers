// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHQUERYFETCHOPERATION_H
#define HKHEALTHQUERYFETCHOPERATION_H

@class HKHealthStore, NSArray;


#import "HKChartCacheFetchOperation.h"

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
    HKHealthStore *_healthStore;
    id *_clientCompletion;
    id *_fetchOperationManager;
}


@property (retain, nonatomic) NSArray *queries; // ivar: _queries


-(id)initWithHealthStore:(id)arg0 operationDescription:(id)arg1 completion:(id)arg2 ;
-(void)completedWithResults:(id)arg0 error:(id)arg1 ;
-(void)startOperationWithCompletion:(id)arg0 ;
-(void)stopOperation;


@end


#endif