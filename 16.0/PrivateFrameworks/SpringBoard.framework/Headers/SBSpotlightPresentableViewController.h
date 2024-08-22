// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPOTLIGHTPRESENTABLEVIEWCONTROLLER_H
#define SBSPOTLIGHTPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSString, UIViewFloatAnimatableProperty, _UIPortalView, UIView, SBFFluidBehaviorSettings, UIView<SBHSearchAffordance>, UIView<SBSpotlightBackgroundWeighting>, NSMutableSet, SBHHomePullToSearchSettings;
@protocol SPUIRemoteSearchViewDelegate, SBSpotlightMultiplexingViewControllerDelegate, PTSettingsKeyObserver, SBSearchPresentable, BSInvalidatable, SBSpotlightPresentableViewControllerDelegate;


#import "SBHomeGrabberView.h"
#import "SBSpotlightMultiplexingViewController.h"

@interface SBSpotlightPresentableViewController : UIViewController <SPUIRemoteSearchViewDelegate, SBSpotlightMultiplexingViewControllerDelegate, PTSettingsKeyObserver, SBSearchPresentable, BSInvalidatable>



@property (nonatomic) BOOL allowsKeyboardWhileInteractive; // ivar: _allowsKeyboardWhileInteractive
@property (nonatomic) NSInteger anticipatedPresentationState; // ivar: _anticipatedPresentationState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSpotlightPresentableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissingKeyboardFromFullyPresented; // ivar: _dismissingKeyboardFromFullyPresented
@property (nonatomic) BOOL dismissingSearchContentFromFullyPresented; // ivar: _dismissingSearchContentFromFullyPresented
@property (nonatomic) CGSize dockedSearchBarSize; // ivar: _dockedSearchBarSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGrabberView *homeAffordance; // ivar: _homeAffordance
@property (nonatomic) BOOL initializingKeyboardView; // ivar: _initializingKeyboardView
@property (nonatomic) CGFloat keyboardFadeInStartValue; // ivar: _keyboardFadeInStartValue
@property (retain, nonatomic) UIViewFloatAnimatableProperty *keyboardFadeProperty; // ivar: _keyboardFadeProperty
@property (nonatomic) BOOL keyboardFollowsSpotlightContent; // ivar: _keyboardFollowsSpotlightContent
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (nonatomic) CGFloat keyboardProtectorHeight; // ivar: _keyboardProtectorHeight
@property (retain, nonatomic) _UIPortalView *keyboardProtectorPortalView; // ivar: _keyboardProtectorPortalView
@property (retain, nonatomic) UIView *keyboardView; // ivar: _keyboardView
@property (nonatomic) CGFloat maxPresentationOffset; // ivar: _maxPresentationOffset
@property (nonatomic) NSUInteger outstandingAnimationCount; // ivar: _outstandingAnimationCount
@property (nonatomic) CGFloat presentationOffset; // ivar: _presentationOffset
@property (nonatomic) CGFloat presentationProgress; // ivar: _presentationProgress
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic) NSInteger previousPresentationState; // ivar: _previousPresentationState
@property (nonatomic) CGFloat pullTransitionDistance; // ivar: _pullTransitionDistance
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // ivar: _scaleProperty
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // ivar: _scaleSettings
@property (retain, nonatomic) UIView *scaleView; // ivar: _scaleView
@property (readonly, nonatomic) UIView *scalingContentView;
@property (retain, nonatomic) UIView<SBHSearchAffordance> *searchAffordance; // ivar: _searchAffordance
@property (retain, nonatomic) _UIPortalView *searchAffordanceContentPortalView; // ivar: _searchAffordanceContentPortalView
@property (nonatomic) CGFloat searchAffordanceMaxOffset; // ivar: _searchAffordanceMaxOffset
@property (nonatomic) CGFloat searchAffordanceMaxScaleX; // ivar: _searchAffordanceMaxScaleX
@property (nonatomic) CGFloat searchAffordanceMaxScaleY; // ivar: _searchAffordanceMaxScaleY
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAffordanceMorphAnimationSettings; // ivar: _searchAffordanceMorphAnimationSettings
@property (nonatomic) BOOL searchAffordanceMorphUsesMainCurve; // ivar: _searchAffordanceMorphUsesMainCurve
@property (nonatomic) CGFloat searchAffordanceOffsetRubberbandingRange; // ivar: _searchAffordanceOffsetRubberbandingRange
@property (nonatomic) NSInteger searchAffordancePresentationState; // ivar: _searchAffordancePresentationState
@property (nonatomic) CGRect searchAffordanceReferenceFrame; // ivar: _searchAffordanceReferenceFrame
@property (retain, nonatomic) UIView *searchAffordanceReferenceView; // ivar: _searchAffordanceReferenceView
@property (nonatomic) CGFloat searchAffordanceScaleRubberbandingRange; // ivar: _searchAffordanceScaleRubberbandingRange
@property (nonatomic) CGFloat searchAffordanceTransientFadeInThreshold; // ivar: _searchAffordanceTransientFadeInThreshold
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings; // ivar: _searchAnimationSettings
@property (retain, nonatomic) UIView<SBSpotlightBackgroundWeighting> *searchBackgroundView; // ivar: _searchBackgroundView
@property (nonatomic) CGFloat searchBarCornerRadius; // ivar: _searchBarCornerRadius
@property (retain, nonatomic) UIView *searchBarPortalContainerView; // ivar: _searchBarPortalContainerView
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons; // ivar: _searchBarPortalRequirementReasons
@property (retain, nonatomic) _UIPortalView *searchBarPortalView; // ivar: _searchBarPortalView
@property (nonatomic) CGSize searchBarSize; // ivar: _searchBarSize
@property (nonatomic) CGFloat searchContentFadeOutThreshold; // ivar: _searchContentFadeOutThreshold
@property (retain, nonatomic) UIViewFloatAnimatableProperty *searchContentFadeProperty; // ivar: _searchContentFadeProperty
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings; // ivar: _searchTransitionSettings
@property (nonatomic) CGFloat spotlightActivationThreshold; // ivar: _spotlightActivationThreshold
@property (nonatomic) CGFloat spotlightFadeInThreshold; // ivar: _spotlightFadeInThreshold
@property (readonly, nonatomic) SBSpotlightMultiplexingViewController *spotlightMultiplexingViewController; // ivar: _spotlightMultiplexingViewController
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topOffset; // ivar: _topOffset
@property (nonatomic) BOOL waitingForKeyboardPresentationForFadeIn; // ivar: _waitingForKeyboardPresentationForFadeIn


