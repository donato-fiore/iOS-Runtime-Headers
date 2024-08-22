// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARESIDENTMESSAGEHANDLER_H
#define HMDCAMERARESIDENTMESSAGEHANDLER_H

@class HMFObject, NSString, NSMutableDictionary;
@protocol HMFLogging;


#import "HMDAccessory.h"
#import "HMDMessageDispatcher.h"
#import "HMDDevice.h"

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier; // ivar: _queuedMessagesByDeviceIdentifier
@property (readonly) HMDDevice *remoteAccessDevice;
@property (readonly, getter=isRemoteAccessDeviceReachable) BOOL remoteAccessDeviceReachable;
@property (readonly) Class superclass;
@property (readonly, getter=isUsingCompanionForRemoteAccessDevice) BOOL usingCompanionForRemoteAccessDevice;


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 logIdentifier:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 logIdentifier:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)nextMessageForDeviceIdentifier:(id)arg0 ;
-(void)dequeueRespondedMessageForDeviceIdentifier:(id)arg0 ;
-(void)enqueueMessage:(id)arg0 forDeviceIdentifier:(id)arg1 ;
-(void)sendMessageWithName:(id)arg0 cameraSessionID:(id)arg1 payload:(id)arg2 target:(id)arg3 device:(id)arg4 responseQueue:(id)arg5 responseHandler:(id)arg6 ;
-(void)sendMessageWithName:(id)arg0 cameraSessionID:(id)arg1 payload:(id)arg2 target:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5 ;
-(void)sendNextMessageForDeviceIdentifier:(id)arg0 ;


@end


#endif