// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCOMBINELATESTOBSERVABLE_H
#define _CNCOMBINELATESTOBSERVABLE_H

@class NSMutableIndexSet, NSArray, NSMutableArray;
@protocol CNScheduler;


#import "CNObservable.h"

@interface _CNCombineLatestObservable : CNObservable

@property (readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes; // ivar: _activeObservableIndexes
@property (readonly, nonatomic) NSArray *observables; // ivar: _observables
@property (readonly, nonatomic) NSObject<CNScheduler> *resultScheduler; // ivar: _resultScheduler
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results
@property (readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes; // ivar: _silentObservableIndexes
@property (readonly, nonatomic) NSMutableArray *tokens; // ivar: _tokens


-(id)initWithObservables:(id)arg0 ;
-(id)initWithObservables:(id)arg0 resultScheduler:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)subscribe:(id)arg0 ;
-(void)observableAtIndex:(NSUInteger)arg0 didFailWithError:(id)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndex:(NSUInteger)arg0 didReceiveResult:(id)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndexDidComplete:(NSUInteger)arg0 forObserver:(id)arg1 ;
-(void)performWithResourceLock:(id)arg0 ;


@end


#endif