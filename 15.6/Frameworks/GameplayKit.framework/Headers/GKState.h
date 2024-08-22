// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSTATE_H
#define GKSTATE_H


#import <Foundation/Foundation.h>

#import "GKStateMachine.h"

@interface GKState : NSObject {
    GKStateMachine *_stateMachine;
}


@property (readonly, weak, nonatomic) GKStateMachine *stateMachine;


+(id)state;
-(BOOL)isValidNextState:(Class)arg0 ;
-(id)init;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)updateWithDeltaTime:(CGFloat)arg0 ;
-(void)willExitWithNextState:(id)arg0 ;


@end


#endif