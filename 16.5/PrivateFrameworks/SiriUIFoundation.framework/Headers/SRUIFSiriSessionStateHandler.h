// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFSIRISESSIONSTATEHANDLER_H
#define SRUIFSIRISESSIONSTATEHANDLER_H

@class NSString;
@protocol SRUIFStateMachineDelegate, SRUIFSiriSessionStateHandlerDelegate;

#import <Foundation/Foundation.h>

#import "SRUIFStateMachine.h"

@interface SRUIFSiriSessionStateHandler : NSObject <SRUIFStateMachineDelegate>

 {
    SRUIFStateMachine *_stateMachine;
    NSUInteger _thinkingIntervalID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SRUIFSiriSessionStateHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)state;
-(id)_stateMachine;
-(id)initWithDelegate:(id)arg0 ;
-(id)stateMachine:(id)arg0 descriptionForEvent:(NSInteger)arg1 ;
-(void)performTransitionForEvent:(NSInteger)arg0 ;
-(void)performTransitionForEvent:(NSInteger)arg0 eventTimeStamp:(CGFloat)arg1 ;
-(void)stateMachine:(id)arg0 didTransitionFromState:(NSInteger)arg1 forEvent:(NSInteger)arg2 ;
-(void)stateMachine:(id)arg0 didTransitionFromState:(NSInteger)arg1 forEvent:(NSInteger)arg2 eventTimeStamp:(CGFloat)arg3 ;


@end


#endif