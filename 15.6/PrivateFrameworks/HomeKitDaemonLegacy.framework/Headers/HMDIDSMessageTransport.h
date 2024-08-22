// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDIDSMESSAGETRANSPORT_H
#define HMDIDSMESSAGETRANSPORT_H

@class NSString, NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, HMFOperationBudget, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue;


#import "HMDRemoteMessageTransport.h"
#import "HMDAppleAccountManager.h"
#import "HMDRemoteAccountManager.h"

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate>



@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *destinationAddress; // ivar: _destinationAddress
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableArray *messageContexts; // ivar: _messageContexts
@property (readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer; // ivar: _messageDedupBuffer
@property (readonly, nonatomic, getter=isModernTransport) BOOL modernTransport; // ivar: _modernTransport
@property (readonly, nonatomic) NSMutableDictionary *pendingResponseTimers; // ivar: _pendingResponseTimers
@property (readonly, nonatomic) NSMutableDictionary *pendingResponses; // ivar: _pendingResponses
@property (readonly, nonatomic) NSMutableDictionary *receivedResponses; // ivar: _receivedResponses
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager; // ivar: _remoteAccountManager
@property (readonly, nonatomic) NSMutableDictionary *requestedCapabilities; // ivar: _requestedCapabilities
@property (readonly) HMFOperationBudget *sendMessageBudget; // ivar: _sendMessageBudget
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(NSInteger)priorityForMessage:(id)arg0 ;
+(NSUInteger)restriction;
+(NSUInteger)sendMessageLimit;
+(id)logCategory;
+(struct _HMFRate )sendMessageRate;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)isSecure;
-(NSInteger)qualityOfService;
-(id)deviceForSenderContext:(id)arg0 ;
-(id)initModernTransportWithAccountRegistry:(id)arg0 ;
-(id)initModernTransportWithAccountRegistry:(id)arg0 service:(id)arg1 appleAccountManager:(id)arg2 remoteAccountManager:(id)arg3 ;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)initWithAccountRegistry:(id)arg0 service:(id)arg1 appleAccountManager:(id)arg2 remoteAccountManager:(id)arg3 ;
-(id)logIdentifier;
-(id)sendMessage:(id)arg0 fromHandle:(id)arg1 destination:(id)arg2 priority:(NSInteger)arg3 timeout:(CGFloat)arg4 options:(NSUInteger)arg5 queueOneID:(id)arg6 error:(*id)arg7 ;
-(id)start;
-(int)transportType;
-(void)_pendingResponseTimeoutFor:(id)arg0 ;
-(void)_removePendingResponseTimerForTransaction:(id)arg0 ;
-(void)_removePendingResponseTransaction:(id)arg0 ;
-(void)_restartPendingResponseTimerFor:(id)arg0 withReducedFactor:(NSUInteger)arg1 ;
-(void)_startPendingResponseTimer:(id)arg0 responseTimeout:(CGFloat)arg1 identifier:(id)arg2 ;
-(void)legacyHandleIncomingRemoteMessage:(id)arg0 sourceDevice:(id)arg1 senderDeviceHandle:(id)arg2 isSecure:(BOOL)arg3 incomingMessage:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif