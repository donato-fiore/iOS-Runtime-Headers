// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONMESSAGING_H
#define VCSESSIONMESSAGING_H

@class NSMutableDictionary, NSString;
@protocol VCControlChannelDelegate;

#import <Foundation/Foundation.h>


@interface VCSessionMessaging : NSObject <VCControlChannelDelegate>

 {
    NSMutableDictionary *topics;
    id *controlChannelWeak;
    NSMutableDictionary *participants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allocMessageFromPayload:(id)arg0 forTopic:(id)arg1 participantID:(id)arg2 ;
-(id)initWithControlChannel:(id)arg0 remoteVersion:(id)arg1 ;
-(id)newDictionaryFromUnpackedMessage:(id)arg0 ;
-(id)newDictionaryFromUnpackedMessage:(id)arg0 forTopic:(id)arg1 controlChannelVersion:(int)arg2 ;
-(id)newDictionaryFromUnpackedMessageV2:(id)arg0 ;
-(id)newDictionaryFromUnpackedMomentsMessage:(id)arg0 ;
-(id)newPackedMessageFromDictionary:(id)arg0 ;
-(id)newPackedMessageFromDictionary:(id)arg0 forTopic:(id)arg1 controlChannelVersion:(int)arg2 ;
-(id)newPackedMessageFromDictionaryV2:(id)arg0 ;
-(id)newPackedMessageFromMomentsDictionary:(id)arg0 ;
-(void)addParticipant:(id)arg0 controlChannelProtocolVersion:(int)arg1 ;
-(void)addTopic:(id)arg0 associatedStrings:(id)arg1 allowConcurrent:(BOOL)arg2 receiveHandler:(id)arg3 ;
// -(void)addTopic:(id)arg0 associatedStrings:(id)arg1 allowConcurrent:(BOOL)arg2 requireReliable:(BOOL)arg3 sendMessageDictionaryCompletionHandler:(id)arg4 receiveMessageDictionaryHandler:(unk)arg5  ;
// -(void)addTopic:(id)arg0 associatedStrings:(id)arg1 allowConcurrent:(BOOL)arg2 sendCompletionHandler:(id)arg3 receiveHandler:(unk)arg4  ;
// -(void)addTopic:(id)arg0 associatedStrings:(id)arg1 allowConcurrent:(BOOL)arg2 sendMessageDictionaryCompletionHandler:(id)arg3 receiveMessageDictionaryHandler:(unk)arg4  ;
-(void)controlChannel:(id)arg0 clearTransactionCacheForParticipant:(id)arg1 ;
-(void)controlChannel:(id)arg0 receivedMessage:(id)arg1 transactionID:(unsigned int)arg2 fromParticipant:(id)arg3 ;
-(void)controlChannel:(id)arg0 sendReliableMessage:(id)arg1 didSucceed:(BOOL)arg2 toParticipant:(id)arg3 ;
-(void)controlChannel:(id)arg0 topic:(id)arg1 payload:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4 ;
-(void)dealloc;
-(void)searchMatchingTopic:(id)arg0 payload:(id)arg1 transactionID:(unsigned int)arg2 fromParticipant:(id)arg3 ;
-(void)sendMessage:(id)arg0 withTopic:(id)arg1 ;
-(void)sendMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)sendMessageDictionary:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)startMessaging;
-(void)stopMessaging;


@end


#endif