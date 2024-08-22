// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFLAZYFUTURE_H
#define EFLAZYFUTURE_H

@class NSConditionLock;
@protocol EFScheduler;


#import "EFFuture.h"
#import "EFPromise.h"

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> *_scheduler;
    id *_block;
    EFPromise *_promise;
}




-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)run;
-(BOOL)tryCancel;
-(id)delegate;
-(id)initWithScheduler:(id)arg0 block:(id)arg1 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultIfAvailable:(*id)arg0 ;
-(void)addFailureBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)onScheduler:(id)arg0 addFailureBlock:(id)arg1 ;
-(void)onScheduler:(id)arg0 addSuccessBlock:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif