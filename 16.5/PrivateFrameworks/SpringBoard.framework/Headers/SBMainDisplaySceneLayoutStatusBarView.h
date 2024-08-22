// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINDISPLAYSCENELAYOUTSTATUSBARVIEW_H
#define SBMAINDISPLAYSCENELAYOUTSTATUSBARVIEW_H

@class UIView, SBOrientationTransformWrapperView, UIStatusBar, _UIStatusBar, NSMutableSet, NSMutableDictionary, NSString, UITapGestureRecognizer, UIColor;
@protocol PTSettingsKeyObserver, UIStatusBarStyleDelegate_SpringBoardOnly, SBDeviceApplicationSceneStatusBarStateObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource;


#import "SBMedusaSettings.h"

@interface SBMainDisplaySceneLayoutStatusBarView : UIView <PTSettingsKeyObserver, UIStatusBarStyleDelegate_SpringBoardOnly, SBDeviceApplicationSceneStatusBarStateObserver>

 {
    SBOrientationTransformWrapperView *_statusBarContainerView;
    UIView *_statusBarWrapperView;
    UIStatusBar *_statusBar;
    _UIStatusBar *_statusBarUnderlyingViewAccessor;
    NSMutableSet *_statusBarRequiringReasons;
    NSMutableDictionary *_partIdentifiersDefaultStyles;
    NSMutableDictionary *_partIdentifiersCustomStyles;
    NSMutableDictionary *_hitTestLayers;
    NSString *_statusBarBreadcrumbSceneIdentifier;
    BOOL _statusBarLaidOutForClassic;
    BOOL _lastHiddenValueForAnimation;
    UITapGestureRecognizer *_scrollToTopGestureRecognizer;
    UITapGestureRecognizer *_showDebugGestureRecognizer;
    SBMedusaSettings *_medusaSettings;
    BOOL _debugBackgroundColorEnabled;
    BOOL _debugOffsetEnabled;
    NSUInteger _debugOffsetIndex;
    UIColor *_debugBackgroundColor;
    ? _conformanceFlags;
}


@property (nonatomic) NSInteger containerOrientation;
@property (weak, nonatomic) NSObject<SBMainDisplaySceneLayoutStatusBarViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UIStatusBarStyleDelegate_SpringBoardOnly> *realStyleDelegate; // ivar: _realStyleDelegate
@property (readonly, nonatomic, getter=isRequiringStatusBar) BOOL requiringStatusBar;
@property (readonly, nonatomic, getter=isStatusBarEffectivelyHidden) BOOL statusBarEffectivelyHidden;
@property (readonly) Class superclass;


-(BOOL)_allowChangingIndividualStatusBarParts;
-(BOOL)_statusBarNeedsSpecialLayoutForClassic;
-(CGFloat)_hiddenAlphaForAnimation:(NSInteger)arg0 ;
-(NSInteger)_effectiveStyleForPartIdentifier:(id)arg0 ;
-(NSInteger)overriddenRequestedStyleFromStyle:(NSInteger)arg0 ;
-(NSInteger)statusBar:(id)arg0 styleForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(NSUInteger)_effectiveStatusBarStyleOverridesToSuppress;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)_anyAppViewControllerOwningInterfaceOrientation;
-(id)_currentlyValidStatusBarPartIdentifiers;
-(id)_defaultStatusBarStyleRequest;
-(id)_sceneHandleForClassicApplicationIfAny;
-(id)_statusBarDescriberForPrimaryApplicationIfAny;
-(id)_validStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg0 ;
-(id)allValidStatusBarPartIdentifiers;
-(id)createStatusBarWithFrame:(struct CGRect )arg0 interfaceOrientation:(NSInteger)arg1 reason:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)statusBarStyleRequestForStatusBarPart:(id)arg0 ;
-(id)statusBarSystemNavigationAction:(id)arg0 ;
-(struct CGAffineTransform )_hiddenTransformForAnimation:(NSInteger)arg0 ;
-(struct CGRect )_statusBarAvoidanceFrame;
-(struct CGRect )_statusBarFrameForOrientation:(NSInteger)arg0 ;
-(void)_addStatusBarIfNeeded;
// -(void)_animateHidden:(BOOL)arg0 withAnimation:(NSInteger)arg1 transitionHandler:(id)arg2 applyHandler:(unk)arg3  ;
-(void)_applyStatusBarAlpha:(CGFloat)arg0 toSceneWithIdentifier:(id)arg1 ;
-(void)_applyStatusBarAvoidanceFrame:(struct CGRect )arg0 toSceneWithIdentifier:(id)arg1 ;
-(void)_applyStatusBarHidden:(BOOL)arg0 withAnimation:(NSInteger)arg1 toSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarStyle:(NSInteger)arg0 toPartIdentifier:(id)arg1 ofSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarStyle:(NSInteger)arg0 toSceneWithIdentifier:(id)arg1 ;
-(void)_applyStatusBarStyleOverridesToSuppress:(NSUInteger)arg0 toSceneWithIdentifier:(id)arg1 ;
-(void)_enumerateValidStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(void)_layoutStatusBarForOrientation:(NSInteger)arg0 ;
-(void)_setDebugBackgroundColor:(id)arg0 ;
-(void)_setDebugOffsetIndex:(NSUInteger)arg0 ;
-(void)_setupDebugging;
-(void)_statusBarScrollToTop:(id)arg0 ;
-(void)_statusBarShowDebug:(id)arg0 ;
-(void)_statusBarTapped:(id)arg0 type:(NSInteger)arg1 ;
-(void)_tearDownStatusBar;
-(void)_updateDebugBackgroundColor;
-(void)_updateDebugOffset;
-(void)_updateHitTestLayers;
-(void)applyStatusBarStylesForDescriber:(id)arg0 ;
-(void)beginRequiringStatusBarForReason:(id)arg0 ;
-(void)dealloc;
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg0 ;
-(void)endRequiringStatusBarForReason:(id)arg0 ;
-(void)layoutStatusBarForSpringBoardRotationToOrientation:(NSInteger)arg0 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect )arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarOrientationTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusBar:(id)arg0 didAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 animation:(int)arg3 ;
-(void)statusBar:(id)arg0 didTriggerButtonType:(NSInteger)arg1 withAction:(NSInteger)arg2 ;
-(void)statusBar:(id)arg0 didTriggerButtonType:(NSInteger)arg1 withAction:(NSInteger)arg2 context:(id)arg3 ;
-(void)statusBar:(id)arg0 willAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 duration:(CGFloat)arg3 animation:(int)arg4 ;
-(void)updateBreadcrumbActionIfNecessary;
-(void)updateStatusBarOrientationForLegacyApp;


@end


#endif