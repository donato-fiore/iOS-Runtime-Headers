// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOVERSHEETVIEW_H
#define CSCOVERSHEETVIEW_H

@class UIView, UIVisualEffectView, SBFStatusBarLegibilityView, SBLockScreenDefaults, UITapGestureRecognizer, SBUIBackgroundView, UILongPressGestureRecognizer, NSString, SBFLockScreenDateView, UIGestureRecognizer, _UILegibilitySettings, NSArray, UIColor, SBFPagedScrollView, SBSearchGesture, UIView<CSWallpaperView>;
@protocol CSScrollViewDelegate, PTSettingsKeyObserver, CSCoverSheetViewTransitionSource, CSScrollableView, CSCoverSheetViewDelegate;


#import "CSPropertyAnimatingTouchPassThroughView.h"
#import "CSScrollModifier.h"
#import "CSLookSettings.h"
#import "CSBackgroundContentView.h"
#import "CSFixedFooterView.h"
#import "CSLayoutStrategy.h"
#import "CSQuickActionsView.h"
#import "CSRegionsDebugView.h"
#import "CSTeachableMomentsContainerView.h"

@interface CSCoverSheetView : UIView <CSScrollViewDelegate, PTSettingsKeyObserver, CSCoverSheetViewTransitionSource, CSScrollableView>

 {
    UIView *_dateTimeClippingView;
    UIView *_authIndicator;
    UIView *_higherSlideableContentView;
    UIVisualEffectView *_dateEffectView;
    SBFStatusBarLegibilityView *_statusBarLegibilityView;
    CSPropertyAnimatingTouchPassThroughView *_fakeStatusBarWrapperView;
    CSPropertyAnimatingTouchPassThroughView *_proudLockContainerWrapperView;
    BOOL _viewControllerAppearingOrAppeared;
    BOOL _hasSubviewModifyingView;
    ? _transitionContext;
    CGFloat _scrollViewStartingXOffset;
    CSScrollModifier *_scrollModifier;
    NSUInteger _initialPageIndex;
    BOOL _shouldModifyPageScrolling;
    SBLockScreenDefaults *_cachedLockScreenDefaults;
    CSLookSettings *_lookSettings;
}


