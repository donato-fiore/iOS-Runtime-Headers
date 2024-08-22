// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATIDSSERVICECONNECTION_H
#define CATIDSSERVICECONNECTION_H

@class NSString, NSError;
@protocol CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionMessageProcessorDelegate, CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataMessageQueueDelegate, CATIDSPrimitives, CATCancelable, CATIDSMessageBroadcaster, CATIDSServiceConnectionDataMessageQueue, CATIDSServiceConnectionDataAggregator, OS_dispatch_queue, CATResettableTimer, CATIDSSubscription, CATIDSServiceConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CATOperationQueue.h"
#import "CATSerialOperationEnqueuer.h"
#import "CATIDSServiceConnectionMessageProcessor.h"
#import "CATIDSServiceConnectionMetadata.h"

@interface CATIDSServiceConnection : NSObject <CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionMessageProcessorDelegate, CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataMessageQueueDelegate>

 {
    NSString *mDestinationAddress;
    NSString *mSourceAppleID;
    id<CATIDSPrimitives> *mIDSPrimitives;
    id<CATCancelable> *mNetworkPowerAssertion;
    id<CATIDSMessageBroadcaster> *mMessageBroadcaster;
    id<CATIDSServiceConnectionDataMessageQueue> *mDataMessageQueue;
    id<CATIDSServiceConnectionDataAggregator> *mDataAggregator;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    CATOperationQueue *mSendQueue;
    CATSerialOperationEnqueuer *mControlOperationEnqueuer;
    id<CATResettableTimer> *mKeepAliveTimer;
    CATIDSServiceConnectionMessageProcessor *mMessageProcessor;
    id<CATIDSSubscription> *mMessageSubscription;
}


@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (retain, nonatomic) NSError *closedError; // ivar: _closedError
@property (weak, nonatomic) NSObject<CATIDSServiceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CATIDSServiceConnectionMetadata *metadata; // ivar: _metadata


+(id)acknowledgeContent;
+(id)closeContentWithError:(id)arg0 ;
+(id)connectionWithMetadata:(id)arg0 configuration:(id)arg1 IDSPrimitives:(id)arg2 messageBroadcaster:(id)arg3 timerSource:(id)arg4 dataMessageQueue:(id)arg5 dataAggregator:(id)arg6 networkPowerAssertion:(id)arg7 workQueue:(id)arg8 delegateQueue:(id)arg9 destinationAddress:(id)arg10 sourceAppleID:(id)arg11 ;
+(id)connectionWithMetadata:(id)arg0 configuration:(id)arg1 capabilities:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 networkPowerAssertion:(id)arg6 workQueue:(id)arg7 delegateQueue:(id)arg8 destinationAddress:(id)arg9 sourceAppleID:(id)arg10 ;
+(id)keepAliveContent;
+(id)keepAliveTimerIdentifier;
-(id)description;
-(id)initWithMetadata:(id)arg0 configuration:(id)arg1 IDSPrimitives:(id)arg2 messageBroadcaster:(id)arg3 timerSource:(id)arg4 dataMessageQueue:(id)arg5 dataAggregator:(id)arg6 networkPowerAssertion:(id)arg7 workQueue:(id)arg8 delegateQueue:(id)arg9 destinationAddress:(id)arg10 sourceAppleID:(id)arg11 ;
-(id)requestMissingDataContentWithExpectedSequenceNumber:(NSUInteger)arg0 ;
-(id)retransmitContentForSequenceNumbers:(id)arg0 ;
-(void)_close;
-(void)_sendData:(id)arg0 completion:(id)arg1 ;
-(void)close;
-(void)connectionDataAggregator:(id)arg0 aggregatedData:(id)arg1 withNumber:(NSUInteger)arg2 ;
-(void)connectionDataAggregator:(id)arg0 isMissingSequenceNumbers:(id)arg1 ;
-(void)connectionDataAggregatorWantsToReportSequenceNumber:(id)arg0 ;
-(void)dataMessageQueue:(id)arg0 needsToSendContents:(id)arg1 shouldSkipTheLine:(BOOL)arg2 completion:(id)arg3 ;
-(void)dataMessageQueue:(id)arg0 wantsToCheckRemote:(NSUInteger)arg1 ;
-(void)keepAliveTimerDidFire:(id)arg0 fireCount:(NSUInteger)arg1 isFinalFire:(BOOL)arg2 ;
-(void)messageProcessor:(id)arg0 receivedExpectedSequence:(NSUInteger)arg1 ;
-(void)messageProcessor:(id)arg0 wantsAggregation:(id)arg1 ;
-(void)messageProcessor:(id)arg0 wantsRetransmission:(id)arg1 ;
-(void)messageProcessor:(id)arg0 wantsToAckUpTo:(NSUInteger)arg1 ;
-(void)messageProcessor:(id)arg0 wantsToCloseWithError:(id)arg1 ;
-(void)messageProcessorWantsToAcknowledgeRemote:(id)arg0 ;
-(void)messageProcessorWantsToExtendKeepAlive:(id)arg0 ;
-(void)processMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;
-(void)sendContent:(id)arg0 ;
-(void)sendData:(id)arg0 completion:(id)arg1 ;
-(void)tearDownWithError:(id)arg0 shouldReportToRemote:(BOOL)arg1 ;


@end


#endif