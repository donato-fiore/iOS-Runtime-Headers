// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERCLIENT_H
#define HMDREMOTEEVENTROUTERCLIENT_H

@class NSString, HMEMessageDatagramClient, NSUUID, HMFMessageDispatcher, NSNotificationCenter;
@protocol HMFMessageReceiver, HMFLogging, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMDRemoteEventRouterAssertionClient, OS_os_log, HMDRemoteEventRouterClientDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterClient : NSObject <HMFMessageReceiver, HMFLogging, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMDRemoteEventRouterAssertionClient>

 {
    NSObject<OS_os_log> *_logger;
    BOOL _isPrimaryResident;
    os_unfair_lock_s _lock;
}


@property (readonly, weak) NSObject<HMDRemoteEventRouterClientDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMEMessageDatagramClient *eventRouterClient; // ivar: _eventRouterClient
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isNetworkAvailable; // ivar: _isNetworkAvailable
@property (readonly) BOOL isPrimaryResident;
@property (readonly, weak) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSUInteger messageTransportRestriction;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSString *requestMessageName; // ivar: _requestMessageName
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateMessageName; // ivar: _updateMessageName
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)routerClientWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 logCategory:(char *)arg3 ;
+(id)routerClientWithQueue:(id)arg0 storeReadHandle:(id)arg1 storeWriteHandle:(id)arg2 retryIntervalProvider:(id)arg3 logCategory:(char *)arg4 ;
-(BOOL)client:(id)arg0 isConnectionTerminatingError:(id)arg1 ;
-(BOOL)clientIsEnabled:(id)arg0 ;
-(id)_underlyingMessageDataFromFragmentMessageData:(id)arg0 error:(*id)arg1 ;
-(id)client:(id)arg0 forwardingTopicsForTopics:(id)arg1 ;
-(id)client:(id)arg0 upstreamTopicsForTopic:(id)arg1 ;
-(id)dumpStateDescription;
-(id)eventRouter;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 logCategory:(char *)arg7 logEventSubmitter:(id)arg8 eventRouterClientFactory:(id)arg9 ;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 ;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 logCategory:(char *)arg9 ;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 retryIntervalProvider:(id)arg9 logCategory:(char *)arg10 ;
-(id)logIdentifier;
-(void)_handleCachedEventMessage:(id)arg0 fromServer:(id)arg1 events:(id)arg2 completion:(id)arg3 ;
-(void)_handleEventUpdateMessage:(id)arg0 fromServer:(id)arg1 events:(id)arg2 completion:(id)arg3 ;
-(void)_handleUpdateMessage:(id)arg0 ;
-(void)_handleUpdatedEventsRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_registerForMessages:(id)arg0 ;
-(void)client:(id)arg0 fetchWithFilters:(id)arg1 completion:(id)arg2 ;
-(void)client:(id)arg0 sendChangeRegistrationsWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(id)arg3 ;
-(void)client:(id)arg0 sendConnectWithAddedFilters:(id)arg1 completion:(id)arg2 ;
-(void)clientDidConnect:(id)arg0 serverIdentifier:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)configureIsPrimaryResident:(BOOL)arg0 networkAvailable:(BOOL)arg1 additionalPolicies:(id)arg2 ;
-(void)didChangeFetchAvailableCondition:(BOOL)arg0 ;
-(void)didChangeHasForegroundClient:(BOOL)arg0 ;
-(void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg0 ;
-(void)networkAvailabilityDidChange:(BOOL)arg0 ;
-(void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg0 removedFilters:(id)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg0 removedFilters:(id)arg1 completion:(id)arg2 ;
-(void)sendDisconnectForClient:(id)arg0 completion:(id)arg1 ;
-(void)sendKeepAliveForClient:(id)arg0 completion:(id)arg1 ;
-(void)sendMessageWithPayloadMessage:(id)arg0 client:(id)arg1 messageType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)sendMessageWithPayloadMessage:(id)arg0 messageType:(NSInteger)arg1 destination:(id)arg2 serverIdentifier:(id)arg3 completion:(id)arg4 ;


@end


#endif