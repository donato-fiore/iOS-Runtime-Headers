// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTATEMACHINE_H
#define MTSTATEMACHINE_H

@class NSString;
@protocol MTStateMachineEventHandler, MTStateMachineDelegate, MTStateMachineInfoProvider;

#import <Foundation/Foundation.h>

#import "MTStateMachineState.h"

@interface MTStateMachine : NSObject <MTStateMachineEventHandler>



@property (retain, nonatomic) MTStateMachineState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MTStateMachineInfoProvider> *infoProvider; // ivar: _infoProvider
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 infoProvider:(id)arg1 ;
-(id)stateMachineLog;
-(id)stateMachineName;
-(void)enterState:(id)arg0 ;


@end


#endif