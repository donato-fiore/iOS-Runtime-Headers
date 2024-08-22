// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAACTIONROUTER_H
#define HMDMEDIAACTIONROUTER_H

@class HMFObject, NSString, NSUUID;
@protocol HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver, HMDMediaActionRouterDataSource, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDMPCSessionController.h"
#import "HMDResidentDevice.h"

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>



@property (readonly, weak, nonatomic) NSObject<HMDMediaActionRouterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // ivar: _mpcSessionController
@property (readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice; // ivar: _shouldExecuteOnCurrentDevice
@property (readonly) Class superclass;
@property (weak, nonatomic) HMDResidentDevice *targetResidentDeviceOverride; // ivar: _targetResidentDeviceOverride


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)mediaProfileWithUUID:(id)arg0 ;
-(id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg0 targetSystemMediaApplication:(BOOL)arg1 ;
-(void)_registerForMessages;
-(void)dealloc;
-(void)executeMediaActionWithSessionData:(id)arg0 completion:(id)arg1 ;
-(void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)arg0 targetSystemMediaApplication:(BOOL)arg1 outResidentDevicesInMediaAction:(*id)arg2 outHomePodsInMediaAction:(*id)arg3 outResidentDevicesSupportingMediaActions:(*id)arg4 outHomePodsSupportingMediaActions:(*id)arg5 outNonOdeonHomePodsSupportingMediaActions:(*id)arg6 outNonOdeonResidentDevicesSupportingMediaActions:(*id)arg7 outNonOdeonResidentDevicesInMediaAction:(*id)arg8 outNonOdeonHomePodsInMediaAction:(*id)arg9 dataSource:(id)arg10 ;
-(void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg0 encodePlaybackArchive:(BOOL)arg1 completion:(id)arg2 ;
-(void)routeMediaActionForExecution:(id)arg0 source:(NSUInteger)arg1 clientName:(id)arg2 completion:(id)arg3 ;
-(void)routeMessage:(id)arg0 ;
-(void)routeSessionDataForExecution:(id)arg0 encodePlaybackArchive:(BOOL)arg1 completion:(id)arg2 ;
-(void)sendMediaActionMessageToCompanionWithSessionData:(id)arg0 encodePlaybackArchive:(BOOL)arg1 completion:(id)arg2 ;
-(void)sendMediaActionMessageToDevice:(id)arg0 sessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 canForwardMessage:(BOOL)arg3 completion:(id)arg4 ;
-(void)sendMediaActionMessageToResident:(id)arg0 sessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif