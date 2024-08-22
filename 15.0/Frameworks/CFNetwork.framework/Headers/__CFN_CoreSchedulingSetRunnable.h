// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFN_CORESCHEDULINGSETRUNNABLE_H
#define __CFN_CORESCHEDULINGSETRUNNABLE_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface __CFN_CoreSchedulingSetRunnable : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    id *_setup;
    *_opaque_pthread_t _tid;
    *__CFRunLoop _rl;
    NSInteger _performCount;
    *__CFRunLoopSource _pinnedSource;
    NSInteger _count;
}




+(void)_run:(id)arg0 ;
-(void)dealloc;


@end


#endif