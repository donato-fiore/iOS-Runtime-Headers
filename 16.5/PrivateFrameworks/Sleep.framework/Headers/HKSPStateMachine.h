// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSTATEMACHINE_H
#define HKSPSTATEMACHINE_H

@class NSArray, NSString;
@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler, NAScheduler;

#import <Foundation/Foundation.h>

#import "HKSPStateMachineState.h"

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>



@property (readonly, nonatomic) NSArray *allStates;
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) HKSPStateMachineState *currentState; // ivar: _currentState
@property (readonly, nonatomic) NSString *currentStateIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HKSPStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HKSPStateMachineInfoProvider> *infoProvider; // ivar: _infoProvider
@property (readonly, nonatomic) BOOL initialized; // ivar: _initialized
@property (readonly) Class superclass;


-(BOOL)enterState:(id)arg0 ;
-(BOOL)enterState:(id)arg0 context:(id)arg1 ;
-(NSUInteger)loggingCategory;
-(id)initWithDelegate:(id)arg0 infoProvider:(id)arg1 ;
-(id)stateMachineName;
-(void)notifyDelegateWithBlock:(id)arg0 ;
-(void)setInitialState:(id)arg0 ;
-(void)updateState;
-(void)updateStateWithContext:(id)arg0 ;


@end


#endif