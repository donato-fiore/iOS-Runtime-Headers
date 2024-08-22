// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIBLOCKANIMATIONCONTROLLER_H
#define SBUIBLOCKANIMATIONCONTROLLER_H

@class BSAnimationSettings;


#import "SBUIWorkspaceAnimationController.h"

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    BSAnimationSettings *_animationSettings;
    id *_animationBlock;
}




-(id)animationSettings;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 animationSettings:(id)arg1 animationBlock:(id)arg2 ;
-(void)_didComplete;
-(void)_startAnimation;


@end


#endif