// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERSERVER_H
#define HMDREMOTEEVENTROUTERSERVER_H

@class NSUUID, NSString, HMFMessageDispatcher, NSNotificationCenter, HMEMessageDatagramServer, NSMutableArray, NSMutableDictionary;
@protocol HMFLogging, HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate, OS_os_log, OS_dispatch_queue, HMDRemoteEventRouterServerDataSource, HMMLogEventSubmitting;

#import <Foundation/Foundation.h>

#import "HMDEventRouterTimerProvider.h"
#import "HMDRemoteEventRouterServerMessageReceiver.h"

@interface HMDRemoteEventRouterServer : NSObject <HMFLogging, HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate>

 {
    NSObject<OS_os_log> *_logger;
    BOOL _isPrimaryResident;
    BOOL _isResidentEventProviding;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_homeUUID;
    NSUUID *_accessoryUUID;
    NSString *_routerRequestMessageName;
    NSString *_routerUpdateMessageName;
    HMFMessageDispatcher *_messageDispatcher;
    NSNotificationCenter *_notificationCenter;
    HMDEventRouterTimerProvider *_timerProvider;
    HMEMessageDatagramServer *_connectionServer;
    NSMutableArray *_currentConnections;
    id<HMDRemoteEventRouterServerDataSource> *_dataSource;
    NSMutableDictionary *_accessControls;
    HMDRemoteEventRouterServerMessageReceiver *_accessoryMessageReceiver;
    id<HMMLogEventSubmitting> *_logEventSubmitter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)server:(id)arg0 isConnectionTerminatingError:(id)arg1 ;
-(BOOL)server:(id)arg0 shouldProcessEventsForConnection:(id)arg1 shouldLogState:(BOOL)arg2 ;
-(BOOL)serverSupportFragmentCachedEvents:(id)arg0 ;
-(BOOL)shouldAllowEvent:(id)arg0 topic:(id)arg1 connection:(id)arg2 ;
-(CGFloat)server:(id)arg0 timeoutIntervalForConnection:(id)arg1 ;
-(CGFloat)serverDebounceTimeInterval:(id)arg0 ;
-(NSUInteger)serverFragmentEventsDataSize:(id)arg0 ;
-(id)_underlyingMessageDataFromFragmentMessageData:(id)arg0 error:(*id)arg1 ;
-(id)dumpStateDescription;
-(id)initWithPrimaryModeUUID:(id)arg0 residentModeUUID:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 dataSource:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 logCategory:(char *)arg8 logEventSubmitter:(id)arg9 connectionServerFactory:(id)arg10 ;
-(id)initWithPrimaryModeUUID:(id)arg0 residentModeUUID:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 dataSource:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 subscriptionProvider:(id)arg8 registrationEventRouter:(id)arg9 storeReadHandle:(id)arg10 ;
-(id)logIdentifier;
-(id)messageTargetForMode:(NSInteger)arg0 ;
-(id)server:(id)arg0 expandedTopicsForTopics:(id)arg1 ;
-(id)server:(id)arg0 forwardingTopicsForTopics:(id)arg1 ;
-(id)server:(id)arg0 upstreamTopicsForTopic:(id)arg1 ;
-(id)serverTimerProvider:(id)arg0 ;
-(void)_handleChangeRegistrationsRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleConnectRequest:(id)arg0 originalMessage:(id)arg1 connectionMode:(NSInteger)arg2 ;
-(void)_handleDisconnectRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleFetchEventsRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handleKeepAliveRequest:(id)arg0 originalMessage:(id)arg1 ;
-(void)_handlePrimaryRequestMessage:(id)arg0 ;
-(void)_handleProtoRequest:(id)arg0 originalMessage:(id)arg1 connectionMode:(NSInteger)arg2 ;
-(void)_handleRequestMessage:(id)arg0 connectionMode:(NSInteger)arg1 ;
-(void)_registerForAccessoryMessages:(id)arg0 ;
-(void)_registerForMessages:(id)arg0 ;
-(void)configureIsPrimaryResident:(BOOL)arg0 isResidentEventProviding:(BOOL)arg1 additionalPolicies:(id)arg2 ;
-(void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg0 ;
-(void)respondToMessage:(id)arg0 underlyingResponseData:(id)arg1 connection:(id)arg2 label:(id)arg3 ;
-(void)respondToMessage:(id)arg0 underlyingResponseData:(id)arg1 supportsFragmentMessage:(BOOL)arg2 label:(id)arg3 ;
-(void)sendMessageWithPayloadMessage:(id)arg0 destination:(id)arg1 messageType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)server:(id)arg0 connectionDidExpire:(id)arg1 ;
-(void)server:(id)arg0 sendEvents:(id)arg1 cachedEvents:(id)arg2 connection:(id)arg3 completion:(id)arg4 ;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;


@end


#endif