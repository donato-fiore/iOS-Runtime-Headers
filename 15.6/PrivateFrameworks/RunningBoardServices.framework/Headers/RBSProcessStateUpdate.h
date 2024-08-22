// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSSTATEUPDATE_H
#define RBSPROCESSSTATEUPDATE_H


#import <Foundation/Foundation.h>

#import "RBSProcessExitEvent.h"
#import "RBSProcessState.h"
#import "RBSProcessHandle.h"

@interface RBSProcessStateUpdate : NSObject

@property (readonly, nonatomic) RBSProcessExitEvent *exitEvent; // ivar: _exitEvent
@property (readonly, nonatomic) RBSProcessState *previousState; // ivar: _previousState
@property (readonly, nonatomic) RBSProcessHandle *process; // ivar: _process
@property (readonly, nonatomic) RBSProcessState *state; // ivar: _state


+(id)updateWithState:(id)arg0 previousState:(id)arg1 exitEvent:(id)arg2 ;
-(id)description;


@end


#endif