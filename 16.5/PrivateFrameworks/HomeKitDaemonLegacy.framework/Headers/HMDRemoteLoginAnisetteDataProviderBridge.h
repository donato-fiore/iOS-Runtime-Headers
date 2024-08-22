// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTELOGINANISETTEDATAPROVIDERBRIDGE_H
#define HMDREMOTELOGINANISETTEDATAPROVIDERBRIDGE_H

@class HMFObject, NSString, NSSet, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDHomeMessageReceiver, NSSecureCoding, OS_dispatch_queue;


#import "HMDRemoteLoginMessageSender.h"

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject <HMFLogging, HMDHomeMessageReceiver, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // ivar: _remoteMessageSender
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)logIdentifier;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 remoteMessageSender:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerForMessages;


@end


#endif