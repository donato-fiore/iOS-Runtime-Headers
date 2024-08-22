// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMESSAGEHANDLER_H
#define HMDMESSAGEHANDLER_H

@class HMFObject, NSMutableDictionary, NSArray, NSString, HMFMessageDispatcher, NSUUID, NSNotificationCenter, NSDictionary;
@protocol HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver, HMDMessageHandlerDataSource, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDMessageHandlerMetricsDispatcher.h"

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_messageNameToQueuedIncomingMessages;
    NSMutableDictionary *_messageNameToQueuedOutgoingMessage;
    NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;
}


@property (readonly, copy) NSArray *adminPrivateRemoteMessages; // ivar: _adminPrivateRemoteMessages
@property (readonly) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (weak) NSObject<HMDMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasQueuedIncomingMessages;
@property (readonly) BOOL hasQueuedOutgoingMessages;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *internalMessages; // ivar: _internalMessages
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSArray *notifications; // ivar: _notifications
@property (readonly, copy) NSDictionary *notificationsToObject; // ivar: _notificationsToObject
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages; // ivar: _ownerPrivateRemoteMessages
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)hasQueuedIncomingMessage:(id)arg0 ;
-(BOOL)hasQueuedOutgoingMessage:(id)arg0 ;
-(BOOL)hasQueuedOutgoingMessagesForDevice:(id)arg0 ;
-(BOOL)isReadyForIncomingMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)isReadyForOutgoingMessaging;
-(BOOL)shouldRelayIncomingMessage:(id)arg0 error:(*id)arg1 ;
-(SEL)selectorForName:(id)arg0 ;
-(id)attributeDescriptions;
-(id)currentAccountDevice;
-(id)dequeueIncomingMessage:(id)arg0 ;
-(id)dequeueOutgoingMessage:(id)arg0 ;
-(id)dequeueQueuedIncomingMessages;
-(id)deviceForMessage:(id)arg0 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 ownerPrivateRemoteMessages:(id)arg3 adminPrivateRemoteMessages:(id)arg4 internalMessages:(id)arg5 notifications:(id)arg6 notificationsToObject:(id)arg7 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 ownerPrivateRemoteMessages:(id)arg3 adminPrivateRemoteMessages:(id)arg4 internalMessages:(id)arg5 notifications:(id)arg6 notificationsToObject:(id)arg7 appleAccountManager:(id)arg8 metricsDispatcher:(id)arg9 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)queuedIncomingMessages;
-(id)queuedOutgoingMessages;
-(id)queuedOutgoingMessagesForDevice:(id)arg0 ;
-(void)_cleanUpDeviceMappingsForMessage:(id)arg0 ;
-(void)associateDevice:(id)arg0 withOutgoingMessage:(id)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)didTriggerMessageHandlerQueuedMessage:(id)arg0 ;
-(void)didTriggerQueuedIncomingMessage:(id)arg0 ;
-(void)didTriggerQueuedOutgoingMessage:(id)arg0 ;
-(void)handleAccountAddedDeviceNotification:(id)arg0 ;
-(void)queueIncomingMessage:(id)arg0 ;
-(void)queueOutgoingMessage:(id)arg0 ;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)registerForNotifications;
-(void)registerForSPIRemoteMessages:(id)arg0 home:(id)arg1 userPrivilege:(NSUInteger)arg2 internalBuildOnly:(BOOL)arg3 ;
-(void)relayMessage:(id)arg0 ;
-(void)relayMessage:(id)arg0 shouldQueue:(BOOL)arg1 ;
-(void)routeMessage:(id)arg0 ;
-(void)routeMessage:(id)arg0 shouldQueue:(BOOL)arg1 ;
-(void)routeQueuedIncomingMessages;
-(void)sendQueuedOutgoingMessages;
-(void)sendQueuedOutgoingMessages:(id)arg0 ;
-(void)sendQueuedOutgoingMessagesForDevice:(id)arg0 ;
-(void)triggerQueuedIncomingMessagesTimeouts;
-(void)triggerQueuedOutgoingMessagesTimeouts;


@end


#endif