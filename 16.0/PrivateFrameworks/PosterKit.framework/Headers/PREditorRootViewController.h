// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORROOTVIEWCONTROLLER_H
#define PREDITORROOTVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSLayoutConstraint, UIMenu, UIButton, UIView, NSString, BSUIVibrancyEffectView, NSArray, UIPageControl, UIAction, UIScrollView, CSProminentDisplayViewController;
@protocol PRDateObserving, BSInvalidatable, UIScrollViewDelegate, PRDateProviding;


#import "PREditingTitledButton.h"
#import "PREditingBottomLegibilityView.h"
#import "PREditingCancelButton.h"
#import "PRComplicationSceneHostViewController.h"
#import "PREditor.h"
#import "PREditingReticleView.h"
#import "PREditingStandaloneLabelView.h"
#import "PREditorLookTransition.h"

@interface PREditorRootViewController : UIViewController <PRDateObserving, BSInvalidatable, UIScrollViewDelegate>

 {
    NSMutableDictionary *_timeViewControllersForLook;
}


@property (retain, nonatomic) PREditingTitledButton *acceptButton; // ivar: _acceptButton
@property (retain, nonatomic) NSLayoutConstraint *acceptButtonXConstraint; // ivar: _acceptButtonXConstraint
@property (retain, nonatomic) NSLayoutConstraint *acceptButtonYConstraint; // ivar: _acceptButtonYConstraint
@property (copy, nonatomic) UIMenu *actionsMenu; // ivar: _actionsMenu
@property (retain, nonatomic) UIButton *actionsMenuButton; // ivar: _actionsMenuButton
@property (retain, nonatomic) NSLayoutConstraint *actionsMenuButtonXConstraint; // ivar: _actionsMenuButtonXConstraint
@property (nonatomic, getter=isAllUserInteractionDisabledExceptForCancelButton) BOOL allUserInteractionDisabledExceptForCancelButton; // ivar: _allUserInteractionDisabledExceptForCancelButton
@property (retain, nonatomic) UIView *backgroundContainerView; // ivar: _backgroundContainerView
@property (retain, nonatomic) NSLayoutConstraint *bottomControlsYConstraint; // ivar: _bottomControlsYConstraint
@property (retain, nonatomic) PREditingBottomLegibilityView *bottomLegibilityView; // ivar: _bottomLegibilityView
@property (retain, nonatomic) PREditingCancelButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonXConstraint; // ivar: _cancelButtonXConstraint
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonYConstraint; // ivar: _cancelButtonYConstraint
@property (retain, nonatomic) PRComplicationSceneHostViewController *complicationHostViewController; // ivar: _complicationHostViewController
@property (retain, nonatomic) UIView *complicationsContainerView; // ivar: _complicationsContainerView
@property (nonatomic, getter=isComplicationsRowConfigured) BOOL complicationsRowConfigured; // ivar: _complicationsRowConfigured
@property (retain, nonatomic) UIView *contentOverlayView; // ivar: _contentOverlayView
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden; // ivar: _controlsHidden
@property (retain, nonatomic) NSObject<PRDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDepthEffectDisabled) BOOL depthEffectDisabled; // ivar: _depthEffectDisabled
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisconnected) BOOL disconnected; // ivar: _disconnected
@property (weak, nonatomic) PREditor *editor; // ivar: _editor
@property (retain, nonatomic) BSUIVibrancyEffectView *emptyVibrancyView; // ivar: _emptyVibrancyView
@property (retain, nonatomic) UIView *floatingContainerView; // ivar: _floatingContainerView
@property (nonatomic) NSInteger focusedComplicationElement; // ivar: _focusedComplicationElement
@property (retain, nonatomic) UIView *foregroundContainerView; // ivar: _foregroundContainerView
@property (retain, nonatomic) BSUIVibrancyEffectView *graphicComplicationsEmptyView; // ivar: _graphicComplicationsEmptyView
@property (retain, nonatomic) PREditingReticleView *graphicComplicationsReticleView; // ivar: _graphicComplicationsReticleView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresScrolling; // ivar: _ignoresScrolling
@property (retain, nonatomic) PREditingReticleView *inlineComplicationReticleView; // ivar: _inlineComplicationReticleView
@property (nonatomic) CGRect leadingTopButtonFrame; // ivar: _leadingTopButtonFrame
@property (retain, nonatomic) PREditingStandaloneLabelView *lookNameLabel; // ivar: _lookNameLabel
@property (retain, nonatomic) PREditorLookTransition *lookTransition; // ivar: _lookTransition
@property (copy, nonatomic) NSArray *looks; // ivar: _looks
@property (nonatomic) BOOL needsReticleUpdate; // ivar: _needsReticleUpdate
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) UIView *presentationDismissalGestureView; // ivar: _presentationDismissalGestureView
@property (nonatomic, getter=isPresentingModalViewController) BOOL presentingModalViewController; // ivar: _presentingModalViewController
@property (copy, nonatomic) UIAction *primaryAction; // ivar: _primaryAction
@property (retain, nonatomic) UIButton *primaryActionButton; // ivar: _primaryActionButton
@property (retain, nonatomic) NSLayoutConstraint *primaryActionButtonXConstraint; // ivar: _primaryActionButtonXConstraint
@property (retain, nonatomic) BSUIVibrancyEffectView *reticleVibrancyView; // ivar: _reticleVibrancyView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden; // ivar: _subtitleHidden
@property (retain, nonatomic) CSProminentDisplayViewController *subtitleViewController; // ivar: _subtitleViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *timeContainerView; // ivar: _timeContainerView
@property (retain, nonatomic) UIView *timeGestureView; // ivar: _timeGestureView
@property (nonatomic, getter=isTimeReticleActive) BOOL timeReticleActive; // ivar: _timeReticleActive
@property (retain, nonatomic) PREditingReticleView *timeReticleView; // ivar: _timeReticleView
@property (nonatomic, getter=areTopButtonsHidden) BOOL topButtonsHidden; // ivar: _topButtonsHidden
@property (retain, nonatomic) UIView *touchBlockingView; // ivar: _touchBlockingView
@property (nonatomic) CGRect trailingTopButtonFrame; // ivar: _trailingTopButtonFrame
@property (nonatomic) BOOL usesEditingLayout; // ivar: _usesEditingLayout


