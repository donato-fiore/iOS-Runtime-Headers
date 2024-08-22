// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBAR_BASE_H
#define UISTATUSBAR_BASE_H

@class UIScrollsToTopInitiatorView, UIFont, NSString, NSArray;
@protocol UIStatusBarServerClient, UIStatusBarStateObserver, UIViewControllerTransitionCoordinator, UIStatusBarCarPlayDockDataProviding, UIStatusBarStateProvider, UIStatusBarManager, UIStatusBarStyleDelegate;


#import "UIColor.h"
#import "UIView.h"
#import "UIStatusBarServer.h"
#import "UIStatusBarWindow.h"
#import "UIStatusBarStyleRequest.h"

@interface UIStatusBar_Base : UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver>



@property (weak, nonatomic) NSObject<UIViewControllerTransitionCoordinator> *_transitionCoordinator; // ivar: __transitionCoordinator
@property (nonatomic) NSUInteger activeStyleOverride; // ivar: _activeStyleOverride
@property (nonatomic) CGRect avoidanceFrame; // ivar: _avoidanceFrame
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *disabledPartIdentifiers; // ivar: _disabledPartIdentifiers
@property (nonatomic, setter=_setDisablesRasterization:) BOOL disablesRasterization; // ivar: _disablesRasterization
@property (weak, nonatomic) NSObject<UIStatusBarCarPlayDockDataProviding> *dockDataProvider; // ivar: _dockDataProvider
@property (copy, nonatomic) NSArray *enabledPartIdentifiers; // ivar: _enabledPartIdentifiers
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (nonatomic) BOOL homeItemsDisabled; // ivar: _homeItemsDisabled
@property (retain, nonatomic) NSObject<UIStatusBarStateProvider> *inProcessStateProvider; // ivar: _inProcessStateProvider
@property (nonatomic) NSInteger legibilityStyle; // ivar: _legibilityStyle
@property (readonly, nonatomic) *? localDataOverrides; // ivar: _localDataOverrides
@property (weak, nonatomic) NSObject<UIStatusBarManager> *manager; // ivar: _manager
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL persistentAnimationsEnabled; // ivar: _persistentAnimationsEnabled
@property (nonatomic) BOOL registered; // ivar: _registered
@property (nonatomic, getter=_requestStyle, setter=_setRequestedStyle:) NSInteger requestedStyle; // ivar: _requestedStyle
@property (weak, nonatomic) UIView *sensorActivityIndicator;
@property (nonatomic) BOOL serverUpdatesDisabled; // ivar: _serverUpdatesDisabled
@property (retain, nonatomic) UIStatusBarServer *statusBarServer; // ivar: _statusBarServer
@property (readonly, weak, nonatomic) UIStatusBarWindow *statusBarWindow; // ivar: _statusBarWindow
@property (weak, nonatomic) NSObject<UIStatusBarStyleDelegate> *styleDelegate; // ivar: _styleDelegate
@property (readonly, nonatomic) NSUInteger styleOverrides; // ivar: _styleOverrides
@property (copy, nonatomic) UIStatusBarStyleRequest *styleRequest; // ivar: _styleRequest
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesHiddenSideEffects; // ivar: _suppressesHiddenSideEffects


