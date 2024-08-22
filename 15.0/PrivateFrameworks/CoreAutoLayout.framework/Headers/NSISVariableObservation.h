// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSISVARIABLEOBSERVATION_H
#define NSISVARIABLEOBSERVATION_H


#import <Foundation/Foundation.h>

#import "NSISVariableObservation.h"
#import "NSISVariable.h"

@interface NSISVariableObservation : NSObject {
    NSISVariableObservation *_nextDirtyObservation;
    NSISVariableObservation *_prevDirtyObservation;
    NSISVariable *_variable;
    CGFloat _lastValue;
    BOOL _valueIsDirtied;
}




-(id)initWithVariable:(id)arg0 ;
-(void)dealloc;
-(void)emitValueIfNeededWithEngine:(id)arg0 ;
-(void)valueWasDirtied;


@end


#endif