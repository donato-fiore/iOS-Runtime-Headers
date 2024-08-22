// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKATTENTIONAWAREIDLETIMERCLIENT_H
#define LKATTENTIONAWAREIDLETIMERCLIENT_H

@protocol LKAttentionAwareIdleTimerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LKAttentionAwareIdleTimerClient : NSObject

@property (weak, nonatomic) NSObject<LKAttentionAwareIdleTimerDelegate> *clientDelegate; // ivar: _clientDelegate
@property (nonatomic) NSUInteger handle; // ivar: _handle
@property (nonatomic) NSUInteger idleTimerIndex; // ivar: _idleTimerIndex
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithClientDelegate:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 ;
-(void)_wakeupDeviceAfterInterval:(CGFloat)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)resume;


@end


#endif