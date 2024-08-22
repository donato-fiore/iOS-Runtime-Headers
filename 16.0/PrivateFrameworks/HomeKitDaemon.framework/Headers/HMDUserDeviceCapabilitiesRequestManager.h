// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERDEVICECAPABILITIESREQUESTMANAGER_H
#define HMDUSERDEVICECAPABILITIESREQUESTMANAGER_H

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMFMessageReceiver, HMDUserDeviceCapabilitiesRequestManager, OS_dispatch_queue;


#import "HMDRemoteMessageTransport.h"
#import "HMDHomeManager.h"
#import "HMDMessageDispatcher.h"

@interface HMDUserDeviceCapabilitiesRequestManager : HMDRemoteMessageTransport <HMFMessageReceiver, HMDUserDeviceCapabilitiesRequestManager>

 {
    os_unfair_lock_s _lock;
    HMDHomeManager *_homeManager;
    HMDMessageDispatcher *_messageDispatcher;
    NSMutableDictionary *_requestContexts;
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
-(void)_completeWithResponse:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)_handleRequestCapabilitiesXPCRequest:(id)arg0 ;
-(void)_handleResponsePayload:(id)arg0 error:(id)arg1 transactionID:(id)arg2 ;
-(void)electDeviceForUserID:(id)arg0 destination:(id)arg1 deviceCapabilities:(id)arg2 responseTimeout:(CGFloat)arg3 responseQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)registerForMessages;


@end


#endif