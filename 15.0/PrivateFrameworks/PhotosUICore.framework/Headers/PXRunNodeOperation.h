// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRUNNODEOPERATION_H
#define PXRUNNODEOPERATION_H

@class NSOperation, NSLock;


#import "PXRunNode.h"

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock; // ivar: __stateLock
@property (readonly, nonatomic) PXRunNode *runNode; // ivar: _runNode
@property (readonly) NSUInteger state; // ivar: _state


+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
-(BOOL)_transitionToState:(NSUInteger)arg0 ;
-(BOOL)cancelIfAble;
-(BOOL)completeIfAble;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)init;
-(id)initWithRunNode:(id)arg0 ;
-(void)start;


@end


#endif