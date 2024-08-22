// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSTIMER_H
#define TTSTIMER_H

@class NSMutableArray, NSLock;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSTimer : NSObject {
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _paused;
}




-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_createTimer;
-(void)_handleTimerFired;
-(void)_startTimer:(id)arg0 ;
-(void)clearQueue;
-(void)continueQueue;
-(void)dealloc;
// -(void)enqueueBlock:(id)arg0 withDelay:(unk)arg1 withId:(CGFloat)arg2  ;
-(void)pauseQueue;


@end


#endif