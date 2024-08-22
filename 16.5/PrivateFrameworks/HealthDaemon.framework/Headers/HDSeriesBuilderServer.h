// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSERIESBUILDERSERVER_H
#define HDSERIESBUILDERSERVER_H

@class HKSeriesBuilderConfiguration, NSString, HKSeriesSample;
@protocol HKSeriesBuilderServerInterface, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDSeriesBuilderEntity.h"

@interface HDSeriesBuilderServer : HDStandardTaskServer <HKSeriesBuilderServerInterface>



@property (copy, nonatomic) HKSeriesBuilderConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDSeriesBuilderEntity *persistentEntity; // ivar: _persistentEntity
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSInteger queue_state; // ivar: _queue_state
@property (retain, nonatomic) HKSeriesSample *seriesSample; // ivar: _seriesSample
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(id)requiredEntitlements;
-(BOOL)canAddMetadata:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)queue_canInsertDataWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)associateToWorkoutBuilderWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
// -(void)createSeriesSampleIfNeeded:(id)arg0 errorHandler:(unk)arg1  ;
-(void)queue_freezeBuilderWithCompletion:(id)arg0 ;
-(void)queue_setState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)remote_discardWithCompletion:(id)arg0 ;
-(void)remote_freezeWithCompletion:(id)arg0 ;
-(void)remote_recoverWithCompletion:(id)arg0 ;


@end


#endif