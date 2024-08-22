// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKWAITFORKEYVALUECHANGEOPERATION_H
#define CRKWAITFORKEYVALUECHANGEOPERATION_H

@class CATOperation, NSSet;

#import <Foundation/Foundation.h>


@interface CRKWaitForKeyValueChangeOperation : CATOperation

@property (copy, nonatomic) id *conditionEvaluator; // ivar: _conditionEvaluator
@property (readonly, copy, nonatomic) NSSet *keyPaths; // ivar: _keyPaths
@property (readonly, nonatomic) NSObject *object; // ivar: _object
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing


-(BOOL)isAsynchronous;
-(id)initWithObject:(id)arg0 keyPaths:(id)arg1 conditionEvaluator:(id)arg2 ;
-(void)beginObservingObject;
-(void)cancel;
-(void)endObservingObject;
-(void)evaluateConditions;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif