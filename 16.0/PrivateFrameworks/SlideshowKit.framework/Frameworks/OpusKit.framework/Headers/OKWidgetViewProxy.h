// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETVIEWPROXY_H
#define OKWIDGETVIEWPROXY_H

@class OFUIView, NSURL, UIImageView, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSRecursiveLock, UISnapBehavior;
@protocol OKCollectionProxyDataSource, OKDynamicItemProxiedObject, UIGestureRecognizerDelegate, OKActionResponderPrivate, OKActionResponderPrivate, OKSettingsSupport, OKPresentationReadinessPrivate, OKWidgetViewProxyExports, OKPresentationReadiness, OKActionResponder, OKPlayable, OKWidgetViewDelegate;


#import "OKWidgetContainerView.h"
#import "OKDynamicItemProxy.h"
#import "OKPresentationPage.h"
#import "OKWidgetView.h"
#import "OKPresentationViewController.h"
#import "OKPresentationWidget.h"

@interface OKWidgetViewProxy : OFUIView <OKCollectionProxyDataSource, OKDynamicItemProxiedObject, UIGestureRecognizerDelegate, OKActionResponderPrivate, OKActionResponderPrivate, OKSettingsSupport, OKPresentationReadinessPrivate, OKWidgetViewProxyExports, OKPresentationReadiness, OKActionResponder, OKPlayable>

 {
    UIEdgeInsets _eventsInset;
    BOOL _ignoreEventsOnTransparentPixels;
    NSURL *_borderImageURL;
    UIImageView *_borderView;
    OKWidgetContainerView *_contentContainerView;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    UIEdgeInsets _borderEdgeOutsets;
    UIEdgeInsets _borderImageCapEdgeInsets;
    BOOL _shadowOptimization;
    NSArray *_contentEffects;
    BOOL _antialiasing;
    CATransform3D _widgetTransform;
    CATransform3D _motionTransform;
    CATransform3D _parallaxTransform;
    CGAffineTransform _dynamicsTransform;
    CGFloat _zRotation;
    CGPoint _zRotationAnchorPoint;
    BOOL _xFlipped;
    BOOL _yFlipped;
    CGPoint _xyTranslation;
    CGSize _xyScale;
    BOOL _motionEnabled;
    BOOL _motionTiltXEnabled;
    BOOL _motionTiltYEnabled;
    BOOL _motionTiltZEnabled;
    CGSize _motionXMinMax;
    CGSize _motionYMinMax;
    CGSize _motionZMinMax;
    CGPoint _motionXTiltAnchorPoint;
    CGPoint _motionYTiltAnchorPoint;
    CGPoint _motionZTiltAnchorPoint;
    BOOL _motionXTiltReversed;
    BOOL _motionYTiltReversed;
    BOOL _motionZTiltReversed;
    NSString *_dynamicsCollisionActionScript;
    OFUIView *_dimmerView;
    *? _focusGestureHelper;
    NSUInteger _focusGestureMode;
    UIEdgeInsets _focusGestureInsets;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSArray *_layoutSteps;
    NSMutableDictionary *_actionBindings;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
    CGRect _originalFrame;
    CGSize _lastBoundsSize;
    NSMutableArray *_newSubWidgetViews;
    UISnapBehavior *_dynamicSnapBehavior;
}


