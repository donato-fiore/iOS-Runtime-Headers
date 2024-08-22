// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTARTUPTRANSITIONTOLOCKOUT_H
#define SBSTARTUPTRANSITIONTOLOCKOUT_H

@class SBFUserAuthenticationController;


#import "SBBaseStartupTransition.h"
#import "SBLockScreenManager.h"

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition {
    SBFUserAuthenticationController *_authController;
}


@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager


-(id)initWithDestination:(NSUInteger)arg0 context:(id)arg1 ;
-(id)suggestedLockAnimationForTransitionRequest:(id)arg0 ;
-(void)performTransitionWithCompletionBlock:(id)arg0 ;


@end


#endif