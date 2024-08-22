// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCOVERSHEETVIEW_H
#define CSCOVERSHEETVIEW_H

@class UIView, UIVisualEffectView, SBFStatusBarLegibilityView, SBLockScreenDefaults, SBUIBackgroundView, NSString, SBFLockScreenDateView, _UILegibilitySettings, NSArray, NSNumber, UITapGestureRecognizer, UIColor, SBFPagedScrollView, SBSearchGesture, UIView<CSWallpaperView>, UIGestureRecognizer;
@protocol CSScrollViewDelegate, CSCoverSheetViewTransitionSource, CSScrollableView, CSCoverSheetViewDelegate;


#import "CSScrollModifier.h"
#import "CSFixedFooterView.h"
#import "CSLayoutStrategy.h"
#import "CSQuickActionsView.h"
#import "CSRegionsDebugView.h"
#import "CSTeachableMomentsContainerView.h"

@interface CSCoverSheetView : UIView <CSScrollViewDelegate, CSCoverSheetViewTransitionSource, CSScrollableView>

 {
    UIView *_dateTimeClippingView;
    UIView *_authIndicator;
    UIView *_higherSlideableContentView;
    UIView *_pullDownView;
    UIVisualEffectView *_dateEffectView;
    SBFStatusBarLegibilityView *_statusBarLegibilityView;
    BOOL _viewControllerAppearingOrAppeared;
    BOOL _hasSubviewModifyingView;
    ? _transitionContext;
    CGFloat _scrollViewStartingXOffset;
    CSScrollModifier *_scrollModifier;
    NSUInteger _initialPageIndex;
    BOOL _shouldModifyPageScrolling;
    SBLockScreenDefaults *_cachedLockScreenDefaults;
}


