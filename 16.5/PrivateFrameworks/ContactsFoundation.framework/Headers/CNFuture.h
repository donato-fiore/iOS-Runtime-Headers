// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFUTURE_H
#define CNFUTURE_H

@class NSMutableArray, NSString;
@protocol CNFuture, CNPromise, CNFutureImpl;

#import <Foundation/Foundation.h>


@interface CNFuture : NSObject <CNFuture, CNPromise>

 {
    id<CNFutureImpl> *_impl;
    NSMutableArray *_calculationDependencies;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_joinMany:(id)arg0 ;
+(id)_joinOne:(id)arg0 ;
+(id)_joinZero;
+(id)chain:(id)arg0 ;
// +(id)flatMap:(id)arg0 withBlock:(id)arg1 schedulerProvider:(unk)arg2  ;
+(id)future;
+(id)futureWithBlock:(id)arg0 ;
// +(id)futureWithBlock:(id)arg0 scheduler:(unk)arg1  ;
// +(id)futureWithBlock:(id)arg0 scheduler:(unk)arg1 schedulerProvider:(id)arg2  ;
// +(id)futureWithBlock:(id)arg0 schedulerProvider:(unk)arg1  ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithResult:(id)arg0 ;
+(id)join:(id)arg0 ;
+(id)lazyFutureWithBlock:(id)arg0 ;
+(id)promiseFuture;
// +(id)recover:(id)arg0 withBlock:(id)arg1 schedulerProvider:(unk)arg2  ;
+(id)sequence:(id)arg0 ;
+(void)finishPromise:(id)arg0 withFuture:(id)arg1 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)boolErrorCompletionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)completionHandlerAdapterWithDefaultValue:(SEL)arg0 ;
-(id)errorOnlyCompletionHandlerAdapter:(SEL)arg0 ;
-(id)flatMap:(id)arg0 ;
// -(id)flatMap:(id)arg0 schedulerProvider:(unk)arg1  ;
-(id)init;
-(id)initWithImpl:(id)arg0 ;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)recover:(id)arg0 ;
// -(id)recover:(id)arg0 schedulerProvider:(unk)arg1  ;
-(id)result:(*id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addCalculationDependency:(id)arg0 ;
-(void)addFailureBlock:(id)arg0 ;
// -(void)addFailureBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)addSuccessBlock:(id)arg0 ;
// -(void)addSuccessBlock:(id)arg0 scheduler:(unk)arg1  ;
-(void)didCancel;


@end


#endif