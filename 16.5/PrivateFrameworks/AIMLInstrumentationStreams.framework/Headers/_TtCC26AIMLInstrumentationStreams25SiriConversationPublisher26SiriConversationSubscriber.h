// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC26AIMLINSTRUMENTATIONSTREAMS25SIRICONVERSATIONPUBLISHER26SIRICONVERSATIONSUBSCRIBER_H
#define _TTCC26AIMLINSTRUMENTATIONSTREAMS25SIRICONVERSATIONPUBLISHER26SIRICONVERSATIONSUBSCRIBER_H

@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject <BPSSubscriber>

 {
    ? downstream;
    ? lastReceivedTimestamp;
    ? graphBuilder;
    ? upstreamFinished;
}




-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif