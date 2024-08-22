// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTELOGINMESSAGESENDER_H
#define HMDREMOTELOGINMESSAGESENDER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"
#import "HMDDevice.h"

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging>



@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *target; // ivar: _target
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithTarget:(id)arg0 accessory:(id)arg1 device:(id)arg2 workQueue:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)logIdentifier;
-(void)sendRemoteMessageWithName:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif