// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISTARTUPTOUSERSETUPAPPZOOMINANIMATIONCONTROLLER_H
#define SBUISTARTUPTOUSERSETUPAPPZOOMINANIMATIONCONTROLLER_H

@class BKSDisplayRenderOverlay;


#import "SBUIMainScreenAnimationController.h"
#import "SBSceneLayoutAnimationWrapperView.h"

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController {
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}




-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(id)_getTransitionWindow;
-(id)animationSettings;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_startAnimation;


@end


#endif