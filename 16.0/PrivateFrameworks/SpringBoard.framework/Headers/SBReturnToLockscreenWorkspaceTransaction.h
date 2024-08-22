// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRETURNTOLOCKSCREENWORKSPACETRANSACTION_H
#define SBRETURNTOLOCKSCREENWORKSPACETRANSACTION_H



#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"
#import "SBApplicationSceneEntity.h"

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}




-(NSUInteger)_serialOverlayPreDismissalOptions;
-(id)_setupAnimation;
-(id)debugDescription;
-(id)initWithTransitionRequest:(id)arg0 toLockScreenEnvironment:(id)arg1 ;
-(void)_animationDidFinish;
-(void)_animationWillBegin:(BOOL)arg0 ;
-(void)_didComplete;


@end


#endif