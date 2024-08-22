// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFFORKJOINOBSERVABLE_H
#define _SBFFORKJOINOBSERVABLE_H

@class NSArray, NSMutableArray;


#import "SBFObservable.h"

@interface _SBFForkJoinObservable : SBFObservable {
    NSArray *_observables;
    NSMutableArray *_results;
    NSUInteger _uncompletedObservableCount;
}




-(id)initWithWithObservables:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_observableFinishedForObserver:(id)arg0 ;
-(void)_setResult:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif