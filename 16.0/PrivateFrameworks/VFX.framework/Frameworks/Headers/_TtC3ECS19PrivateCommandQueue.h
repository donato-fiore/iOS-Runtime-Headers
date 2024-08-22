// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3ECS19PRIVATECOMMANDQUEUE_H
#define _TTC3ECS19PRIVATECOMMANDQUEUE_H

@class SwiftObject;



@interface _TtC3ECS19PrivateCommandQueue : SwiftObject {
    ? entityManager;
    ? workerIndex;
    ? stackAllocator;
    ? frameAllocator;
    ? currentIterationContext;
    ? pendingDirtyPropagationQueue;
    ? deferredOperations;
    ? immediateOperations;
    ? dirtyTrackingDisabled;
    ? stats;
}






@end


#endif