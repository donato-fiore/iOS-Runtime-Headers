// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNOBSERVABLE_H
#define CNOBSERVABLE_H

@class NSString;
@protocol CNObservable;

#import <Foundation/Foundation.h>


@interface CNObservable : NSObject <CNObservable>

 {
    NSString *_pipelineDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugPipelineDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)amb:(id)arg0 ;
+(id)asyncScannerResultsInString:(id)arg0 ;
+(id)binderTypeForResultType:(NSUInteger)arg0 ;
+(id)combineLatest:(id)arg0 ;
+(id)combineLatest:(id)arg0 resultScheduler:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)combineLatest:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)concatenate:(id)arg0 ;
+(id)emptyObservable;
+(id)forkJoin:(id)arg0 scheduler:(id)arg1 ;
+(id)merge:(id)arg0 ;
+(id)merge:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)neverObservable;
+(id)observableForKeyPath:(id)arg0 ofObject:(id)arg1 withOptions:(NSUInteger)arg2 ;
+(id)observableOnDarwinNotificationCenterWithName:(id)arg0 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg0 object:(id)arg1 ;
+(id)observableOnNotificationCenter:(id)arg0 withName:(id)arg1 object:(id)arg2 ;
+(id)observableWithAbsoluteTimestamps:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)observableWithBlock:(id)arg0 ;
+(id)observableWithEmailAddressesInString:(id)arg0 ;
+(id)observableWithError:(id)arg0 ;
+(id)observableWithFuture:(id)arg0 ;
+(id)observableWithFuture:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)observableWithFutures:(id)arg0 ;
+(id)observableWithFutures:(id)arg0 schedulerProvider:(id)arg1 ;
// +(id)observableWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3  ;
// +(id)observableWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 delay:(unk)arg4 scheduler:(id)arg5  ;
// +(id)observableWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 scheduler:(unk)arg4  ;
+(id)observableWithRange:(struct _NSRange )arg0 ;
+(id)observableWithRange:(struct _NSRange )arg0 interval:(CGFloat)arg1 scheduler:(id)arg2 ;
+(id)observableWithRange:(struct _NSRange )arg0 scheduler:(id)arg1 ;
+(id)observableWithRelativeTimestamps:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)observableWithResult:(id)arg0 ;
+(id)observableWithResults:(id)arg0 ;
+(id)observableWithResults:(id)arg0 interval:(CGFloat)arg1 scheduler:(id)arg2 ;
+(id)observableWithResults:(id)arg0 scheduler:(id)arg1 ;
+(id)observableWithScannerResultsInString:(id)arg0 ;
+(id)observableWithScannerResultsOfType:(NSUInteger)arg0 inString:(id)arg1 ;
+(id)observableWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
+(id)os_log;
+(id)os_log_protocol;
+(id)progressiveForkJoin:(id)arg0 scheduler:(id)arg1 ;
+(id)scannerResultsInString:(id)arg0 ;
+(id)timerWithDelay:(CGFloat)arg0 ;
+(id)timerWithDelay:(CGFloat)arg0 scheduler:(id)arg1 ;
+(void)sendNextTimestampFromQueue:(id)arg0 toObserver:(id)arg1 untilCanceled:(id)arg2 scheduler:(id)arg3 ;
-(id)allObjects:(*id)arg0 ;
-(id)ambWith:(id)arg0 ;
-(id)any:(id)arg0 ;
-(id)buffer:(NSUInteger)arg0 ;
-(id)buffer:(NSUInteger)arg0 interval:(CGFloat)arg1 ;
-(id)buffer:(NSUInteger)arg0 interval:(CGFloat)arg1 scheduler:(id)arg2 ;
-(id)bufferWithInterval:(CGFloat)arg0 ;
-(id)bufferWithInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)concatMap:(id)arg0 ;
// -(id)concatMap:(id)arg0 schedulerProvider:(unk)arg1  ;
-(id)delay:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)delaySubscription:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)dematerialize;
-(id)distinct;
-(id)distinctUntilChanged;
-(id)doOnCancel:(id)arg0 ;
-(id)doOnCompletion:(id)arg0 ;
-(id)doOnError:(id)arg0 ;
-(id)doOnNext:(id)arg0 ;
-(id)doOnSubscribe:(id)arg0 ;
-(id)doOnTerminate:(id)arg0 ;
-(id)filter:(id)arg0 ;
-(id)flatMap:(id)arg0 ;
// -(id)flatMap:(id)arg0 schedulerProvider:(unk)arg1  ;
-(id)ignoreElements;
-(id)map:(id)arg0 ;
-(id)materialize;
-(id)observeOn:(id)arg0 ;
-(id)onEmpty:(id)arg0 ;
-(id)onError:(id)arg0 ;
-(id)onErrorHandler:(id)arg0 ;
-(id)pipelineDescription:(id)arg0 ;
// -(id)pipelineDescriptionWithOperation:(id)arg0 onObservable:(unk)arg1  ;
-(id)publish;
-(id)sample:(CGFloat)arg0 ;
-(id)sample:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)sampleWithObservable:(id)arg0 ;
-(id)scan:(id)arg0 ;
// -(id)scan:(id)arg0 seed:(unk)arg1  ;
-(id)skip:(NSUInteger)arg0 ;
-(id)skipLast:(NSUInteger)arg0 ;
-(id)skipUntil:(id)arg0 ;
-(id)startWith:(id)arg0 ;
-(id)startWith:(id)arg0 scheduler:(id)arg1 ;
-(id)subscribe:(id)arg0 ;
-(id)subscribeOn:(id)arg0 ;
-(id)switch;
-(id)switchMap:(id)arg0 ;
// -(id)switchMap:(id)arg0 schedulerProvider:(unk)arg1  ;
-(id)switchWithSchedulerProvider:(id)arg0 ;
-(id)take:(NSUInteger)arg0 ;
-(id)takeLast:(NSUInteger)arg0 ;
-(id)takeUntil:(id)arg0 ;
-(id)throttle:(CGFloat)arg0 options:(NSUInteger)arg1 schedulerProvider:(id)arg2 ;
-(id)throttle:(CGFloat)arg0 schedulerProvider:(id)arg1 ;
-(id)throttleFirst:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)throttleFirstAndLast:(CGFloat)arg0 schedulerProvider:(id)arg1 ;
-(id)timeInterval;
-(id)timeIntervalWithScheduler:(id)arg0 ;
-(id)timeoutAfterDelay:(CGFloat)arg0 alternateObservable:(id)arg1 schedule:(id)arg2 ;
-(id)timestampWithScheduler:(id)arg0 ;
-(id)toArray;
-(id)using:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif