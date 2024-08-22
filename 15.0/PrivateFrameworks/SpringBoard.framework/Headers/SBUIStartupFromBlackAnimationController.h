// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISTARTUPFROMBLACKANIMATIONCONTROLLER_H
#define SBUISTARTUPFROMBLACKANIMATIONCONTROLLER_H

@class UIView, BSAnimationSettings;


#import "SBUIMainScreenAnimationController.h"
#import "SBSceneLayoutAnimationWrapperView.h"

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController {
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}


@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) BOOL waitsForAppActivation; // ivar: _waitsForAppActivation


-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(id)_getTransitionWindow;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_showBlackView;
-(void)_startAnimation;


@end


#endif