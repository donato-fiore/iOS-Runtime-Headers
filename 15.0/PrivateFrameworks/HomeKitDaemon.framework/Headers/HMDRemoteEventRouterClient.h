// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERCLIENT_H
#define HMDREMOTEEVENTROUTERCLIENT_H

@class NSString, HMEMessageDatagramClient, NSUUID, HMFMessageDispatcher, NSNotificationCenter;
@protocol HMFMessageReceiver, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMFLogging, OS_os_log, HMDRemoteEventRouterClientDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterClient : NSObject <HMFMessageReceiver, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, weak) NSObject<HMDRemoteEventRouterClientDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMEMessageDatagramClient *eventRouterClient; // ivar: _eventRouterClient
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isNetworkAvailable; // ivar: _isNetworkAvailable
@property (nonatomic) BOOL isPrimaryResident; // ivar: _isPrimaryResident
@property (readonly, weak) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSUUID *primaryResidentIdentifier; // ivar: _primaryResidentIdentifier
@property (readonly, copy) NSString *requestMessageName; // ivar: _requestMessageName
@property (readonly) Class superclass;
@property (readonly, copy) NSString *updateMessageName; // ivar: _updateMessageName
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isEnabled;
-(BOOL)_serverSupportsFragmentMessage:(id)arg0 ;
-(BOOL)client:(id)arg0 isConnectionTerminatingError:(id)arg1 ;
-(BOOL)clientIsEnabled:(id)arg0 ;
-(id)_underlyingMessageDataFromFragmentMessageData:(id)arg0 error:(*id)arg1 ;
-(id)dumpStateDescription;
-(id)eventRouter;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 logCategory:(char *)arg7 logEventSubmitter:(id)arg8 eventRouterClientFactory:(id)arg9 ;
-(id)initWithMessageTargetUUID:(id)arg0 queue:(id)arg1 dataSource:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 storeReadHandle:(id)arg7 storeWriteHandle:(id)arg8 ;
-(id)logIdentifier;
-(void)_handleUpdateMessage:(id)arg0 ;
-(void)_handleUpdatedEventsRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleUpdatedPrimaryResidentNotification:(id)arg0 ;
-(void)_registerForMessages:(id)arg0 ;
-(void)client:(id)arg0 sendChangeRegistrationsWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(id)arg3 ;
-(void)client:(id)arg0 sendConnectWithAddedFilters:(id)arg1 completion:(id)arg2 ;
-(void)client:(id)arg0 sendDisconnectWithCompletion:(id)arg1 ;
-(void)client:(id)arg0 sendKeepAliveWithCompletion:(id)arg1 ;
-(void)clientDidConnect:(id)arg0 serverIdentifier:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)configureIsPrimaryResident:(BOOL)arg0 networkAvailable:(BOOL)arg1 additionalPolicies:(id)arg2 ;
-(void)networkAvailabilityDidChange:(BOOL)arg0 ;
-(void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg0 removedFilters:(id)arg1 completion:(id)arg2 ;
-(void)sendMessageWithPayloadMessage:(id)arg0 messageType:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif