// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCEVENTROUTERSERVER_H
#define HMDXPCEVENTROUTERSERVER_H

@class NSString, NSMapTable, HMFMessageDispatcher, NSUUID, NSNotificationCenter, HMEPersistentConnectionServer;
@protocol HMFMessageReceiver, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDXPCEventRouterServer : NSObject <HMFMessageReceiver, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource, HMFLogging>



@property (readonly, copy) NSString *changeRegistrationsMessageName; // ivar: _changeRegistrationsMessageName
@property (retain) NSMapTable *clientToRegistrationMapping; // ivar: _clientToRegistrationMapping
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *messageUUID; // ivar: _messageUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMEPersistentConnectionServer *persistentConnectionServer; // ivar: _persistentConnectionServer
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateEventsMessageName; // ivar: _updateEventsMessageName
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)shouldAllowEvent:(id)arg0 topic:(id)arg1 connection:(id)arg2 ;
-(NSUInteger)debounceTimeForConnection:(id)arg0 ;
-(id)dumpStateDescription;
-(id)initWithMessageUUID:(id)arg0 changeRegistrationsMessageName:(id)arg1 updateEventsMessageName:(id)arg2 messageDispatcher:(id)arg3 queue:(id)arg4 notificationCenter:(id)arg5 persistentConnectionServerFactory:(id)arg6 ;
-(id)initWithMessageUUID:(id)arg0 changeRegistrationsMessageName:(id)arg1 updateEventsMessageName:(id)arg2 messageDispatcher:(id)arg3 queue:(id)arg4 notificationCenter:(id)arg5 subscriptionProvider:(id)arg6 registrationEventRouter:(id)arg7 storeReadHandle:(id)arg8 ;
-(id)logIdentifier;
-(void)_handleChangeRegistrationsRequest:(id)arg0 ;
-(void)configure;
-(void)handleConnectionActiveStateChange:(id)arg0 ;
-(void)handleXPCConnectionInvalidated:(id)arg0 ;
-(void)registerForMessages;
-(void)sendUpdatedCachedEvents:(id)arg0 toConnection:(id)arg1 ;
-(void)sendUpdatedEvents:(id)arg0 toConnection:(id)arg1 ;


@end


#endif