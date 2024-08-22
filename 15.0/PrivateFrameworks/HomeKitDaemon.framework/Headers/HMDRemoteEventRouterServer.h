// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERSERVER_H
#define HMDREMOTEEVENTROUTERSERVER_H

@class NSMutableDictionary, HMEMessageDatagramServer, NSDictionary, NSMutableArray, NSString, NSUUID, HMFMessageDispatcher, NSNotificationCenter;
@protocol HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate, HMFLogging, HMDRemoteEventAccessControlEnforcer, OS_os_log, HMDRemoteEventRouterServerDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDEventRouterTimerProvider.h"

@interface HMDRemoteEventRouterServer : NSObject <HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate, HMFLogging, HMDRemoteEventAccessControlEnforcer>

 {
    NSObject<OS_os_log> *_logger;
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableDictionary *accessControls; // ivar: _accessControls
@property (readonly) HMEMessageDatagramServer *connectionServer; // ivar: _connectionServer
@property (readonly, copy) NSDictionary *currentAccessControls;
@property (readonly) NSMutableArray *currentConnections; // ivar: _currentConnections
@property (readonly, weak) NSObject<HMDRemoteEventRouterServerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isPrimaryResident; // ivar: _isPrimaryResident
@property (readonly, weak) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSString *routerRequestMessageName; // ivar: _routerRequestMessageName
@property (readonly, copy) NSString *routerUpdateMessageName; // ivar: _routerUpdateMessageName
@property (readonly) Class superclass;
@property (readonly) HMDEventRouterTimerProvider *timerProvider; // ivar: _timerProvider
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)server:(id)arg0 isConnectionTerminatingError:(id)arg1 ;
-(BOOL)serverShouldProcessEvents:(id)arg0 ;
-(BOOL)shouldAllowEvent:(id)arg0 topic:(id)arg1 connection:(id)arg2 ;
-(CGFloat)server:(id)arg0 timeoutIntervalForConnection:(id)arg1 ;
-(id)_underlyingMessageDataFromFragmentMessageData:(id)arg0 error:(*id)arg1 ;
-(id)dumpStateDescription;
-(id)initWithUUID:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 logCategory:(char *)arg7 logEventSubmitter:(id)arg8 connectionServerFactory:(id)arg9 ;
-(id)initWithUUID:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 subscriptionProvider:(id)arg7 registrationEventRouter:(id)arg8 storeReadHandle:(id)arg9 ;
-(id)logIdentifier;
-(id)serverTimerProvider:(id)arg0 ;
-(void)_handleChangeRegistrationsRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleConnectRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleDisconnectRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleKeepAliveRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleProtoRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleRequestMessage:(id)arg0 ;
-(void)_handleUpdatedPrimaryResidentNotification:(id)arg0 ;
-(void)_registerForMessages:(id)arg0 ;
-(void)configureIsPrimaryResident:(BOOL)arg0 additionalPolicies:(id)arg1 ;
-(void)respondToMessage:(id)arg0 underlyingResponseData:(id)arg1 connection:(id)arg2 label:(id)arg3 ;
-(void)sendMessageWithPayloadMessage:(id)arg0 destination:(id)arg1 messageType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 connectionDidExpire:(id)arg1 ;
-(void)server:(id)arg0 sendEvents:(id)arg1 connection:(id)arg2 completion:(id)arg3 ;


@end


#endif