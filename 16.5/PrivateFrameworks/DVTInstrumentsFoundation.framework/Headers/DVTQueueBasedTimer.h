// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DVTQUEUEBASEDTIMER_H
#define DVTQUEUEBASEDTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DVTQueueBasedTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id *_block;
    atomic<DVTQueueBasedTimerState> _state;
    mutex _mlock;
}


@property (readonly) CGFloat interval; // ivar: _interval
@property (readonly) BOOL running;
@property (readonly) unsigned int state;


-(id)initWithInterval:(CGFloat)arg0 block:(id)arg1 ;
-(id)initWithInterval:(CGFloat)arg0 qos:(unsigned int)arg1 block:(id)arg2 ;
-(void)_runBlock;
-(void)pause;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif