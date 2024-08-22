// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTELOGINBASE_H
#define HMDREMOTELOGINBASE_H

@class HMFObject, NSString, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"
#import "HMDRemoteLoginHandler.h"

@interface HMDRemoteLoginBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>



@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logString; // ivar: _logString
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, weak, nonatomic) HMDRemoteLoginHandler *remoteLoginHandler; // ivar: _remoteLoginHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 remoteLoginHandler:(id)arg2 ;
-(id)logIdentifier;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)registerForMessages;


@end


#endif