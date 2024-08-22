// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKATTENTIONAWAREIDLETIMER_H
#define LKATTENTIONAWAREIDLETIMER_H

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary;
@protocol OS_dispatch_queue, LKAttentionAwareIdleTimerDelegate;

#import <Foundation/Foundation.h>


@interface LKAttentionAwareIdleTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *attentionAwarenessClientQueue; // ivar: _attentionAwarenessClientQueue
@property (retain, nonatomic) AWAttentionAwarenessClient *client; // ivar: _client
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *config; // ivar: _config
@property (weak, nonatomic) NSObject<LKAttentionAwareIdleTimerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *timeoutDelegateMap; // ivar: _timeoutDelegateMap


+(id)sharedInstance;
-(id)init;
-(void)startMonitoringAttentionAwareIdleWithDelegate:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)stopMonitoringAttentionAwareIdleWithDelegate:(id)arg0 timeout:(CGFloat)arg1 ;


@end


#endif