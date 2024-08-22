// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDSPOTLIGHTVIEWCONTROLLER_H
#define SBDASHBOARDSPOTLIGHTVIEWCONTROLLER_H

@class SBSearchBackdropView, NSString, FBDisplayLayoutTransition, UIViewController<SBUISpotlightInitiating>, _UILegibilitySettings;
@protocol _SBDashBoardSpotlightViewControllerDelegate, SBViewControllerTransitionContextDelegate, SBDashBoardSpotlightViewControllerDelegate, SPUIRemoteSearchViewDelegate;


#import "SBHomeGestureDismissableCoverSheetViewController.h"
#import "_SBDashBoardSpotlightViewController.h"

@interface SBDashBoardSpotlightViewController : SBHomeGestureDismissableCoverSheetViewController <_SBDashBoardSpotlightViewControllerDelegate, SBViewControllerTransitionContextDelegate>

 {
    SBSearchBackdropView *_backdropView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDashBoardSpotlightViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBDisplayLayoutTransition *displayLayoutTransition; // ivar: _displayLayoutTransition
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController<SBUISpotlightInitiating> *initiatingViewController; // ivar: _initiatingViewController
@property (weak, nonatomic) NSObject<SPUIRemoteSearchViewDelegate> *spotlightDelegate;
@property (retain, nonatomic) _UILegibilitySettings *spotlightLegibilitySettings; // ivar: _spotlightLegibilitySettings
@property (retain, nonatomic) _SBDashBoardSpotlightViewController *spotlightViewController; // ivar: _spotlightViewController
@property (readonly) Class superclass;


-(BOOL)_initiallyTransitioningToSpotlight:(id)arg0 ;
-(BOOL)_isTransitioning;
-(BOOL)_shouldCancelInteractiveDismissGesture:(id)arg0 ;
-(BOOL)_transitioningIntoSpotlight:(id)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)presentationCancelsTouches;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(NSInteger)homeGestureParticipantIdentifier;
-(NSInteger)presentationStyle;
-(NSInteger)presentationTransition;
-(NSInteger)presentationType;
-(NSInteger)zStackParticipantIdentifier;
-(NSUInteger)remoteSearchViewPresentationSourceForSpotlightViewController:(id)arg0 ;
-(NSUInteger)spotlightMultiplexingLevelForSpotlightViewController:(id)arg0 ;
-(id)displayLayoutElementIdentifier;
-(id)init;
-(id)transitionContextToShowSpotlight:(BOOL)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)invalidate;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)transitionDidFinish:(id)arg0 ;
-(void)transitionDidReverse:(id)arg0 ;
-(void)transitionWillBegin:(id)arg0 ;
-(void)transitionWillFinish:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif