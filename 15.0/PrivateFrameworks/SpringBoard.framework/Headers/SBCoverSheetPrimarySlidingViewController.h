// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETPRIMARYSLIDINGVIEWCONTROLLER_H
#define SBCOVERSHEETPRIMARYSLIDINGVIEWCONTROLLER_H

@class NSString, UIGestureRecognizer, SBFTouchPassThroughView;
@protocol SBGrabberTongueDelegate, SBReachabilityObserver, SBCoverSheetGrabberDelegate;


#import "SBCoverSheetSlidingViewController.h"
#import "SBGrabberTongue.h"
#import "SBCoverSheetPanelBackgroundContainerView.h"
#import "SBCoverSheetBlurView.h"
#import "SBWallpaperEffectView.h"
#import "SBCoverSheetParallaxContainerView.h"

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultPresentGestureEdgeRegionSize; // ivar: _defaultPresentGestureEdgeRegionSize
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *edgePullGestureRecognizer;
@property (weak, nonatomic) NSObject<SBCoverSheetGrabberDelegate> *grabberDelegate; // ivar: _grabberDelegate
@property (retain, nonatomic) SBGrabberTongue *grabberTongue; // ivar: _grabberTongue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView; // ivar: _panelBackgroundContainerView
@property (retain, nonatomic) SBCoverSheetBlurView *panelCoverSheetBlurView; // ivar: _panelCoverSheetBlurView
@property (retain, nonatomic) SBWallpaperEffectView *panelFadeOutWallpaperEffectView; // ivar: _panelFadeOutWallpaperEffectView
@property (retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView; // ivar: _panelWallpaperEffectView
@property (retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView; // ivar: _parallaxClippingView
@property (retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView; // ivar: _parallaxContainerView
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView; // ivar: _unlockedContentOverlayView


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(BOOL)grabberTongue:(id)arg0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(id)customGestureRecognizerForGrabberTongue:(id)arg0 ;
-(struct CGRect )_animationTickedWithProgress:(CGFloat)arg0 forPresentationValue:(BOOL)arg1 ;
-(void)_beginTransitionFromAppeared:(BOOL)arg0 ;
-(void)_createFadeOutWallpaperEffectView;
-(void)_createPanelWallpaperEffectViewIfNeeded;
-(void)_endTransitionToAppeared:(BOOL)arg0 ;
-(void)_positionSubviewsForContentFrame:(struct CGRect )arg0 forPresentationValue:(BOOL)arg1 ;
-(void)_setupPanelPartsIfNecessary;
-(void)_updatePanelWallpaperEffectView;
-(void)_updateWindowVisibility;
-(void)dealloc;
-(void)grabberTongueBeganPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueCanceledPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueDidDismiss:(id)arg0 ;
-(void)grabberTongueEndedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueUpdatedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueWillPresent:(id)arg0 ;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)loadView;
-(void)setTransitionSettings:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif