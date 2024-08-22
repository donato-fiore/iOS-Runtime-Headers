// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEQUARANTINEPOLICYEVALUATOR_H
#define WFREMOTEQUARANTINEPOLICYEVALUATOR_H

@class NSThread, JSVirtualMachine, NSTimer;
@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

#import <Foundation/Foundation.h>


@interface WFRemoteQuarantinePolicyEvaluator : NSObject

@property (weak, nonatomic) NSObject<WFRemoteQuarantinePolicyEvaluatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSThread *javaScriptEvaluationThread; // ivar: _javaScriptEvaluationThread
@property (readonly, nonatomic) *__CFRunLoop javaScriptEvaluationThreadRunLoop; // ivar: _javaScriptEvaluationThreadRunLoop
@property (retain, nonatomic) JSVirtualMachine *javaScriptVirtualMachine; // ivar: _javaScriptVirtualMachine
@property (readonly, nonatomic) NSTimer *javaScriptVirtualMachineDestructionTimer; // ivar: _javaScriptVirtualMachineDestructionTimer


+(id)sharedEvaluator;
-(id)init;
-(void)_evaluatePolicyForRequest:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)evaluatePolicyForRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif