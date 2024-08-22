// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONTROLCHANNELDIALOG_H
#define VCCONTROLCHANNELDIALOG_H

@class NSNumber, NSString, NSMutableDictionary, NSMutableArray;
@protocol VCControlChannelTransactionDelegate, OS_dispatch_queue;


#import "VCObject.h"

@interface VCControlChannelDialog : VCObject {
    BOOL _handshakeEnabled;
    BOOL _isHandshakeMode;
    BOOL _isHandshakeCommenced;
    unsigned int _sessionID;
    id<VCControlChannelTransactionDelegate> *_weakTransactionDelegate;
    BOOL _shouldFinishHandshake;
    CGFloat _handshakeStartTime;
    NSNumber *_participantID;
    NSString *_participantUUID;
    NSMutableDictionary *_transactions;
    NSMutableArray *_cachedMessages;
    NSObject<OS_dispatch_queue> *_handshakeOperationQueue;
}




-(BOOL)sendReliableMessage:(id)arg0 withTopic:(id)arg1 timeout:(id)arg2 ;
-(BOOL)sendReliableMessageInternal:(id)arg0 withTopic:(id)arg1 timeout:(id)arg2 useFastRetries:(BOOL)arg3 ;
-(BOOL)sendUnreliableMessage:(id)arg0 withTopic:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(id)initWithSessionID:(unsigned int)arg0 participantID:(id)arg1 participantUUID:(id)arg2 participantConfig:(struct ? *)arg3 transactionDelegate:(id)arg4 ;
-(id)newDataFromMessage:(id)arg0 topic:(id)arg1 transactionID:(NSUInteger)arg2 isReliable:(BOOL)arg3 transactionDelegate:(id)arg4 ;
-(id)processMessageData:(id)arg0 participantID:(id)arg1 topic:(*id)arg2 transactionID:(*id)arg3 messageStatus:(*unsigned int)arg4 isInternalMessage:(*BOOL)arg5 ;
-(void)cacheOutgoingMessage:(id)arg0 topic:(id)arg1 timeout:(id)arg2 ;
-(void)checkForSignificantHandshakeDelayWithDelegate:(id)arg0 ;
-(void)confirmTransaction:(id)arg0 ;
-(void)dealloc;
-(void)doHandshakeWithMessage:(id)arg0 topic:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)flushActiveTransactions;
-(void)removeTransactionForTransactionID:(int)arg0 ;
-(void)resetHandshake;
-(void)sendAllCachedMessagesAndDisableHandshakeWhenDone;
-(void)startHandshakeWithMessage:(id)arg0 topic:(id)arg1 ;


@end


#endif