// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSTATEMACHINESTATE_H
#define MTSTATEMACHINESTATE_H

@class NSString;
@protocol MTStateMachineEventHandler;

#import <Foundation/Foundation.h>

#import "MTStateMachine.h"

@interface MTStateMachineState : NSObject <MTStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MTStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(id)initWithStateMachine:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)didExitWithNextState:(id)arg0 ;
-(void)willEnterWithPreviousState:(id)arg0 ;
-(void)willExitWithNextState:(id)arg0 ;


@end


#endif