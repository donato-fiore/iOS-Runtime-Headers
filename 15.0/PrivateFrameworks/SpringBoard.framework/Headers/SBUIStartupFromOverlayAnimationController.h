// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISTARTUPFROMOVERLAYANIMATIONCONTROLLER_H
#define SBUISTARTUPFROMOVERLAYANIMATIONCONTROLLER_H

@class BKSDisplayRenderOverlay, BSAnimationSettings;


#import "SBUIMainScreenAnimationController.h"
#import "SBSceneLayoutAnimationWrapperView.h"

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_overlay;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}


@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) BOOL waitsForAppActivation; // ivar: _waitsForAppActivation


-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_startAnimation;


@end


#endif