// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPERATIONQUEUEINVOCATIONTRAMPOLINE_H
#define OPERATIONQUEUEINVOCATIONTRAMPOLINE_H

@class NSOperationQueue;


#import "InvocationTrampoline.h"

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
    NSOperationQueue *_queue;
    NSInteger _priority;
}




-(id)initWithTarget:(id)arg0 operationQueue:(id)arg1 priority:(NSInteger)arg2 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif