// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTTRANSITIONANIMATIONCONTROLLER_H
#define SBSCENELAYOUTTRANSITIONANIMATIONCONTROLLER_H



#import "SBUIWorkspaceAnimationController.h"
#import "SBSceneLayoutViewController.h"
#import "SBUIBlockAnimationController.h"

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}




-(BOOL)_canBeInterrupted;
-(NSUInteger)_serialOverlayPreDismissalOptions;
-(id)_getTransitionWindow;
-(id)animationSettings;
-(id)containerView;
-(id)initWithTransitionContextProvider:(id)arg0 layoutController:(id)arg1 animationSettings:(id)arg2 animationBlock:(id)arg3 ;
-(id)initWithTransitionContextProvider:(id)arg0 layoutController:(id)arg1 animationSettings:(id)arg2 stepped:(BOOL)arg3 animationBlock:(id)arg4 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 ;


@end


#endif