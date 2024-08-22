// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTVIEWCONTROLLER_H
#define SBSCENELAYOUTVIEWCONTROLLER_H

@class UIViewController, FBDisplayLayoutElement, FBDisplayLayoutTransition, NSMutableDictionary, NSMutableSet, NSArray, NSString, FBSDisplayIdentity, UIView;
@protocol SBSceneViewPresentationConfiguring, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, BSDescriptionProviding, SBDisplayLayoutContext, SBSceneLayoutViewControllerDelegate;


#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBLayoutState.h"
#import "SBSceneManager.h"

@interface SBSceneLayoutViewController : UIViewController <SBSceneViewPresentationConfiguring, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, BSDescriptionProviding, SBDisplayLayoutContext>

 {
    FBDisplayLayoutElement *_homescreenLayoutElement;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSMutableDictionary *_layoutElementControllersByRole;
    NSMutableDictionary *_previousLayoutElementControllersByRole;
    NSMutableDictionary *_reusableLayoutElementControllers;
    NSMutableSet *_elementViewControllerUpdatesSuspensionReasons;
}


@property (readonly, nonatomic, getter=_isCurrentlyRotating) BOOL _currentlyRotating;
@property (readonly, nonatomic, getter=_isCurrentlyTransitioning) BOOL _currentlyTransitioning;
@property (readonly, nonatomic) NSInteger _layoutOrientation;
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext; // ivar: _previousSuccessfulTransitionContext
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *_transitionContext; // ivar: _transitionContext
@property (readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property (readonly, nonatomic) NSInteger _transitioningFromLayoutOrientation;
@property (readonly, nonatomic) SBLayoutState *_transitioningFromLayoutState; // ivar: _transitioningFromLayoutState
@property (readonly, copy, nonatomic) NSArray *_transitioningLayoutElementControllers;
@property (readonly, nonatomic) NSInteger _transitioningToLayoutOrientation;
@property (readonly, nonatomic) SBLayoutState *_transitioningToLayoutState; // ivar: _transitioningToLayoutState
@property (readonly, nonatomic) NSArray *appViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSceneLayoutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, getter=_areElementViewControllerUpdatesSuspended, setter=_setElementViewControllerUpdatesSuspended:) BOOL elementViewControllerUpdatesSuspended; // ivar: _elementViewControllerUpdatesSuspended
@property (readonly, nonatomic) BOOL hasVisibleElements;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *layoutElementControllers;
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (readonly, nonatomic) UIView *sceneContainerView; // ivar: _sceneContainerView
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserResizing) BOOL userResizing; // ivar: _userResizing


+(id)mainDisplaySceneLayoutViewController;
+(id)sceneLayoutViewControllerForDisplayIdentity:(id)arg0 ;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg0 ;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(BOOL)_shouldRepositionViewAfterTransition;
-(BOOL)_shouldRotateToLayoutOrientation:(NSInteger)arg0 ;
-(BOOL)shouldAutorotate;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_animationWrapperViewForElement:(id)arg0 entity:(id)arg1 layoutState:(id)arg2 ;
-(id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg0 ;
-(id)_displayConfiguration;
-(id)_layoutElementControllerForLayoutRole:(NSInteger)arg0 ;
-(id)_previousLayoutElementControllerWithElementIdentifier:(id)arg0 ;
-(id)_transitioningFromLayoutElementControllerForLayoutRole:(NSInteger)arg0 ;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)animationWrapperViewForLayoutState:(id)arg0 roleMask:(NSUInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)animationWrapperViewForLayoutState:(id)arg0 roleMask:(NSUInteger)arg1 interfaceOrientation:(NSInteger)arg2 maskDisplayCorners:(BOOL)arg3 ;
-(id)appViewForWorkspaceEntity:(id)arg0 inLayoutRole:(NSInteger)arg1 withLayoutState:(id)arg2 ;
-(id)appViewForWorkspaceEntity:(id)arg0 inLayoutRole:(NSInteger)arg1 withLayoutState:(id)arg2 hostRequester:(id)arg3 ;
-(id)coordinateSpace;
-(id)coordinateSpaceForInterfaceOrientation:(NSInteger)arg0 ;
-(id)coordinateSpaceForLayoutElement:(id)arg0 layoutState:(id)arg1 ;
-(id)coordinateSpaceForLayoutState:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSceneManager:(id)arg0 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )convertPointFromInterfaceOrientationCoordinateSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToInterfaceOrientationCoordinateSpace:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromInterfaceOrientationCoordinateSpace:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToInterfaceOrientationCoordinateSpace:(struct CGRect )arg0 ;
-(struct CGRect )referenceFrameForEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )referenceFrameForUniqueIdentifier:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )sceneEntityFrameForWorkspaceEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(void)_addLayoutElementViewController:(id)arg0 forLayoutElement:(id)arg1 entity:(id)arg2 ;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg0 ;
-(void)_cleanupDisappearedLayoutElementController:(id)arg0 ;
-(void)_configureVisibilityForCurrentLayoutState;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg0 ;
-(void)_endLayoutStateTransitionForFailure;
-(void)_endLayoutStateTransitionWithInterruption:(BOOL)arg0 ;
-(void)_enqueueLayoutViewControllerForReuse:(id)arg0 ;
-(void)_invalidate;
-(void)_updateAuxiliaryViews;
-(void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
-(void)_willEndLayoutStateTransition;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)loadView;


@end


#endif