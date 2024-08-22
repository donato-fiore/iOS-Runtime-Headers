// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBAR_H
#define UISTATUSBAR_H

@class Base, NSString, NSMutableArray, NSNumber, NSMutableSet, NSMutableDictionary;
@protocol UIStatusBarServerClient;


#import "UIStatusBarBackgroundView.h"
#import "UIStatusBarForegroundView.h"
#import "UILabel.h"
#import "UIView.h"
#import "UIStatusBar.h"
#import "UIStatusBarStyleAttributes.h"
#import "UIColor.h"
#import "UIStatusBarStyleAnimationParameters.h"

@interface UIStatusBar : Base <UIStatusBarServerClient>

 {
    BOOL _showsForeground;
    BOOL _observingDefaults;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    ? _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarStyleAttributes *_styleAttributes;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _showOnlyCenterItems;
    BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    NSMutableDictionary *_actions;
    BOOL _disablesRasterization;
}


@property (nonatomic, getter=isTimeHidden) BOOL timeHidden; // ivar: _timeHidden


+(BOOL)_isLightContentStyle:(NSInteger)arg0 ;
+(BOOL)_shouldForwardToImplementationClassForStyle:(NSInteger)arg0 ;
+(CGFloat)_heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 forStatusBarFrame:(BOOL)arg2 inWindow:(id)arg3 isAzulBLinked:(BOOL)arg4 ;
+(CGFloat)_regularPadBaselineOffset;
+(CGFloat)_roundedPadBaselineOffset;
+(CGFloat)_viewControllerAdjustmentForOrientation:(NSInteger)arg0 inWindow:(id)arg1 ;
+(NSInteger)_deviceUserInterfaceLayoutDirection;
+(NSInteger)defaultStyleForRequestedStyle:(NSInteger)arg0 styleOverrides:(NSUInteger)arg1 ;
+(NSInteger)lowBatteryLevel;
+(id)_newStyleAttributesForRequest:(id)arg0 ;
+(id)_styleAttributesForRequest:(id)arg0 ;
+(id)_styleAttributesForStatusBarStyle:(NSInteger)arg0 ;
+(struct NSDirectionalEdgeInsets )_regularPadEdgeInsets;
+(struct NSDirectionalEdgeInsets )_roundedPadEdgeInsets;
+(void)_setDeviceUserInterfaceLayoutDirection:(NSInteger)arg0 ;
+(void)enumerateStatusBarStyleOverridesWithBlock:(id)arg0 ;
+(void)getData:(struct ? *)arg0 forRequestedData:(struct ? *)arg1 withOverrides:(struct ? *)arg2 ;
-(BOOL)_isTransparent;
-(BOOL)_rectIntersectsTimeItem:(struct CGRect )arg0 ;
-(BOOL)_shouldReverseLayoutDirection;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
-(BOOL)_touchShouldProduceReturnEvent;
-(BOOL)disablesRasterization;
-(BOOL)isDoubleHeight;
-(BOOL)isTranslucent;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)defaultDoubleHeight;
-(CGFloat)defaultHeight;
-(CGFloat)heightForOrientation:(NSInteger)arg0 ;
-(NSInteger)currentStyle;
-(id)_backgroundView;
-(id)_currentComposedData;
-(id)_currentComposedDataForStyle:(id)arg0 ;
-(id)_currentStyleAttributes;
-(id)_doubleHeightStatusStringForStyle:(NSInteger)arg0 ;
-(id)_initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 wantsServer:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg0 ;
-(id)_prepareToSetStyle:(id)arg0 animation:(int)arg1 forced:(BOOL)arg2 ;
-(id)_styleAttributesForRequest:(id)arg0 ;
-(id)actionForPartWithIdentifier:(id)arg0 ;
-(id)currentStyleRequestForStyle:(NSInteger)arg0 ;
-(id)enabledPartIdentifiers;
-(id)statusBarWindow;
-(id)styleRequest;
-(struct CGAffineTransform )_slideTransform;
-(struct CGRect )_backgroundFrameForAttributes:(id)arg0 ;
-(struct CGRect )frameForOrientation:(NSInteger)arg0 ;
-(struct CGRect )frameForPartWithIdentifier:(id)arg0 ;
-(void)_adjustDoubleHeightTextVisibility;
-(void)_beginDisablingRasterizationForReason:(id)arg0 ;
-(void)_clearOverrideHeight;
-(void)_crossfadeToNewBackgroundView;
-(void)_crossfadeToNewForegroundViewWithAlpha:(CGFloat)arg0 ;
-(void)_dateTimePreferencesUpdated;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_endDisablingRasterizationForReason:(id)arg0 ;
-(void)_finishedSettingStyleWithOldHeight:(CGFloat)arg0 newHeight:(CGFloat)arg1 animation:(int)arg2 ;
-(void)_itemViewPerformButtonAction:(id)arg0 ;
-(void)_itemViewShouldBeginDisablingRasterization:(id)arg0 ;
-(void)_itemViewShouldEndDisablingRasterization:(id)arg0 ;
-(void)_noteStyleOverridesChangedLocally;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(id)arg0 ;
-(void)_requestStyle:(NSInteger)arg0 partStyles:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)_setDisablesRasterization:(BOOL)arg0 ;
-(void)_setDoubleHeightStatusString:(id)arg0 ;
-(void)_setFrameForStyle:(id)arg0 ;
-(void)_setOverrideHeight:(CGFloat)arg0 ;
-(void)_setStyle:(id)arg0 ;
-(void)_setStyle:(id)arg0 animation:(int)arg1 ;
-(void)_setVisualAltitude:(CGFloat)arg0 ;
-(void)_setVisualAltitudeBias:(struct CGSize )arg0 ;
-(void)_statusBarDidAnimateRotation;
-(void)_statusBarWillAnimateRotation;
-(void)_swapToNewBackgroundView;
-(void)_swapToNewForegroundView;
-(void)_updateBackgroundFrame;
-(void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg0 ;
-(void)_updateShouldRasterize;
-(void)_updateUIWithStyleAttributes:(id)arg0 animationParameters:(id)arg1 ;
-(void)_updateUIWithStyleAttributes:(id)arg0 animationParameters:(id)arg1 forced:(BOOL)arg2 ;
-(void)animateUnlock;
-(void)dealloc;
-(void)forceUpdate:(BOOL)arg0 ;
-(void)forceUpdateData:(BOOL)arg0 ;
-(void)forceUpdateDoubleHeightStatus;
-(void)forceUpdateToData:(struct ? *)arg0 animated:(BOOL)arg1 ;
-(void)forgetEitherSideHistory;
-(void)jiggleLockIcon;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)requestStyle:(NSInteger)arg0 animation:(int)arg1 startTime:(CGFloat)arg2 duration:(CGFloat)arg3 curve:(NSInteger)arg4 ;
-(void)setAction:(id)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setEnabledCenterItems:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setEnabledPartIdentifiers:(id)arg0 ;
-(void)setForegroundAlpha:(CGFloat)arg0 animationParameters:(id)arg1 ;
-(void)setForegroundColor:(id)arg0 animationParameters:(id)arg1 ;
-(void)setLegibilityStyle:(NSInteger)arg0 animationParameters:(id)arg1 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg0 ;
-(void)setRegistered:(BOOL)arg0 ;
-(void)setShowsOnlyCenterItems:(BOOL)arg0 ;
-(void)setStyleRequest:(id)arg0 animationParameters:(id)arg1 ;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setTintColor:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;
-(void)statusBarStateProvider:(id)arg0 didChangeDoubleHeightStatusStringForStyle:(NSInteger)arg1 ;
-(void)statusBarStateProvider:(id)arg0 didPostStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif