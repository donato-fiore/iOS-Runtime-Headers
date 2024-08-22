// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISTARTUPFROMOVERLAYANIMATIONCONTROLLER_H
#define SBUISTARTUPFROMOVERLAYANIMATIONCONTROLLER_H

@class BKSDisplayRenderOverlay, SBOrientationTransformWrapperView, SBSceneView, BSAnimationSettings, NSString;
@protocol SBSceneViewPresentationConfiguring;


#import "SBUIMainScreenAnimationController.h"

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring>

 {
    BKSDisplayRenderOverlay *_overlay;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
}


@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitsForAppActivation; // ivar: _waitsForAppActivation


-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_startAnimation;


@end


#endif