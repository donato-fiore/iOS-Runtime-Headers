// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTHREADEDINVOCATIONTRAMPOLINE_H
#define IMTHREADEDINVOCATIONTRAMPOLINE_H

@class NSThread;


#import "IMInvocationTrampoline.h"

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}




-(id)initWithTarget:(id)arg0 thread:(id)arg1 immediateForMatchingThread:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif