// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFGENERATOROBSERVABLE_H
#define _EFGENERATOROBSERVABLE_H

@protocol EFScheduler;


#import "EFObservable.h"
#import "EFCancelationToken.h"

@interface _EFGeneratorObservable : EFObservable {
    id<EFScheduler> *_scheduler;
    EFCancelationToken *_cancelable;
    id *_state;
    id *_condition;
    id *_nextStateForState;
    id *_resultFromState;
    id *_delayForState;
}




-(BOOL)_isFinished;
// -(id)initWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3 delay:(unk)arg4 scheduler:(id)arg5  ;
-(id)subscribe:(id)arg0 ;
-(void)_scheduleNextResultForObserver:(id)arg0 ;
-(void)_updateState;


@end


#endif