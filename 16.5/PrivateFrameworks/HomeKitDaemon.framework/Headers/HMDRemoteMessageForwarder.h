// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEMESSAGEFORWARDER_H
#define HMDREMOTEMESSAGEFORWARDER_H

@class HMFObject, NSUUID, NSString, HMFMessageDispatcher, NSMutableDictionary;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDRemoteMessageForwarder : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSUUID *contextUUID; // ivar: _contextUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSMutableDictionary *messagesByIdentifier; // ivar: _messagesByIdentifier
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)remoteMessageForwarderUUIDFromUUID:(id)arg0 ;
-(id)initWithHome:(id)arg0 UUID:(id)arg1 workQueue:(id)arg2 ;
-(id)messageForForwardedMessage:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 ;
-(void)handleResponseMessage:(id)arg0 ;
-(void)redispatchToResidentMessage:(id)arg0 ;


@end


#endif