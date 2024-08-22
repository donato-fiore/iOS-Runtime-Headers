// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASQUEUELOCK_H
#define _PASQUEUELOCK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_guardedData;
}




-(id)guardedDataAssertingLockContext;
-(id)initWithGuardedData:(id)arg0 serialQueue:(id)arg1 ;
-(id)unsafeGuardedData;
-(void)runAsyncWithLockAcquired:(id)arg0 ;
-(void)runWithLockAcquired:(id)arg0 ;


@end


#endif