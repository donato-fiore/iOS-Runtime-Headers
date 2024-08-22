// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SYSTREAMERTHREAD_H
#define _SYSTREAMERTHREAD_H

@class NSThread, NSRunLoop, NSConditionLock;



@interface _SYStreamerThread : NSThread {
    NSRunLoop *_threadRunLoop;
    *__CFRunLoopSource _stopRLS;
    NSConditionLock *_startupLock;
}


@property (readonly, nonatomic) NSRunLoop *runLoop;


+(id)streamerThread;
-(id)init;
-(void)_waitForStartup;
-(void)main;


@end


#endif