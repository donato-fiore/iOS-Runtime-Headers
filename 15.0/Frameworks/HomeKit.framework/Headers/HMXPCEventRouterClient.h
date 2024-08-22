// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMXPCEVENTROUTERCLIENT_H
#define HMXPCEVENTROUTERCLIENT_H

@class NSString, HMEPersistentConnectionClient, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, HMEPersistentConnectionClientDelegate, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMXPCEventRouterClient : NSObject <HMFMessageReceiver, HMEPersistentConnectionClientDelegate, HMFLogging>



@property (readonly, copy) NSString *changeRegistrationsMessageName; // ivar: _changeRegistrationsMessageName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMEPersistentConnectionClient *eventRouterClient; // ivar: _eventRouterClient
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateMessageName; // ivar: _updateMessageName
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)eventRouter;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 changeRegistrationsMessageName:(id)arg3 updateMessageName:(id)arg4 eventRouterClientFactory:(id)arg5 ;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 changeRegistrationsMessageName:(id)arg3 updateMessageName:(id)arg4 storeReadHandle:(id)arg5 storeWriteHandle:(id)arg6 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)_handleUpdateEventsMessage:(id)arg0 ;
-(void)configure;
-(void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg0 removedFilters:(id)arg1 completion:(id)arg2 ;


@end


#endif