@property (retain, nonatomic) SBUIBackgroundView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) SBUIBackgroundView *bedtimeGreetingViewBackgroundView; // ivar: _bedtimeGreetingViewBackgroundView
@property (retain, nonatomic) UIView *bottomPage; // ivar: _bottomPage
@property (retain, nonatomic) UIView *cameraCoveredView; // ivar: _cameraCoveredView
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (retain, nonatomic) SBFLockScreenDateView *dateView; // ivar: _dateView
@property (nonatomic) BOOL dateViewIsVibrant; // ivar: _dateViewIsVibrant
@property (nonatomic) CGPoint dateViewOffset; // ivar: _dateViewOffset
@property (nonatomic) NSInteger dateViewPageAlignment; // ivar: _dateViewPageAlignment
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSCoverSheetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *fakeStatusBar; // ivar: _fakeStatusBar
@property (nonatomic) NSUInteger fakeStatusBarLevel; // ivar: _fakeStatusBarLevel
@property (retain, nonatomic) CSFixedFooterView *fixedFooterView; // ivar: _fixedFooterView
@property (nonatomic) BOOL forceDateViewCentered; // ivar: _forceDateViewCentered
@property (nonatomic) CGPoint foregroundViewPositionOffset; // ivar: _foregroundViewPositionOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresOverscrollOnMainPage; // ivar: _ignoresOverscrollOnMainPage
@property (weak, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL legibilitySettingsOverrideVibrancy; // ivar: _legibilitySettingsOverrideVibrancy
@property (retain, nonatomic) UIView *mainPageView; // ivar: _mainPageView
@property (retain, nonatomic) UIView *modalPresentationView; // ivar: _modalPresentationView
@property (retain, nonatomic) NSArray *pageViews;
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic) UIView *poseidonContainerView; // ivar: _poseidonContainerView
@property (retain, nonatomic) UIView *proudLockContainerView; // ivar: _proudLockContainerView
@property (nonatomic) CGPoint proudLockIconViewOffset; // ivar: _proudLockIconViewOffset
@property (nonatomic) NSNumber *proudLockIconViewValue; // ivar: _proudLockIconViewValue
@property (retain, nonatomic) CSQuickActionsView *quickActionsView; // ivar: _quickActionsView
@property (retain, nonatomic) UITapGestureRecognizer *quickNoteGestureRecognizer; // ivar: _quickNoteGestureRecognizer
@property (retain, nonatomic) UIColor *reduceTransparencyBackingColor; // ivar: _reduceTransparencyBackingColor
@property (weak, nonatomic) UIView *referenceViewForBelowPresentationContext; // ivar: _referenceViewForBelowPresentationContext
@property (retain, nonatomic) CSRegionsDebugView *regionsDebugView; // ivar: _regionsDebugView
@property (retain, nonatomic) UIView *scalableContentView; // ivar: _scalableContentView
@property (retain, nonatomic) SBFPagedScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) SBSearchGesture *searchGesture; // ivar: _searchGesture
@property (readonly, nonatomic) UIView *slideableContentView; // ivar: _slideableContentView
@property (nonatomic) NSInteger statusBarBackgroundPageAlignment; // ivar: _statusBarBackgroundPageAlignment
@property (retain, nonatomic) UIView *statusBarBackgroundView; // ivar: _statusBarBackgroundView
@property (nonatomic) BOOL statusBarLegibilityEnabled; // ivar: _statusBarLegibilityEnabled
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetPageIndexForDraggingEnded; // ivar: _targetPageIndexForDraggingEnded
@property (retain, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView; // ivar: _teachableMomentsContainerView
@property (retain, nonatomic) UIView *tintingView; // ivar: _tintingView
@property (readonly, nonatomic) ? transitionContext;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (retain, nonatomic) UIView *wakeEffectView; // ivar: _wakeEffectView
@property (retain, nonatomic) UIView<CSWallpaperView> *wallpaperEffectView; // ivar: _wallpaperEffectView
@property (retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer; // ivar: _wallpaperGestureRecognizer


-(BOOL)coverSheetScrollView:(id)arg0 shouldSetContentOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToPageAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(NSInteger)backgroundStyle;
-(NSUInteger)_indexOfMainPage;
-(id)_lockScreenDefaults;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_completedTransitionContextForPreviousTransitionContext:(struct ? )arg0 newTransitionContext:(struct ? )arg1 ;
-(struct ? )_currentTransitionContext;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(struct CGRect )_dateViewFrameForPageAlignment:(NSInteger)arg0 pageRelativeScrollOffset:(CGFloat)arg1 outAlignmentPercent:(*CGFloat)arg2 ;
-(struct CGRect )_overlayClippingFrame;
-(struct CGRect )dateViewPresentationExtentForPageRelativeScrollOffset:(CGFloat)arg0 ;
-(void)_addAuthIndicator;
-(void)_addBackgroundView;
-(void)_addDateTimeContainer;
-(void)_addHigherSlideableContentView;
-(void)_addScalableContentView;
-(void)_addScalableContentViewWithContentView:(id)arg0 ;
-(void)_addScrollView;
-(void)_addSlideableContentView;
-(void)_addStatusBarLegibilityView;
-(void)_addTintingView;
-(void)_layoutAuthIndicator;
-(void)_layoutBottomPage;
-(void)_layoutDateTimeViewClippingView;
-(void)_layoutDateView;
-(void)_layoutFakeStatusBar;
-(void)_layoutFullScreenViews;
-(void)_layoutHigherSlideableContentView;
-(void)_layoutProudLockView;
-(void)_layoutQuickActionsView;
-(void)_layoutStatusBarBackgroundView;
-(void)_layoutStatusBarLegibilityView;
-(void)_layoutTeachableMomentsContainerView;
-(void)_layoutTintingView;
-(void)_layoutWallpaperEffectView;
-(void)_orderSubviews;
-(void)_removeScalableContentView;
-(void)_setLockScreenDefaults:(id)arg0 ;
-(void)_setupQuickNoteGestureOnScrollView:(BOOL)arg0 ;
-(void)_setupWallpaperGestureOnScrollView:(BOOL)arg0 ;
-(void)_updateLegibility;
-(void)addPullDownContentView;
-(void)addScalableContentView;
-(void)addScalableContentViewWithCustomContentView:(id)arg0 ;
-(void)beginTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)cancelTransition;
-(void)completeTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)removePullDownContentViewAnimated:(BOOL)arg0 ;
-(void)removeScalableContentView;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 withContext:(struct ? )arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginScrolling:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)updateBackgroundStyleTransitionProgress:(CGFloat)arg0 ;
-(void)updateScalableContentTransformWithScale:(CGFloat)arg0 ;
-(void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(BOOL)arg0 ;
-(void)updateUIForAuthenticated:(BOOL)arg0 ;
-(void)viewControllerDidDisappear;
-(void)viewControllerWillAppear;


@end


#endif