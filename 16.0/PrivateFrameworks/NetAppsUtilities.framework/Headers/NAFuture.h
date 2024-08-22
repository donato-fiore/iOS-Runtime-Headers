// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAFUTURE_H
#define NAFUTURE_H

@class NSMutableArray, NSError, NSString;
@protocol NAPromise, NAScheduler;

#import <Foundation/Foundation.h>


@interface NAFuture : NSObject <NAPromise>

 {
    os_unfair_lock_s _lock;
    BOOL _finished;
    id<NAScheduler> *_completionScheduler;
    NSMutableArray *_completionBlocks;
    id *_resultValue;
    NSError *_resultError;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptor; // ivar: _descriptor
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_chainFuturesWithFutureStack:(id)arg0 ;
+(id)_descriptorForChainOperation:(id)arg0 onFuture:(id)arg1 withBlock:(id)arg2 ;
+(id)chainFutures:(id)arg0 ;
+(id)combineAllFutures:(id)arg0 ;
+(id)combineAllFutures:(id)arg0 ignoringErrors:(BOOL)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg0 scheduler:(id)arg1 ;
+(id)futureWithBlock:(id)arg0 ;
// +(id)futureWithBlock:(id)arg0 scheduler:(unk)arg1  ;
+(id)futureWithCompletionHandlerAdapterBlock:(id)arg0 ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(id)arg0 ;
+(id)futureWithNoResult;
+(id)futureWithResult:(id)arg0 ;
+(id)lazyFutureWithBlock:(id)arg0 ;
// +(id)lazyFutureWithBlock:(id)arg0 scheduler:(unk)arg1  ;
+(void)_setShouldEnforceThreadSafety:(BOOL)arg0 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithNoResult;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)addCompletionBlock:(id)arg0 ;
-(id)addFailureBlock:(id)arg0 ;
-(id)addSuccessBlock:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)flatMap:(id)arg0 ;
-(id)init;
-(id)initWithResult:(id)arg0 error:(id)arg1 ;
-(id)recover:(id)arg0 ;
-(id)recoverIgnoringError;
-(id)reschedule:(id)arg0 ;
-(void)didCancel;
-(void)willAddCompletionBlock;


@end


#endif