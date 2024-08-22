// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSTATEMACHINESTATE_H
#define HKSPSTATEMACHINESTATE_H

@class NSString;
@protocol HKSPStateMachineEventHandler, NSCopying;

#import <Foundation/Foundation.h>

#import "HKSPStateMachine.h"

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HKSPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)equalsBuilderWithObject:(id)arg0 ;
-(id)initWithStateMachine:(id)arg0 ;
-(id)stateName;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)updateState;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)willExitWithNextState:(id)arg0 context:(id)arg1 ;


@end


#endif