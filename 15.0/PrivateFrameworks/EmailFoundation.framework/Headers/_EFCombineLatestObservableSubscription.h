// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EFCOMBINELATESTOBSERVABLESUBSCRIPTION_H
#define _EFCOMBINELATESTOBSERVABLESUBSCRIPTION_H

@class NSMutableIndexSet, NSLock, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _EFCombineLatestObservableSubscription : NSObject

@property (retain, nonatomic) NSMutableIndexSet *activeIndexes; // ivar: _activeIndexes
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (copy, nonatomic) NSArray *observables; // ivar: _observables
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) NSMutableIndexSet *silentIndexes; // ivar: _silentIndexes
@property (retain, nonatomic) NSMutableArray *tokens; // ivar: _tokens


-(id)initWithObservables:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_observableAtIndex:(NSUInteger)arg0 didCompleteForObserver:(id)arg1 ;
-(void)_observableAtIndex:(NSUInteger)arg0 didFailWithError:(id)arg1 observer:(id)arg2 ;
-(void)_observableAtIndex:(NSUInteger)arg0 receivedResult:(id)arg1 observer:(id)arg2 ;


@end


#endif