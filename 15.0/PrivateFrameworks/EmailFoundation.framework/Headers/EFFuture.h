// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFFUTURE_H
#define EFFUTURE_H

@class NSConditionLock, NSError, NSMutableArray, NSString;
@protocol EFPromisePrivate, EFFuture, EFFutureDelegate, EFObserver;

#import <Foundation/Foundation.h>


@interface EFFuture : NSObject <EFPromisePrivate, EFFuture>

 {
    NSConditionLock *_stateLock;
    id *_result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}


@property (readonly) id *boolErrorCompletionHandlerAdapter;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) id *completionHandlerAdapter;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<EFFutureDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) id *errorOnlyCompletionHandlerAdapter;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) NSObject<EFObserver> *firstResultObserverAdapter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *result;
@property (readonly, nonatomic) id *resultIfAvailable;
@property (readonly) NSObject<EFObserver> *resultsObserverAdapter;
@property (readonly) Class superclass;


+(id)_join:(id)arg0 ignoreFailures:(BOOL)arg1 ;
// +(id)_recover:(id)arg0 withBlock:(id)arg1 scheduler:(unk)arg2  ;
// +(id)_then:(id)arg0 withBlock:(id)arg1 scheduler:(unk)arg2  ;
+(id)chain:(id)arg0 ;
+(id)combine:(id)arg0 ;
+(id)futureWithBlock:(id)arg0 ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithResult:(id)arg0 ;
+(id)join:(id)arg0 ;
+(id)lazyFutureWithBlock:(id)arg0 ;
+(id)nullFuture;
+(id)onScheduler:(id)arg0 futureWithBlock:(id)arg1 ;
+(id)onScheduler:(id)arg0 lazyFutureWithBlock:(id)arg1 ;
+(id)sequence:(id)arg0 ;
// +(void)_always:(id)arg0 withBlock:(id)arg1 scheduler:(unk)arg2  ;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(BOOL)tryCancel;
-(id)init;
-(id)map:(id)arg0 ;
-(id)onScheduler:(id)arg0 map:(id)arg1 ;
-(id)onScheduler:(id)arg0 recover:(id)arg1 ;
-(id)onScheduler:(id)arg0 then:(id)arg1 ;
-(id)recover:(id)arg0 ;
-(id)result:(*id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultIfAvailable:(*id)arg0 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(id)then:(id)arg0 ;
-(void)_addCompletionBlock:(id)arg0 ;
-(void)_finishWithFuture:(id)arg0 ;
-(void)_flushCompletionBlocks;
-(void)addFailureBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)always:(id)arg0 ;
-(void)cancel;
-(void)didCancel;
-(void)finishWithFuture:(id)arg0 ;
-(void)onScheduler:(id)arg0 addFailureBlock:(id)arg1 ;
-(void)onScheduler:(id)arg0 addSuccessBlock:(id)arg1 ;
-(void)onScheduler:(id)arg0 always:(id)arg1 ;


@end


#endif