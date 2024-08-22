// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CURUNLOOPTHREAD_H
#define CURUNLOOPTHREAD_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CURunLoopThread : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    *__CFRunLoop _runLoop;
    BOOL _runLoopValid;
    NSMutableArray *_startBlocks;
    BOOL _threadRunning;
    *LogCategory _ucat;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *threadFinalizeHandler; // ivar: _threadFinalizeHandler
@property (copy, nonatomic) id *threadInitializeHandler; // ivar: _threadInitializeHandler


-(BOOL)_scheduleStopThread;
-(id)init;
-(void)_invalidated;
-(void)_threadMain;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)performBlock:(id)arg0 ;


@end


#endif