-(BOOL)_canShowWhileLocked;
-(BOOL)_setUpHostedContentMetrics;
-(id)_sharedRemoteSearchViewController;
-(id)initWithSpotlightMultiplexingViewController:(id)arg0 ;
-(id)willBeginAnimatingPresentationProgressForState:(SEL)arg0 needsInitialLayout:(NSInteger)arg1 ;
-(void)_beginRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_createKeyboardFadeProperty;
-(void)_createScaleProperty;
-(void)_createSearchContentFadeProperty;
-(void)_endRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_setCornerRounded:(BOOL)arg0 ;
-(void)_setUpHomeAffordance;
-(void)_setUpSearchAffordance;
-(void)_setUpSearchAnimationSettings;
-(void)_setUpSearchBackground;
-(void)_setUpSearchBackgroundMatchMoveAnimation;
-(void)_updateForScalePropertyChanged;
-(void)_updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 applyBlock:(id)arg3 ;
-(void)_updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 previousPresentationState:(NSInteger)arg3 applyBlock:(id)arg4 ;
-(void)_updateSearchAffordanceWithProgress:(CGFloat)arg0 offset:(CGFloat)arg1 presentationState:(NSInteger)arg2 previousPresentationState:(NSInteger)arg3 applyBlock:(id)arg4 ;
-(void)dealloc;
-(void)dismissSearchView;
-(void)invalidate;
-(void)invalidateBackgroundView;
-(void)invalidateSearchAffordanceView;
-(void)setSpotlightScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)spotlightMultiplexingViewController:(id)arg0 externalKeyboardViewContainsKeyboardDidChange:(BOOL)arg1 ;
-(void)updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 ;
-(void)updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 applyBlock:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif