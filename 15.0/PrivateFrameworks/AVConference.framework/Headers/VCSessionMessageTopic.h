// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONMESSAGETOPIC_H
#define VCSESSIONMESSAGETOPIC_H

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCControlChannel.h"

@interface VCSessionMessageTopic : NSObject {
    NSArray *associatedStrings;
    BOOL allowConcurrent;
    BOOL requireReliable;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    VCControlChannel *controlChannel;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    id *sendMessageCompletionBlock;
    id *sendMessageDataCompletionBlock;
    id *receiveMessageBlock;
    id *receiveMessageDictionaryBlock;
    NSInteger latestOutgoingMessageIndex;
    BOOL shouldEncodeTopicKeyInMessage;
    NSMutableDictionary *transactionCache;
}


@property (nonatomic, setter=setIsSendingEnabled:) BOOL isSendingEnabled; // ivar: isSendingEnabled
@property (readonly, nonatomic) NSString *topicKey; // ivar: topicKey


-(BOOL)isDuplicateMessageID:(id)arg0 messageHistory:(id)arg1 participantID:(id)arg2 ;
-(BOOL)isPayloadAssociated:(id)arg0 ;
// -(id)initWithTopicKey:(id)arg0 strings:(id)arg1 allowConcurrent:(BOOL)arg2 controlChannel:(id)arg3 sendCompletionHandler:(id)arg4 receiveHandler:(unk)arg5  ;
// -(id)initWithTopicKey:(id)arg0 strings:(id)arg1 allowConcurrent:(BOOL)arg2 requireReliable:(BOOL)arg3 controlChannel:(id)arg4 sendCompletionHandler:(id)arg5 receiveHandler:(unk)arg6 sendMessageDataCompletionHandler:(id)arg7 receiveMessageDictionaryHandler:(unk)arg8  ;
// -(id)initWithTopicKey:(id)arg0 strings:(id)arg1 allowConcurrent:(BOOL)arg2 requireReliable:(BOOL)arg3 controlChannel:(id)arg4 sendMessageDataCompletionHandler:(id)arg5 receiveMessageDictionaryHandler:(unk)arg6  ;
-(id)messageForCommand:(id)arg0 ;
-(int)expectedMessageType;
-(void)clearTransactionCacheForParticipant:(id)arg0 ;
-(void)dealloc;
-(void)handleSendMessageDidSucceed:(BOOL)arg0 message:(id)arg1 participantID:(id)arg2 ;
-(void)passMessage:(id)arg0 sequence:(int)arg1 fromParticipant:(id)arg2 ;
-(void)purgeExpiredEntries:(CGFloat)arg0 messageHistory:(id)arg1 participantID:(id)arg2 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 participantID:(NSUInteger)arg1 ;
-(void)sendMessage:(id)arg0 participantID:(NSUInteger)arg1 withSequence:(NSInteger)arg2 numRetries:(NSInteger)arg3 ;


@end


#endif