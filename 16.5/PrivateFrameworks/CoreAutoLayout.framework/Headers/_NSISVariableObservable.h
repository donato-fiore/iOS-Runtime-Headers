// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSISVARIABLEOBSERVABLE_H
#define _NSISVARIABLEOBSERVABLE_H

@class NSObservationSource;


#import "_NSISVariableObservable.h"
#import "NSISVariable.h"
#import "NSISEngine.h"

@interface _NSISVariableObservable : NSObservationSource {
    _NSISVariableObservable *_nextDirtyObservable;
    _NSISVariableObservable *_prevDirtyObservable;
    CGFloat _lastValue;
    NSISVariable *_variable;
    NSISEngine *_associatedEngine;
    BOOL _hasLastValue;
    BOOL _valueIsDirtied;
}




+(id)observableForVariable:(id)arg0 inEngine:(id)arg1 ;
-(BOOL)valueHasChanged;
-(void)dealloc;
-(void)emitValueIfNeeded;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif