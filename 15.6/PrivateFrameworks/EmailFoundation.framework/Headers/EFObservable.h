// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFOBSERVABLE_H
#define EFOBSERVABLE_H


#import <Foundation/Foundation.h>


@interface EFObservable : NSObject



+(id)combineLatest:(id)arg0 ;
+(id)concatenate:(id)arg0 ;
+(id)emptyObservable;
+(id)merge:(id)arg0 ;
+(id)neverObservable;
+(id)observableAfterDelay:(CGFloat)arg0 interval:(CGFloat)arg1 scheduler:(id)arg2 ;
+(id)observableAfterDelay:(CGFloat)arg0 scheduler:(id)arg1 ;
+(id)observableObserver;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg0 object:(id)arg1 ;
+(id)observableOnNotificationCenter:(id)arg0 name:(id)arg1 object:(id)arg2 ;
+(id)observableOnNotifyTokenWithName:(id)arg0 ;
+(id)observableWithBlock:(id)arg0 ;
+(id)observableWithError:(id)arg0 ;
+(id)observableWithFuture:(id)arg0 ;
// +(id)observableWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 delay:(unk)arg4 scheduler:(id)arg5  ;
// +(id)observableWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 scheduler:(unk)arg4  ;
+(id)observableWithResult:(id)arg0 ;
+(id)observableWithResults:(id)arg0 ;
+(id)observableWithResults:(id)arg0 scheduler:(id)arg1 ;
+(id)observableWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)allObjects:(*id)arg0 ;
-(id)debounceWithTimeInterval:(CGFloat)arg0 ;
-(id)debounceWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)delay:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)distinctUntilChanged;
-(id)doOnCancel:(id)arg0 ;
-(id)doOnCompletion:(id)arg0 ;
-(id)doOnError:(id)arg0 ;
-(id)doOnNext:(id)arg0 ;
-(id)doOnSubscribe:(id)arg0 ;
-(id)doOnTerminate:(id)arg0 ;
-(id)filter:(id)arg0 ;
-(id)first;
-(id)map:(id)arg0 ;
-(id)multicast:(id)arg0 ;
-(id)observeOn:(id)arg0 ;
-(id)publish;
-(id)replay;
-(id)replay:(NSUInteger)arg0 ;
-(id)sampleWithObservable:(id)arg0 ;
-(id)sampleWithTimeInterval:(CGFloat)arg0 ;
-(id)sampleWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
-(id)skip:(NSUInteger)arg0 ;
-(id)startWith:(id)arg0 ;
-(id)startWith:(id)arg0 scheduler:(id)arg1 ;
-(id)subscribeOn:(id)arg0 ;
-(id)subscribeWithResultBlock:(id)arg0 ;
-(id)take:(NSUInteger)arg0 ;


@end


#endif