@property (readonly) OFUIView *actionView;
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center;
@property (readonly, retain, nonatomic) OFUIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKWidgetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) OKDynamicItemProxy *dynamicProxy; // ivar: _dynamicProxy
@property (nonatomic) CGAffineTransform dynamicsTransform;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSMutableArray *mediaURLs; // ivar: _mediaURLs
@property (readonly, nonatomic) BOOL needsZoning; // ivar: _needsZoning
@property (retain, nonatomic) OKPresentationPage *page; // ivar: _page
@property (readonly, nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) OKWidgetView *parentWidgetView; // ivar: _parentWidgetView
@property (nonatomic) NSUInteger prepareMode; // ivar: _prepareMode
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) OKPresentationViewController *presentationViewController;
@property (readonly, retain, nonatomic) NSMutableArray *subWidgetViews; // ivar: _subWidgetViews
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) OKPresentationWidget *widget; // ivar: _widget


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)interactivityEnabled;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)isFocused;
-(BOOL)isReady:(BOOL)arg0 ;
-(BOOL)needsAntialiasing;
-(BOOL)performActionScript:(id)arg0 withAction:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)sendAction:(id)arg0 toTarget:(id)arg1 ;
-(BOOL)settingAntialiasing;
-(BOOL)settingClipsToBounds;
-(BOOL)settingDynamicsBodyAllowsRotation;
-(BOOL)settingDynamicsEnabled;
-(BOOL)settingDynamicsGravityDisabled;
-(BOOL)settingIgnoreEventsOnTransparentPixels;
-(BOOL)settingMotionEnabled;
-(BOOL)settingMotionTiltXEnabled;
-(BOOL)settingMotionTiltYEnabled;
-(BOOL)settingMotionTiltZEnabled;
-(BOOL)settingMotionXtiltReversed;
-(BOOL)settingMotionYTiltReversed;
-(BOOL)settingMotionZTiltReversed;
-(BOOL)settingNeedsZoning;
-(BOOL)settingShadowOptimization;
-(BOOL)settingUserInteractionEnabled;
-(BOOL)settingXFlipped;
-(BOOL)settingYFlipped;
-(BOOL)supportsReadiness;
-(CGFloat)_localReadyProgress;
-(CGFloat)readyProgress:(BOOL)arg0 ;
-(CGFloat)remainingPlayDuration;
-(CGFloat)settingAlpha;
-(CGFloat)settingBorderWidth;
-(CGFloat)settingCornerRadius;
-(CGFloat)settingDynamicsBodyAngularResistance;
-(CGFloat)settingDynamicsBodyDensity;
-(CGFloat)settingDynamicsBodyElasticity;
-(CGFloat)settingDynamicsBodyFriction;
-(CGFloat)settingDynamicsBodyResistance;
-(CGFloat)settingShadowOpacity;
-(CGFloat)settingShadowRadius;
-(CGFloat)settingZPosition;
-(CGFloat)settingZRotation;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(NSUInteger)settingAutoresizingMask;
-(float)contentAspectRatio;
-(id)_borderView;
-(id)_dimmerView;
-(id)_preparseLayoutString:(id)arg0 targetView:(*id)arg1 anchorView:(*id)arg2 ;
-(id)actionBindingForAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)addSubWidgetViewWithTemplateName:(id)arg0 name:(id)arg1 andSettings:(id)arg2 ;
-(id)allActionBindings;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)dictionaryProxy:(id)arg0 objectAtIndexPath:(id)arg1 ;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)dynamicProxyForOffsetFromCenter:(struct UIOffset )arg0 realRemoteOffsetFromCenter:(struct UIOffset *)arg1 ;
-(id)initWithWidget:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)name;
-(id)settingActionBindings;
-(id)settingBackgroundColor;
-(id)settingBorderColor;
-(id)settingBorderImageURL;
-(id)settingContentEffects;
-(id)settingContentFilters;
-(id)settingDynamicsAttachments;
-(id)settingDynamicsCollisionGroups;
-(id)settingDynamicsPushGroups;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingShadowColor;
-(id)subDynamicProxies;
-(id)subWidgetViewForName:(id)arg0 recursively:(BOOL)arg1 ;
-(id)subWidgetViewNames;
-(id)subWidgetViewsInRect:(struct CGRect )arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct ? *)_focusGestureHelper;
-(struct CATransform3D )_jsOriginalTransform;
-(struct CATransform3D )_jsTransform;
-(struct CGPoint )convertPointWithParallax:(struct CGPoint )arg0 ;
-(struct CGPoint )settingCenter;
-(struct CGPoint )settingMotionXTiltAnchorPoint;
-(struct CGPoint )settingMotionYTiltAnchorPoint;
-(struct CGPoint )settingMotionZTiltAnchorPoint;
-(struct CGPoint )settingPosition;
-(struct CGPoint )settingXyTranslation;
-(struct CGPoint )settingZRotationAnchorPoint;
-(struct CGRect )borderRect;
-(struct CGRect )calculateFrame:(struct CGRect )arg0 ;
-(struct CGRect )originalFrame;
-(struct CGRect )settingFrame;
-(struct CGSize )_focusSize;
-(struct CGSize )layoutFactor;
-(struct CGSize )parentLayoutFactor;
-(struct CGSize )settingMotionXMinMax;
-(struct CGSize )settingMotionYMinMax;
-(struct CGSize )settingMotionZMinMax;
-(struct CGSize )settingShadowOffset;
-(struct CGSize )settingSize;
-(struct CGSize )settingXyScale;
-(struct UIEdgeInsets )settingBorderEdgeOutsets;
-(struct UIEdgeInsets )settingBorderImageCapEdgeInsets;
-(struct UIEdgeInsets )settingEventsInset;
-(void)_animateToFocus:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_animateToUnfocus:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_animationToFocus;
-(void)_animationToUnfocus;
-(void)_cancelAllOperations;
-(void)_cancelBorderOperations;
-(void)_completionToFocus:(BOOL)arg0 ;
-(void)_completionToUnfocus:(BOOL)arg0 ;
-(void)_jsSetTransform:(struct CATransform3D )arg0 ;
-(void)_prepareToFocus;
-(void)_prepareToUnfocus;
-(void)_reloadBorderContent;
-(void)_reloadBorderContentInHighQuality:(BOOL)arg0 ;
-(void)_startShowingProgressIndicator;
-(void)_stopShowingProgressIndicator;
-(void)_unloadBorderContent;
-(void)addActionBinding:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)applyLayoutSettings;
-(void)applySettings;
-(void)applySettingsIfNeeded;
-(void)becomeReady;
-(void)beganCollisionWithWidgetView:(id)arg0 fromGroup:(id)arg1 ;
-(void)commonInit;
-(void)dealloc;
-(void)dynamicsRemoveSnapping;
-(void)dynamicsSnapToPoint:(struct CGPoint )arg0 withDamping:(CGFloat)arg1 ;
-(void)focus:(NSUInteger)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)focus:(id)arg0 ;
-(void)instantPause;
-(void)instantResume;
-(void)layoutSubviews;
-(void)networkStatusDidChange:(NSInteger)arg0 ;
-(void)notifyWhenBecomesReady:(id)arg0 ;
-(void)pauseContentEffects;
-(void)play;
-(void)prefetchMediaURL:(id)arg0 identifier:(id)arg1 ;
-(void)prepareContentEffects;
-(void)prepareForMode:(NSUInteger)arg0 force:(BOOL)arg1 ;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)prepareIfNeeded:(BOOL)arg0 ;
-(void)readinessDidChange:(BOOL)arg0 ;
// -(void)reloadMediaURL:(id)arg0 size:(struct CGSize )arg1 mode:(NSInteger)arg2 lowQuality:(BOOL)arg3 highQuality:(BOOL)arg4 identifier:(id)arg5 progressHandler:(id)arg6 completionHandler:(unk)arg7  ;
-(void)removeActionBinding:(id)arg0 ;
-(void)removeAllActionBindings;
-(void)removeAllReadyNotifications;
-(void)resignReady;
-(void)restartContentEffects;
-(void)resumeContentEffects:(BOOL)arg0 ;
-(void)setActivityIndicatorVisible:(BOOL)arg0 ;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsApplySettings;
-(void)setNeedsPrepare;
-(void)setSettingActionBindings:(id)arg0 ;
-(void)setSettingAlpha:(CGFloat)arg0 ;
-(void)setSettingAntialiasing:(BOOL)arg0 ;
-(void)setSettingAutoresizingMask:(NSUInteger)arg0 ;
-(void)setSettingBackgroundColor:(id)arg0 ;
-(void)setSettingBorderColor:(id)arg0 ;
-(void)setSettingBorderEdgeOutsets:(struct UIEdgeInsets )arg0 ;
-(void)setSettingBorderImageCapEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSettingBorderImageURL:(id)arg0 ;
-(void)setSettingBorderWidth:(CGFloat)arg0 ;
-(void)setSettingCanPerformActionScript:(id)arg0 ;
-(void)setSettingCenter:(struct CGPoint )arg0 ;
-(void)setSettingClipsToBounds:(BOOL)arg0 ;
-(void)setSettingContentEffects:(id)arg0 ;
-(void)setSettingContentFilters:(id)arg0 ;
-(void)setSettingCornerRadius:(CGFloat)arg0 ;
-(void)setSettingDynamicsAttachments:(id)arg0 ;
-(void)setSettingDynamicsBodyAllowsRotation:(BOOL)arg0 ;
-(void)setSettingDynamicsBodyAngularResistance:(CGFloat)arg0 ;
-(void)setSettingDynamicsBodyDensity:(CGFloat)arg0 ;
-(void)setSettingDynamicsBodyElasticity:(CGFloat)arg0 ;
-(void)setSettingDynamicsBodyFriction:(CGFloat)arg0 ;
-(void)setSettingDynamicsBodyResistance:(CGFloat)arg0 ;
-(void)setSettingDynamicsCollisionActionScript:(id)arg0 ;
-(void)setSettingDynamicsCollisionGroups:(id)arg0 ;
-(void)setSettingDynamicsEnabled:(BOOL)arg0 ;
-(void)setSettingDynamicsGravityDisabled:(BOOL)arg0 ;
-(void)setSettingDynamicsPushGroups:(id)arg0 ;
-(void)setSettingEventsInset:(struct UIEdgeInsets )arg0 ;
-(void)setSettingFrame:(struct CGRect )arg0 ;
-(void)setSettingHidden:(BOOL)arg0 ;
-(void)setSettingIgnoreEventsOnTransparentPixels:(BOOL)arg0 ;
-(void)setSettingLayoutSteps:(id)arg0 ;
-(void)setSettingMotionEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltXEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltYEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltZEnabled:(BOOL)arg0 ;
-(void)setSettingMotionXMinMax:(struct CGSize )arg0 ;
-(void)setSettingMotionXTiltAnchorPoint:(struct CGPoint )arg0 ;
-(void)setSettingMotionXTiltReversed:(BOOL)arg0 ;
-(void)setSettingMotionYMinMax:(struct CGSize )arg0 ;
-(void)setSettingMotionYTiltAnchorPoint:(struct CGPoint )arg0 ;
-(void)setSettingMotionYTiltReversed:(BOOL)arg0 ;
-(void)setSettingMotionZMinMax:(struct CGSize )arg0 ;
-(void)setSettingMotionZTiltAnchorPoint:(struct CGPoint )arg0 ;
-(void)setSettingMotionZTiltReversed:(BOOL)arg0 ;
-(void)setSettingNeedsZoning:(BOOL)arg0 ;
-(void)setSettingParallaxEnabled:(BOOL)arg0 ;
-(void)setSettingPosition:(struct CGPoint )arg0 ;
-(void)setSettingPrepareActionScript:(id)arg0 ;
-(void)setSettingShadowColor:(id)arg0 ;
-(void)setSettingShadowOffset:(struct CGSize )arg0 ;
-(void)setSettingShadowOpacity:(CGFloat)arg0 ;
-(void)setSettingShadowOptimization:(BOOL)arg0 ;
-(void)setSettingShadowRadius:(CGFloat)arg0 ;
-(void)setSettingSize:(struct CGSize )arg0 ;
-(void)setSettingUserInteractionEnabled:(BOOL)arg0 ;
-(void)setSettingXFlipped:(BOOL)arg0 ;
-(void)setSettingXyScale:(struct CGSize )arg0 ;
-(void)setSettingXyTranslation:(struct CGPoint )arg0 ;
-(void)setSettingYFlipped:(BOOL)arg0 ;
-(void)setSettingZPosition:(CGFloat)arg0 ;
-(void)setSettingZRotation:(CGFloat)arg0 ;
-(void)setSettingZRotationAnchorPoint:(struct CGPoint )arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)sizeToFit;
-(void)startContentEffects;
-(void)startShowingProgressIndicator;
-(void)stopContentEffects;
-(void)stopShowingProgressIndicator;
-(void)unfocus:(CGFloat)arg0 completion:(id)arg1 ;
-(void)updateAntialiasing;
-(void)updateBorder;
-(void)updateContentEffects;
-(void)updateContentFilters;
-(void)updateContentTransforms;
-(void)updateDynamics;
-(void)updateLayoutSteps;
-(void)updateMotion;
-(void)updateParallax;
-(void)updateProgressIndicator:(CGFloat)arg0 ;
-(void)updateShadowPath;
-(void)updateTransforms;
-(void)updateWidgetTransforms;
-(void)updateWithMotionTiltRotationX:(CGFloat)arg0 tiltRotationY:(CGFloat)arg1 tiltRotationZ:(CGFloat)arg2 ;
-(void)updateWithParallaxTranslationX:(CGFloat)arg0 translationY:(CGFloat)arg1 ;
-(void)wobble;


@end


#endif