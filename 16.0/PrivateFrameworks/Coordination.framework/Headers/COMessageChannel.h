// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGECHANNEL_H
#define COMESSAGECHANNEL_H

@class NSString, NSXPCConnection, NSMutableDictionary;
@protocol COMessageChannelClientInterface, OS_dispatch_queue, COMessageChannelConnectionProvider, COClusterRoleMonitorConnectionProvider;

#import <Foundation/Foundation.h>

#import "COClusterRoleMonitor.h"

@interface COMessageChannel : NSObject <COMessageChannelClientInterface>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _activated;
    unsigned int _baseRequestID;
}


@property (readonly, copy, nonatomic) NSString *cluster; // ivar: _cluster
@property (readonly, copy, nonatomic) NSString *clusterLabel; // ivar: _clusterLabel
@property (copy, nonatomic) COClusterRoleMonitor *clusterRoleMonitor; // ivar: _clusterRoleMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSXPCConnection *lastConnection; // ivar: _lastConnection
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (readonly, nonatomic) NSObject<COMessageChannelConnectionProvider> *provider; // ivar: _provider
@property (nonatomic) NSUInteger receiveLimit; // ivar: _receiveLimit
@property (copy, nonatomic) id *recorder; // ivar: _recorder
@property (retain, nonatomic) NSMutableDictionary *requestHandlers; // ivar: _requestHandlers
@property (readonly, nonatomic) NSObject<COClusterRoleMonitorConnectionProvider> *roleMonitorConnectionProvider; // ivar: _roleMonitorConnectionProvider
@property (retain, nonatomic) NSMutableDictionary *roleSnapshotsCache; // ivar: _roleSnapshotsCache
@property (nonatomic) NSUInteger sendLimit; // ivar: _sendLimit
@property (retain, nonatomic) NSMutableDictionary *sessionConsumers; // ivar: _sessionConsumers
@property (retain, nonatomic) NSMutableDictionary *sessionProducers; // ivar: _sessionProducers
@property (retain, nonatomic) NSMutableDictionary *sessionsInflight; // ivar: _sessionsInflight
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


-(Class)_payloadClassFromType:(id)arg0 ;
-(id)_payloadTypeFromClass:(Class)arg0 ;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConnectionProvider:(id)arg0 roleMonitorConnectionProvider:(id)arg1 topic:(id)arg2 cluster:(id)arg3 ;
-(id)initWithTopic:(id)arg0 cluster:(id)arg1 ;
-(unsigned int)_generateRequestID;
-(void)_activateWithCompletion:(id)arg0 ;
// -(void)_broadcastRequest:(id)arg0 type:(id)arg1 recipientsCallback:(id)arg2 responseCompletionHandler:(unk)arg3  ;
-(void)_callbackProducersAndConsumersAfterActivationWithError:(id)arg0 ;
-(void)_deliverDidEndDelegateForSession:(id)arg0 notice:(id)arg1 initiator:(id)arg2 error:(id)arg3 ;
-(void)_deliverDidFailToStartSessionWithMember:(id)arg0 producer:(id)arg1 error:(id)arg2 ;
-(void)_deliverFailedToStartSessionWithMember:(id)arg0 consumer:(id)arg1 error:(id)arg2 ;
-(void)_deliverSuccessfullyStartedSession:(id)arg0 withMember:(id)arg1 consumer:(id)arg2 ;
-(void)_deliverSuccessfullyStartedSession:(id)arg0 withResponse:(id)arg1 withMember:(id)arg2 producer:(id)arg3 ;
-(void)_handleAddedMembers:(id)arg0 ;
-(void)_handleCapableCommand:(id)arg0 fromMember:(id)arg1 callback:(id)arg2 ;
-(void)_handleRemovedMembers:(id)arg0 ;
-(void)_handleStartCommand:(id)arg0 withMember:(id)arg1 callback:(id)arg2 ;
-(void)_handleStopCommand:(id)arg0 fromMember:(id)arg1 callback:(id)arg2 ;
-(void)_lostConnectionToService;
-(void)_sendRequest:(id)arg0 type:(id)arg1 members:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_setupClusterMonitor;
-(void)_startSessionWithProducer:(id)arg0 member:(id)arg1 ;
-(void)_startSessionWithProducer:(id)arg0 member:(id)arg1 request:(id)arg2 ;
-(void)_submitMetricsForActivationCompletionWithError:(id)arg0 ;
-(void)_submitMetricsForRequest:(id)arg0 withRequestInfo:(id)arg1 withError:(id)arg2 ;
-(void)_submitMetricsForResponse:(id)arg0 size:(NSUInteger)arg1 withError:(id)arg2 ;
-(void)_submitMetricsForSession:(id)arg0 withError:(id)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addSessionConsumerWithSubTopic:(id)arg0 delegate:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)addSessionProducerWithSubTopic:(id)arg0 delegate:(id)arg1 dispatchQueue:(id)arg2 ;
// -(void)broadcastRequest:(id)arg0 recipientsCallback:(id)arg1 responseCompletionHandler:(unk)arg2  ;
// -(void)broadcastRequest:(id)arg0 type:(id)arg1 recipientsCallback:(id)arg2 responseCompletionHandler:(unk)arg3  ;
-(void)dealloc;
-(void)failedToSendRequestWithID:(unsigned int)arg0 withError:(id)arg1 ;
-(void)receivedRecipientListForRequestID:(unsigned int)arg0 recipients:(id)arg1 ;
-(void)receivedRequestWithPayload:(id)arg0 payloadType:(id)arg1 requestID:(unsigned int)arg2 fromMember:(id)arg3 withCallback:(id)arg4 ;
-(void)receivedResponseForRequestID:(unsigned int)arg0 responsePayload:(id)arg1 responseType:(id)arg2 responseError:(id)arg3 fromMember:(id)arg4 ;
// -(void)registerHandler:(id)arg0 forRequestClass:(unk)arg1  ;
// -(void)registerHandler:(id)arg0 forRequestClassType:(unk)arg1  ;
-(void)sendRequest:(id)arg0 members:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)sendRequest:(id)arg0 type:(id)arg1 members:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)sendRequest:(id)arg0 type:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)sendRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)startSessionWithProducer:(id)arg0 members:(id)arg1 ;
-(void)stopMessageSession:(id)arg0 withNotice:(id)arg1 ;
-(void)unregisterHandlerForRequestClass:(Class)arg0 ;
-(void)unregisterHandlerForRequestClassType:(id)arg0 ;


@end


#endif