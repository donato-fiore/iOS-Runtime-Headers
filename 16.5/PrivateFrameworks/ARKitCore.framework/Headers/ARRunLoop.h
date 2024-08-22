// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARRUNLOOP_H
#define ARRUNLOOP_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ARRunLoop : NSObject {
    NSString *_name;
    *__CFRunLoop _runloop;
    *__CFRunLoopObserver _runLoopEnterObserver;
    *__CFRunLoopObserver _runLoopExitObserver;
    *__CFArray _autoreleasePoolStack;
    NSMutableArray *_earlyRunloopBlocks;
    os_unfair_lock_s _lock;
    BOOL _started;
}


@property BOOL cancelled; // ivar: _cancelled


-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)_runloop_handleActivity:(NSUInteger)arg0 ;
-(void)_runloop_popAutoreleasePool;
-(void)_runloop_pushAutoreleasePool;
-(void)_startThread;
-(void)cancel;
-(void)dealloc;
-(void)runOnRunLoop:(id)arg0 ;
-(void)start;


@end


#endif