-(BOOL)shouldFixTimeBetweenTransitionFromTitleStyleConfiguration:(id)arg0 toTitleStyleConfiguration:(id)arg1 extensionBundleURL:(id)arg2 ;
-(NSUInteger)backgroundTypeForLook:(id)arg0 ;
-(NSUInteger)lookIndexForViewIndex:(NSUInteger)arg0 ;
-(NSUInteger)viewIndexForLookIndex:(NSUInteger)arg0 ;
-(id)beginTransitionToLook:(id)arg0 method:(NSInteger)arg1 ;
-(id)configuredProperties;
-(id)currentLook;
-(id)defaultTitleStyleConfigurationForLook:(id)arg0 ;
-(id)effectiveTitleStyleConfigurationForLook:(id)arg0 ;
-(id)extensionBundleURL;
-(id)lookAtScrollContentOffset:(struct CGPoint )arg0 ;
-(id)lookAtScrollContentOffset:(struct CGPoint )arg0 fractionOfDistanceThroughLook:(*CGFloat)arg1 ;
-(id)makeComplicationHostingSceneWithSpecification:(id)arg0 ;
-(id)makeComplicationsHostingScene;
-(id)timeViewControllerForLook:(id)arg0 ;
-(struct CGPoint )scrollContentOffsetForLook:(id)arg0 ;
-(struct CGPoint )scrollContentOffsetForLookAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForPageAtLookIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForPageAtViewIndex:(NSUInteger)arg0 ;
-(void)_setVibrancyConfiguration:(id)arg0 ;
-(void)_updateComplicationsRowEmptyViewVisibility;
-(void)_updateComplicationsVibrancyFromCurrentLook;
-(void)addLookContentScrollViewSubview:(id)arg0 atLayer:(NSInteger)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)currentLookDidChange;
-(void)dateProvider:(id)arg0 didUpdateDate:(id)arg1 ;
-(void)depthEffectEnablementDidChange;
-(void)didFinishTransitionToLook:(id)arg0 ;
-(void)didTransitionToLook:(id)arg0 method:(NSInteger)arg1 progress:(CGFloat)arg2 ;
-(void)disconnect;
-(void)enumerateTimeViewControllersUsingBlock:(id)arg0 ;
-(void)forciblyFinishLookTransition;
-(void)invalidate;
-(void)loadView;
-(void)lookBackgroundTypesDidChange;
-(void)lookPropertiesDidChange;
-(void)modalPresentationDismissGestureDidFire:(id)arg0 ;
-(void)pageControlCurrentPageDidChange:(id)arg0 ;
-(void)reconnect;
-(void)requireGestureRecognizerToFailForLooksScroll:(id)arg0 ;
-(void)scrollToLook:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollToLookAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 withContext:(struct ? )arg1 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)timeViewTapped:(id)arg0 ;
-(void)updatePageControlCurrentPage;
-(void)updateReticlesIfNeeded;
-(void)updateTimeControllersForLookMap;
-(void)updateTopButtonAlpha;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif