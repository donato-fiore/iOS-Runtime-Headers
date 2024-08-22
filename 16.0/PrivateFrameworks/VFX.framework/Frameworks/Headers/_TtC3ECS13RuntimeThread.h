// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3ECS13RUNTIMETHREAD_H
#define _TTC3ECS13RUNTIMETHREAD_H

@class SwiftObject;



@interface _TtC3ECS13RuntimeThread : SwiftObject {
    ? wakeupEvent;
    ? didSwapQueueEvent;
    ? runtimeThreadId;
    ? runtimeUpdateHandler;
    ? __startupShutdownEvent;
    ? lock;
    ? clientEventQueue;
    ? serverEventQueue;
    ? qlock;
    ? requestStop;
    ? entityManager;
    ? threadid;
    ? imguiToken;
    ? _isSuspended;
}






@end


#endif