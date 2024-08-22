// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THREADEDINVOCATIONTRAMPOLINE_H
#define THREADEDINVOCATIONTRAMPOLINE_H

@class NSThread;


#import "InvocationTrampoline.h"

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}




-(id)initWithTarget:(id)arg0 thread:(id)arg1 immediateForMatchingThread:(BOOL)arg2 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif