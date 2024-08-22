// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRUNLOOPTIMERSCHEDULER_H
#define CLRUNLOOPTIMERSCHEDULER_H

@class NSRunLoop, NSTimer;
@protocol CLTimerScheduler;

#import <Foundation/Foundation.h>

#import "CLTimer.h"

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler>



@property (copy, nonatomic) id *fireBlock; // ivar: _fireBlock
@property (retain, nonatomic) NSRunLoop *runloop; // ivar: _runloop
@property (weak, nonatomic) CLTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSTimer *underlyingTimer; // ivar: _underlyingTimer


-(id)initWithRunLoopSilo:(id)arg0 ;
-(void)dealloc;
-(void)reflectNextFireDelay:(CGFloat)arg0 fireInterval:(CGFloat)arg1 ;


@end


#endif