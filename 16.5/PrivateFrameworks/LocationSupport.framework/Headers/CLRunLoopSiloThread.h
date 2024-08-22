// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRUNLOOPSILOTHREAD_H
#define CLRUNLOOPSILOTHREAD_H

@class NSRunLoop, NSThread;

#import <Foundation/Foundation.h>


@interface CLRunLoopSiloThread : NSObject

@property (readonly, nonatomic) BOOL shouldCancelThread; // ivar: _shouldCancelThread
@property (readonly, nonatomic) *_opaque_pthread_t threadId; // ivar: _threadId
@property (readonly, nonatomic) NSRunLoop *underlyingRunLoop; // ivar: _underlyingRunLoop
@property (readonly, nonatomic) NSThread *underlyingThread; // ivar: _underlyingThread


-(id)init;
-(id)initWithCurrentThread;
-(id)initWithRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)dealloc;


@end


#endif