// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYMESSENGER_H
#define HMDAPPLEMEDIAACCESSORYMESSENGER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue, HMDMessageRouter;


#import "HMDAppleMediaAccessoryLocalMessageHandler.h"

@interface HMDAppleMediaAccessoryMessenger : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler; // ivar: _localHandler
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSObject<HMDMessageRouter> *router; // ivar: _router
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 router:(id)arg2 localHandler:(id)arg3 ;
-(id)logIdentifier;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg0 ;
-(void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif