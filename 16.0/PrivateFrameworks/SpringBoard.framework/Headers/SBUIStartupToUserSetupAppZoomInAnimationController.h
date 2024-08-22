// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISTARTUPTOUSERSETUPAPPZOOMINANIMATIONCONTROLLER_H
#define SBUISTARTUPTOUSERSETUPAPPZOOMINANIMATIONCONTROLLER_H

@class SBOrientationTransformWrapperView, SBSceneView, BKSDisplayRenderOverlay, NSString;
@protocol SBSceneViewPresentationConfiguring;


#import "SBUIMainScreenAnimationController.h"

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring>

 {
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(id)_getTransitionWindow;
-(id)animationSettings;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_startAnimation;


@end


#endif