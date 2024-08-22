// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCTARGETSELECTORTIMER_H
#define SCRCTARGETSELECTORTIMER_H

@class NSLock;


#import "SCRCTargetSelector.h"

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    *__CFRunLoopTimer _timer;
    id *_key;
    BOOL _isCanceled;
    BOOL _isPending;
    id *_object;
    NSLock *_lock;
    BOOL _createdTimer;
    id *_block;
}




+(void)_assignThreadPriority;
+(void)_runThread;
+(void)initialize;
-(BOOL)_createdTimer;
-(BOOL)isCanceled;
-(BOOL)isCancelled;
-(BOOL)isPending;
-(id)_initWithTarget:(id)arg0 selector:(SEL)arg1 threadKeyOrThread:(id)arg2 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 thread:(id)arg2 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 threadKey:(id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
-(void)_dispatchThreadHelper:(id)arg0 ;
-(void)_runTimerBlock:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)dispatchAfterDelay:(CGFloat)arg0 ;
-(void)dispatchAfterDelay:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)dispatchAfterDelay:(CGFloat)arg0 withObject:(id)arg1 ;
-(void)invalidate;


@end


#endif