@property (retain, nonatomic) UITapGestureRecognizer *backgroundContentGestureRecognizer; // ivar: _backgroundContentGestureRecognizer
@property (nonatomic) NSUInteger backgroundContentPresentationLevel; // ivar: _backgroundContentPresentationLevel
@property (retain, nonatomic) CSBackgroundContentView *backgroundContentView; // ivar: _backgroundContentView
@property (nonatomic) CGFloat backgroundContentViewAlpha; // ivar: _backgroundContentViewAlpha
@property (nonatomic) CGPoint backgroundContentViewOffset; // ivar: _backgroundContentViewOffset
@property (nonatomic) CGFloat backgroundContentViewScale; // ivar: _backgroundContentViewScale
@property (retain, nonatomic) SBUIBackgroundView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) SBUIBackgroundView *bedtimeGreetingViewBackgroundView; // ivar: _bedtimeGreetingViewBackgroundView
@property (retain, nonatomic) UIView *bottomPage; // ivar: _bottomPage
@property (retain, nonatomic) UIView *cameraCoveredView; // ivar: _cameraCoveredView
@property (nonatomic) CGPoint complicationContainerViewOffset; // ivar: _complicationContainerViewOffset
@property (nonatomic) CGFloat complicationContainerViewScale; // ivar: _complicationContainerViewScale
@property (retain, nonatomic) UILongPressGestureRecognizer *complicationGestureRecognizer; // ivar: _complicationGestureRecognizer
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGPoint contentViewOffset; // ivar: _contentViewOffset
@property (nonatomic) CGFloat contentViewScale; // ivar: _contentViewScale
@property (nonatomic) CGFloat controlCenterGrabberBlurRadius; // ivar: _controlCenterGrabberBlurRadius
@property (nonatomic) CGFloat controlCenterGrabberScale; // ivar: _controlCenterGrabberScale
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (retain, nonatomic) SBFLockScreenDateView *dateView; // ivar: _dateView
@property (retain, nonatomic) UIGestureRecognizer *dateViewGestureRecognizer; // ivar: _dateViewGestureRecognizer
@property (nonatomic) BOOL dateViewIsVibrant; // ivar: _dateViewIsVibrant
@property (nonatomic) CGPoint dateViewOffset; // ivar: _dateViewOffset
@property (nonatomic) NSInteger dateViewPageAlignment; // ivar: _dateViewPageAlignment
@property (nonatomic) CGFloat dateViewScale; // ivar: _dateViewScale
@property (nonatomic) BOOL dateViewStretch; // ivar: _dateViewStretch
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSCoverSheetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *fakeStatusBar; // ivar: _fakeStatusBar
@property (nonatomic) CGFloat fakeStatusBarBlurRadius; // ivar: _fakeStatusBarBlurRadius
@property (nonatomic) NSUInteger fakeStatusBarLevel; // ivar: _fakeStatusBarLevel
@property (nonatomic) CGFloat fakeStatusBarScale; // ivar: _fakeStatusBarScale
@property (retain, nonatomic) CSFixedFooterView *fixedFooterView; // ivar: _fixedFooterView
@property (nonatomic) BOOL forceDateViewCentered; // ivar: _forceDateViewCentered
@property (nonatomic) CGPoint foregroundViewPositionOffset; // ivar: _foregroundViewPositionOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresOverscrollOnMainPage; // ivar: _ignoresOverscrollOnMainPage
@property (weak, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL legibilitySettingsOverrideVibrancy; // ivar: _legibilitySettingsOverrideVibrancy
@property (retain, nonatomic) UIView *mainPageView; // ivar: _mainPageView
@property (nonatomic) NSUInteger modalPresentationLevel; // ivar: _modalPresentationLevel
@property (retain, nonatomic) UIView *modalPresentationView; // ivar: _modalPresentationView
@property (retain, nonatomic) NSArray *pageViews;
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic) UIView *poseidonContainerView; // ivar: _poseidonContainerView
@property (retain, nonatomic) UIView *proudLockContainerView; // ivar: _proudLockContainerView
@property (nonatomic) CGFloat proudLockIconBlurRadius; // ivar: _proudLockIconBlurRadius
@property (nonatomic) CGPoint proudLockIconViewOffset; // ivar: _proudLockIconViewOffset
@property (nonatomic) CGFloat proudLockIconViewScale; // ivar: _proudLockIconViewScale
@property (nonatomic) BOOL proudLockPrefersLowerPresentationLevel; // ivar: _proudLockPrefersLowerPresentationLevel
@property (retain, nonatomic) CSQuickActionsView *quickActionsView; // ivar: _quickActionsView
@property (nonatomic) CGFloat quickActionsViewBlurRadius; // ivar: _quickActionsViewBlurRadius
@property (nonatomic) CGPoint quickActionsViewOffset; // ivar: _quickActionsViewOffset
@property (nonatomic) CGFloat quickActionsViewScale; // ivar: _quickActionsViewScale
@property (retain, nonatomic) UITapGestureRecognizer *quickNoteGestureRecognizer; // ivar: _quickNoteGestureRecognizer
@property (retain, nonatomic) UIColor *reduceTransparencyBackingColor; // ivar: _reduceTransparencyBackingColor
@property (weak, nonatomic) UIView *referenceViewForBelowPresentationContext; // ivar: _referenceViewForBelowPresentationContext
@property (retain, nonatomic) CSRegionsDebugView *regionsDebugView; // ivar: _regionsDebugView
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
@property (readonly, nonatomic) UIView *wallpaperFloatingLayerContainerView; // ivar: _wallpaperFloatingLayerContainerView
@property (nonatomic) CGPoint wallpaperFloatingLayerContainerViewOffset; // ivar: _wallpaperFloatingLayerContainerViewOffset
@property (nonatomic) CGFloat wallpaperFloatingLayerContainerViewScale; // ivar: _wallpaperFloatingLayerContainerViewScale
@property (nonatomic) NSUInteger wallpaperFloatingLayerPresentationLevel; // ivar: _wallpaperFloatingLayerPresentationLevel
@property (retain, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer; // ivar: _wallpaperGestureRecognizer
@property (nonatomic) NSUInteger wallpaperPresentationLevel; // ivar: _wallpaperPresentationLevel


-(BOOL)coverSheetScrollView:(id)arg0 gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)coverSheetScrollView:(id)arg0 shouldSetContentOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToPageAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(NSInteger)backgroundStyle;
-(NSUInteger)_indexOfMainPage;
-(id)_lockScreenDefaults;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_completedTransitionContextForPreviousTransitionContext:(struct ? )arg0 newTransitionContext:(struct ? )arg1 ;
-(struct ? )_currentTransitionContext;
-(struct CGAffineTransform )_transformScaling:(id)arg0 byScale:(CGFloat)arg1 aboutPointInSelf:(struct CGPoint )arg2 ;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(struct CGRect )_dateViewFrameForPageAlignment:(NSInteger)arg0 pageRelativeScrollOffset:(CGFloat)arg1 outAlignmentPercent:(*CGFloat)arg2 ;
-(struct CGRect )_overlayClippingFrame;
-(struct CGRect )dateViewPresentationExtentForPageRelativeScrollOffset:(CGFloat)arg0 ;
-(void)_addAuthIndicator;
-(void)_addBackgroundView;
-(void)_addContentView;
-(void)_addContentViewWithContentView:(id)arg0 ;
-(void)_addDateTimeContainer;
-(void)_addHigherSlideableContentView;
-(void)_addScrollView;
-(void)_addSlideableContentView;
-(void)_addStatusBarLegibilityView;
-(void)_addTintingView;
-(void)_addWallpaperFloatingLayerContainerView;
-(void)_createProudLockContainerWrapperIfNecessary;
-(void)_layoutAuthIndicator;
-(void)_layoutBackgroundContentView;
-(void)_layoutBottomPage;
-(void)_layoutContentView;
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
-(void)_layoutWallpaperFloatingLayerContainerView;
-(void)_orderSubviews;
-(void)_prepareBlursForView:(id)arg0 withHardEdges:(BOOL)arg1 ;
-(void)_removeContentView;
-(void)_setLockScreenDefaults:(id)arg0 ;
-(void)_setupAllGesturesOnScrollView:(BOOL)arg0 ;
-(void)_setupBackgroundContentGestureOnScrollView:(BOOL)arg0 ;
-(void)_setupComplicationGestureOnScrollView:(BOOL)arg0 ;
-(void)_setupDateViewGestureOnScrollView:(BOOL)arg0 ;
-(void)_setupQuickNoteGestureOnScrollView:(BOOL)arg0 ;
-(void)_setupWallpaperGestureOnScrollView:(BOOL)arg0 ;
-(void)_updateBlurForView:(id)arg0 toRadius:(CGFloat)arg1 ;
-(void)_updateDateFont;
-(void)_updateLegibility;
-(void)addContentView;
-(void)addContentViewWithCustomContentView:(id)arg0 ;
-(void)beginTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)cancelTransition;
-(void)completeTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeContentView;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 withContext:(struct ? )arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginScrolling:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateBackgroundStyleTransitionProgress:(CGFloat)arg0 ;
-(void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(BOOL)arg0 ;
-(void)updateUIForAuthenticated:(BOOL)arg0 ;
-(void)viewControllerDidDisappear;
-(void)viewControllerWillAppear;


@end


#endif