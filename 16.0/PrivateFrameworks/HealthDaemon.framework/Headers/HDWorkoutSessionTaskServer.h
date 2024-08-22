// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTSESSIONTASKSERVER_H
#define HDWORKOUTSESSIONTASKSERVER_H

@class HKWorkoutSessionTaskConfiguration, HKDataFlowLink, HKSource, NSString, NSUUID;
@protocol HKWorkoutSessionServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutSessionObserver, HDWorkoutDataAccumulator;


#import "HDStandardTaskServer.h"
#import "HDWorkoutSessionServer.h"
#import "HDWorkoutBuilderEntity.h"

@interface HDWorkoutSessionTaskServer : HDStandardTaskServer <HKWorkoutSessionServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutSessionObserver>

 {
    os_unfair_lock_s _lock;
    HKWorkoutSessionTaskConfiguration *_taskConfiguration;
    HDWorkoutSessionServer *_sessionServer;
    HKDataFlowLink *_workoutDataFlowLink;
    HDWorkoutBuilderEntity *_builderEntity;
    id<HDWorkoutDataAccumulator> *_accumulator;
}


@property (readonly, copy, nonatomic) HKSource *clientSource; // ivar: _clientSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion;
@property (readonly, nonatomic) BOOL shouldStopPreviousSession;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supports3rdPartyAOT;
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) NSUInteger workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)addMetadata:(id)arg0 dataSource:(id)arg1 ;
-(void)addOtherSamples:(id)arg0 dataSource:(id)arg1 ;
-(void)addQuantities:(id)arg0 dataSource:(id)arg1 ;
-(void)addWorkoutEvents:(id)arg0 dataSource:(id)arg1 ;
-(void)connectionConfigured;
-(void)connectionInvalidated;
-(void)didBeginActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)didEndActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)didSuggestActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)observeWorkoutSessionServer:(id)arg0 ;
-(void)remote_beginNewActivityWithConfiguration:(id)arg0 date:(id)arg1 metadata:(id)arg2 completion:(id)arg3 ;
-(void)remote_enableAutomaticDetectionForActivityConfigurations:(id)arg0 completion:(id)arg1 ;
-(void)remote_endCurrentActivityOnDate:(id)arg0 completion:(id)arg1 ;
-(void)remote_recoverWithCompletion:(id)arg0 ;
-(void)remote_setTargetState:(NSInteger)arg0 date:(id)arg1 completion:(id)arg2 ;
-(void)setAssociatedWorkoutBuilderEntity:(id)arg0 ;
-(void)updateWorkoutConfiguration:(id)arg0 dataSource:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)workoutDataDestination:(id)arg0 didEndActivity:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 requestsDataFrom:(id)arg1 to:(id)arg2 ;
-(void)workoutDataDestination:(id)arg0 requestsFinalDataFrom:(id)arg1 to:(id)arg2 completion:(id)arg3 ;
-(void)workoutSession:(id)arg0 didChangeToState:(NSInteger)arg1 fromState:(NSInteger)arg2 date:(id)arg3 ;
-(void)workoutSession:(id)arg0 didFailWithError:(id)arg1 ;
-(void)workoutSession:(id)arg0 didGenerateEvent:(id)arg1 ;


@end


#endif