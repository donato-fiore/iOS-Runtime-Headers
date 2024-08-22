// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFUTURETASK_H
#define CNFUTURETASK_H

@class NSConditionLock, NSString;
@protocol CNFuture, CNPromise;

#import <Foundation/Foundation.h>

#import "CNFutureResult.h"
#import "CNTask.h"
#import "CNFutureCompletionBlocks.h"

@interface CNFutureTask : NSObject <CNFuture, CNPromise>

 {
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(BOOL)run;
-(id)boolErrorCompletionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapterWithDefaultValue:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)flatMap:(id)arg0 ;
-(id)futureResult;
-(id)init;
-(id)initWithTask:(id)arg0 ;
-(id)recover:(id)arg0 ;
-(id)result:(*id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addFailureBlock:(id)arg0 ;
// -(void)addFailureBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)addSuccessBlock:(id)arg0 ;
// -(void)addSuccessBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)didCancel;


@end


#endif