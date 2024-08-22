// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSTIMEPERIODBUFFER_H
#define SIRIANALYTICSTIMEPERIODBUFFER_H

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsTimePeriodBuffer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_bufferTimer;
    CGFloat _bufferInterval;
    CGFloat _leeway;
    NSMutableSet *_bufferedMessages;
    id *_onMessagesProduced;
}




-(id)initWithInterval:(CGFloat)arg0 queue:(id)arg1 ;
-(void)_startProducing;
-(void)_stopProducing;
-(void)_timerElapsed;
-(void)enqueueMessages:(id)arg0 ;
-(void)onMessagesProduced:(id)arg0 ;


@end


#endif