// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNGENERATOROBSERVABLE_H
#define _CNGENERATOROBSERVABLE_H

@protocol CNScheduler;


#import "CNObservable.h"
#import "CNCancelationToken.h"

@interface _CNGeneratorObservable : CNObservable {
    id *_state;
    id *_condition;
    id *_nextState;
    id *_resultSelector;
    id *_delay;
    id<CNScheduler> *_scheduler;
    CNCancelationToken *_cancelable;
}




-(BOOL)isCanceled;
-(BOOL)isFinished;
// -(id)initWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 delay:(unk)arg4 scheduler:(id)arg5  ;
-(id)subscribe:(id)arg0 ;
-(void)scheduleNextResultForObserver:(id)arg0 ;
-(void)sendCurrentStateToObserver:(id)arg0 ;
-(void)sendResultsToObserver:(id)arg0 ;
-(void)updateState;


@end


#endif