// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSTASK_H
#define AMSTASK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSPromise.h"

@interface AMSTask : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performTaskQueue; // ivar: _performTaskQueue
@property (retain, nonatomic) AMSPromise *promise; // ivar: _promise
@property (nonatomic) os_unfair_lock_s promiseAccessLock; // ivar: _promiseAccessLock
@property (nonatomic) NSInteger runMode; // ivar: _runMode
@property (readonly, nonatomic, getter=isRunning) BOOL running;


+(id)taskCache;
-(BOOL)cancel;
-(id)init;
-(id)performBinaryTaskWithBlock:(id)arg0 ;
-(id)performTaskWithBlock:(id)arg0 ;
-(id)performTaskWithPromiseBlock:(id)arg0 ;


@end


#endif