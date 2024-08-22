// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDELAYEDACTIONTIMER_H
#define PLDELAYEDACTIONTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PLDelayedActionTimer : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _start;
    CGFloat _delay;
    CGFloat _end;
}


@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) CGFloat timeRemaining;


-(id)description;
-(id)initWithTargetQueue:(id)arg0 ;
-(void)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;


@end


#endif