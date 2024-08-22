// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSISLINEAREXPRESSIONOBSERVABLE_H
#define _NSISLINEAREXPRESSIONOBSERVABLE_H

@class NSObservationSource, NSNumber, NSMutableArray;


#import "NSISLinearExpression.h"
#import "NSISEngine.h"

@interface _NSISLinearExpressionObservable : NSObservationSource {
    NSNumber *_lastValue;
    NSISLinearExpression *_expression;
    NSISEngine *_associatedEngine;
    NSMutableArray *_variableObservations;
    id *_changeTransactionObservation;
    BOOL _valueIsDirtied;
}




+(id)observableForExpression:(id)arg0 inEngine:(id)arg1 ;
-(BOOL)_overrideUseFastBlockObservers;
-(id)addObserver:(id)arg0 ;
-(id)addObserverBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif