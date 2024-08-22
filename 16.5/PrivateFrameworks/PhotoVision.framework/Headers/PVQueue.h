// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVQUEUE_H
#define PVQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PVCanceler.h"

@interface PVQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _currentlyExecutingTasksCount;
    PVCanceler *_canceler;
    BOOL _terminating;
    BOOL _isConcurrent;
}




-(id)initQueueWithName:(id)arg0 isSerial:(BOOL)arg1 qos_class:(unsigned int)arg2 ;
-(void)dispatch_barrier_async:(id)arg0 ;
-(void)dispatch_barrier_sync:(id)arg0 ;
-(void)execute_after:(NSUInteger)arg0 block:(id)arg1 ;
-(void)execute_async:(id)arg0 ;
-(void)execute_sync:(id)arg0 ;
-(void)resume;
-(void)suspend_async;
-(void)suspend_sync;
-(void)terminate_sync;
-(void)waitForCurrentTasksToFinish;


@end


#endif