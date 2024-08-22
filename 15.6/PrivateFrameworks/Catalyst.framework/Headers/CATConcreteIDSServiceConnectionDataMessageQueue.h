// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATCONCRETEIDSSERVICECONNECTIONDATAMESSAGEQUEUE_H
#define CATCONCRETEIDSSERVICECONNECTIONDATAMESSAGEQUEUE_H

@class NSMutableDictionary;
@protocol CATIDSServiceConnectionDataMessageQueue, OS_dispatch_queue, CATIDSServiceConnectionDataChunker, CATTimerSource, CATTimer, CATIDSServiceConnectionDataMessageQueueDelegate;

#import <Foundation/Foundation.h>


@interface CATConcreteIDSServiceConnectionDataMessageQueue : NSObject <CATIDSServiceConnectionDataMessageQueue>

 {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    id<CATIDSServiceConnectionDataChunker> *mDataChunker;
    id<CATTimerSource> *mTimerSource;
    CGFloat mFlushPromptInterval;
    BOOL mSupportsRetransmit;
    id<CATTimer> *mFlushTimer;
    NSUInteger mHeadSequenceNumber;
    NSUInteger mTailSequenceNumber;
    NSMutableDictionary *mSendContentsBySequenceNumber;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionDataMessageQueueDelegate> *delegate; // ivar: _delegate


+(id)flushTimerIdentifier;
-(id)initWithWorkQueue:(id)arg0 timerSource:(id)arg1 dataChunker:(id)arg2 flushPromptInterval:(CGFloat)arg3 supportsRetransmit:(BOOL)arg4 ;
-(void)flushTimerDidFire:(id)arg0 fireCount:(NSUInteger)arg1 ;
-(void)receiveData:(id)arg0 completion:(id)arg1 ;
-(void)receiveRemoteSequenceNumber:(NSUInteger)arg0 ;
-(void)retransmitContent:(id)arg0 ;
-(void)retransmitSequenceNumbers:(id)arg0 ;
-(void)scheduleFlushTimer;


@end


#endif