+(CGFloat)_heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 forStatusBarFrame:(BOOL)arg2 inWindow:(id)arg3 ;
+(CGFloat)_heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 forStatusBarFrame:(BOOL)arg2 inWindow:(id)arg3 isAzulBLinked:(BOOL)arg4 ;
+(CGFloat)_viewControllerAdjustmentForOrientation:(NSInteger)arg0 inWindow:(id)arg1 ;
+(CGFloat)heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 inWindow:(id)arg2 ;
+(CGFloat)heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 inWindow:(id)arg2 isAzulBLinked:(BOOL)arg3 ;
+(Class)_implementationClass;
+(NSInteger)_defaultStyleForRequestedStyle:(NSInteger)arg0 styleOverrides:(NSUInteger)arg1 ;
+(NSInteger)_defaultStyleForRequestedStyle:(NSInteger)arg0 styleOverrides:(NSUInteger)arg1 activeStyleOverride:(*NSUInteger)arg2 ;
+(struct CGRect )_frameInSceneReferenceSpaceForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 inSceneWithReferenceSize:(struct CGSize )arg2 ;
+(void)_setImplementationClass:(Class)arg0 ;
-(BOOL)_canShowInOrientation:(NSInteger)arg0 ;
-(BOOL)_isTransparent;
-(BOOL)_rectIntersectsTimeItem:(struct CGRect )arg0 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(BOOL)_usesModernBar;
-(BOOL)isDoubleHeight;
-(BOOL)isHidden;
-(BOOL)isTranslucent;
-(BOOL)showsContentsOnScreen;
-(CGFloat)_hiddenAlphaForHideAnimationParameters:(id)arg0 ;
-(CGFloat)alphaForPartWithIdentifier:(id)arg0 ;
-(CGFloat)currentHeight;
-(CGFloat)defaultDoubleHeight;
-(CGFloat)defaultHeight;
-(CGFloat)heightForOrientation:(NSInteger)arg0 ;
-(CGFloat)heightForOrientation:(NSInteger)arg0 isAzulBLinked:(BOOL)arg1 ;
-(NSInteger)currentStyle;
-(NSInteger)styleForRequestedStyle:(NSInteger)arg0 ;
-(id)_initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 wantsServer:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(id)actionForPartWithIdentifier:(id)arg0 ;
-(id)activeTintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 inProcessStateProvider:(id)arg2 ;
-(struct CGAffineTransform )_hiddenTransformForHideAnimationParameters:(id)arg0 ;
-(struct CGRect )currentFrame;
-(struct CGRect )frameForOrientation:(NSInteger)arg0 ;
-(struct CGRect )frameForPartWithIdentifier:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIOffset )offsetForPartWithIdentifier:(id)arg0 ;
-(void)_clearOverrideHeight;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_evaluateServerRegistration;
-(void)_getStyle:(*NSInteger)arg0 andActiveOverride:(*NSUInteger)arg1 forRequestedStyle:(NSInteger)arg2 ;
-(void)_noteStyleOverridesChangedLocally;
// -(void)_performAnimations:(id)arg0 withParameters:(unk)arg1 completion:(id)arg2  ;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(id)arg0 ;
-(void)_requestStyle:(NSInteger)arg0 partStyles:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)_setOverrideHeight:(CGFloat)arg0 ;
-(void)_statusBarDidAnimateRotation;
-(void)_statusBarWillAnimateRotation;
-(void)_styleOverridesDidChange:(id)arg0 ;
-(void)_willEnterForeground:(id)arg0 ;
-(void)animateUnlock;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)forceUpdate:(BOOL)arg0 ;
-(void)forceUpdateData:(BOOL)arg0 ;
-(void)forceUpdateDoubleHeightStatus;
-(void)forceUpdateStyleOverrides:(BOOL)arg0 ;
-(void)forceUpdateToData:(struct ? *)arg0 animated:(BOOL)arg1 ;
-(void)forgetEitherSideHistory;
-(void)jiggleLockIcon;
-(void)requestStyle:(NSInteger)arg0 ;
-(void)requestStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)requestStyle:(NSInteger)arg0 animated:(BOOL)arg1 forced:(BOOL)arg2 ;
-(void)requestStyle:(NSInteger)arg0 animation:(int)arg1 startTime:(CGFloat)arg2 duration:(CGFloat)arg3 curve:(NSInteger)arg4 ;
-(void)requestStyle:(NSInteger)arg0 animationParameters:(id)arg1 ;
-(void)requestStyle:(NSInteger)arg0 animationParameters:(id)arg1 forced:(BOOL)arg2 ;
-(void)requestStyle:(NSInteger)arg0 partStyles:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)setAction:(id)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setAlpha:(CGFloat)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setEnabledCenterItems:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setOffset:(struct UIOffset )arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setShowsOnlyCenterItems:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setTintColor:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;
-(void)statusBarStateProvider:(id)arg0 didPostStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;


@end


#endif