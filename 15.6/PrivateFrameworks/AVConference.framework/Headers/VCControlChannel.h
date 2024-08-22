// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONTROLCHANNEL_H
#define VCCONTROLCHANNEL_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "VCObject.h"

@interface VCControlChannel : VCObject {
    id *_dataReceivedDelegate;
    int _bytesSent;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _bytesReceived;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    CGFloat _lastUpdateTimestamp;
    NSMutableArray *_optionalTopics;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
}


@property (nonatomic) id *dataReceivedDelegate;
@property (nonatomic) id *messageReceivedDelegate; // ivar: _messageReceivedDelegate
@property (readonly, nonatomic) unsigned int reliableMessageResendInterval; // ivar: _reliableMessageResendInterval


-(BOOL)sendReliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 timeout:(unsigned int)arg3 completion:(id)arg4 ;
-(BOOL)sendReliableMessageAndWait:(id)arg0 withTopic:(id)arg1 ;
-(BOOL)sendReliableMessageAndWait:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(id)init;
-(void)addOptionalTopic:(id)arg0 ;
-(void)dealloc;
-(void)flushActiveMessages;
-(void)sendReliableMessage:(id)arg0 withTopic:(id)arg1 ;
-(void)sendReliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)sendUnreliableMessage:(id)arg0 withTopic:(id)arg1 participantID:(NSUInteger)arg2 ;
-(void)setEncryptionWithEncryptionMaterial:(struct ? *)arg0 ;
-(void)throwNotSupportedExceptionForMethod:(id)arg0 ;


@end


#endif