// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDQUANTITYSERIESBUILDERTASKSERVER_H
#define HDQUANTITYSERIESBUILDERTASKSERVER_H

@class HKQuantitySample, NSMutableArray, NSError, HKQuantitySeriesSampleBuilderTaskServerConfiguration;
@protocol HKQuantitySeriesSampleBuilderTaskServerInterface, OS_dispatch_queue;


#import "HDStandardTaskServer.h"

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HKQuantitySample *_series;
    NSInteger _state;
    NSMutableArray *_values;
    NSError *_fatalError;
    id *_queue_activeHandler;
    HKQuantitySeriesSampleBuilderTaskServerConfiguration *_configuration;
}


@property (readonly, nonatomic) NSInteger state;
@property (copy, nonatomic) id *unitTest_saveSamplesCompletion; // ivar: _unitTest_saveSamplesCompletion


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)remote_discardWithCompletion:(id)arg0 ;
-(void)remote_finishSeriesWithMetadata:(id)arg0 endDate:(id)arg1 finalSeries:(id)arg2 completion:(id)arg3 ;
-(void)remote_insertQuantitySeries:(id)arg0 completion:(id)arg1 ;


@end


#endif