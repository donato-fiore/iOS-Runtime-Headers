// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERDEVICECAPABILITIESREQUESTMANAGER_H
#define HMDUSERDEVICECAPABILITIESREQUESTMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSString, NSUUID;
@protocol HMDTimerManagerDelegate, HMFMessageReceiver, HMDUserDeviceCapabilitiesRequestManager, HMDTimerManager, OS_dispatch_queue;


#import "HMDRemoteMessageTransport.h"
#import "HMDHomeManager.h"
#import "HMDMessageDispatcher.h"

@interface HMDUserDeviceCapabilitiesRequestManager : HMDRemoteMessageTransport <HMDTimerManagerDelegate, HMFMessageReceiver, HMDUserDeviceCapabilitiesRequestManager>

 {
    os_unfair_lock_s _lock;
    HMDHomeManager *_homeManager;
    HMDMessageDispatcher *_messageDispatcher;
    NSMutableDictionary *_requestContexts;
    id<HMDTimerManager> *_timerManager;
    NSMutableArray *_timerContextsToCancel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_responseHandlerForTransactionID:(SEL)arg0 ;
-(id)_selectBestResponseForContext:(id)arg0 ;
-(id)_updateDeviceCapabilities:(id)arg0 withDestination:(id)arg1 ;
-(id)initWithHomeManager:(id)arg0 accountRegistry:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)initWithHomeManager:(id)arg0 accountRegistry:(id)arg1 messageDispatcher:(id)arg2 timerManager:(id)arg3 ;
-(void)_cancelPendingTimerContexts;
-(void)_completeWithResponse:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)_handleRequestCapabilitiesXPCRequest:(id)arg0 ;
-(void)_handleResponsePayload:(id)arg0 error:(id)arg1 transactionID:(id)arg2 ;
-(void)_updateResponseTimeoutForContext:(id)arg0 ;
-(void)electDeviceForUserID:(id)arg0 destination:(id)arg1 deviceCapabilities:(id)arg2 responseTimeout:(CGFloat)arg3 responseQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)registerForMessages;
-(void)timerManager:(id)arg0 didFireForTimerContext:(id)arg1 ;


@end


#endif