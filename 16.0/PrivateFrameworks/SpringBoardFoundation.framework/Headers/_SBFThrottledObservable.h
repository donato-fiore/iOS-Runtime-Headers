// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFTHROTTLEDOBSERVABLE_H
#define _SBFTHROTTLEDOBSERVABLE_H

@protocol SBFCancelable, SBFObservable, SBFScheduler;


#import "SBFObservable.h"

@interface _SBFThrottledObservable : SBFObservable {
    CGFloat _interval;
    id<SBFCancelable> *_delayToken;
    id<SBFObservable> *_observable;
    id<SBFScheduler> *_scheduler;
    id *_result;
    BOOL _hasResult;
    NSUInteger _resultCounter;
}




-(NSUInteger)_setResult:(id)arg0 ;
-(id)initWithInterval:(CGFloat)arg0 observable:(id)arg1 scheduler:(id)arg2 ;
-(id)subscribe:(id)arg0 ;
-(void)_cancel;
-(void)_clearResult;
-(void)_sendCompletionToObsever:(id)arg0 ;
-(void)_sendResultToObserver:(id)arg0 withIdentifier:(NSUInteger)arg1 ;
-(void)_setDelayToken:(id)arg0 ;
-(void)dealloc;


@end


#endif