// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCONTROLCHANNELDIALOG_H
#define VCCONTROLCHANNELDIALOG_H

@class NSNumber, NSString, NSMutableArray, NSDictionary;
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
    NSMutableArray *_cachedMessages;
    NSObject<OS_dispatch_queue> *_handshakeOperationQueue;
}


@property (readonly) NSDictionary *transactions; // ivar: _transactions


-(BOOL)sendReliableMessage:(id)arg0 withTopic:(id)arg1 timeout:(id)arg2 withOptions:(id)arg3 ;
-(BOOL)sendReliableMessageInternal:(id)arg0 withTopic:(id)arg1 timeout:(id)arg2 useFastRetries:(BOOL)arg3 withOptions:(id)arg4 ;
-(BOOL)sendUnreliableMessage:(id)arg0 withTopic:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4 ;
-(id)initWithSessionID:(unsigned int)arg0 participantID:(id)arg1 participantUUID:(id)arg2 participantConfig:(struct ? *)arg3 transactionDelegate:(id)arg4 ;
-(id)newDataFromMessage:(id)arg0 topic:(id)arg1 transactionID:(NSUInteger)arg2 isReliable:(BOOL)arg3 transactionDelegate:(id)arg4 ;
-(id)processMessageData:(id)arg0 participantID:(id)arg1 topic:(*id)arg2 transactionID:(*id)arg3 messageStatus:(*unsigned int)arg4 isInternalMessage:(*BOOL)arg5 ;
-(void)cacheOutgoingMessage:(id)arg0 topic:(id)arg1 timeout:(id)arg2 withOptions:(id)arg3 ;
-(void)checkForSignificantHandshakeDelayWithDelegate:(id)arg0 ;
-(void)confirmTransaction:(id)arg0 ;
-(void)dealloc;
-(void)doHandshakeWithMessage:(id)arg0 topic:(id)arg1 afterDelay:(CGFloat)arg2 withOptions:(id)arg3 ;
-(void)flushActiveTransactions;
-(void)removeTransactionForTransactionID:(int)arg0 ;
-(void)resetHandshake;
-(void)sendAllCachedMessagesAndDisableHandshakeWhenDone;
-(void)startHandshakeWithMessage:(id)arg0 topic:(id)arg1 withOptions:(id)arg2 ;


@end


#endif