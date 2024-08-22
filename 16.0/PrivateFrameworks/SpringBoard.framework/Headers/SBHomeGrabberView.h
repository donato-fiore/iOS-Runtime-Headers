// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGRABBERVIEW_H
#define SBHOMEGRABBERVIEW_H

@class UIView, SBFHomeGrabberSettings, MTLumaDodgePillSettings, MTLumaDodgePillView, NSMutableSet, NSHashTable, NSString;
@protocol PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemPointerInteractionDelegate, SBMousePointerHardwareConnectionObserver, SBHomeGrabberDelegate, SBHomeGrabberPointerClickDelegate;


#import "SBAttentionAwarenessClient.h"
#import "SBSystemPointerInteractionManager.h"

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemPointerInteractionDelegate, SBMousePointerHardwareConnectionObserver>

 {
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    UIView *_pointerHitTestBlockingView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    NSInteger _touchState;
    NSUInteger _lastActivatingToken;
    NSUInteger _lastInitialHideToken;
    BOOL _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    NSInteger _luma;
    NSInteger _presence;
    NSInteger _style;
    NSUInteger _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _isSystemPointerInteractionEnabled;
    NSHashTable *_observers;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
}


@property (nonatomic) BOOL autoHides; // ivar: _autoHides
@property (nonatomic) NSInteger colorBias; // ivar: _colorBias
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeGrabberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEdgeProtectEnabled) BOOL edgeProtectEnabled; // ivar: _edgeProtectEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresLuminance; // ivar: _ignoresLuminance
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate; // ivar: _pointerClickDelegate
@property (readonly, nonatomic) CGFloat suggestedEdgeSpacing;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBounce; // ivar: _suppressesBounce


-(BOOL)_autohideEffectivelyEnabled;
-(BOOL)_bounceHitTest:(struct CGPoint )arg0 ;
-(BOOL)_edgeProtectEffectivelyEnabled;
-(BOOL)isHidden;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(NSInteger)_calculateLumaStyle;
-(NSInteger)_calculatePresence;
-(NSInteger)_calculateStyle;
-(id)_animationSettingsForTransitionFromStyle:(NSInteger)arg0 toStyle:(NSInteger)arg1 fromPresence:(NSInteger)arg2 toPresence:(NSInteger)arg3 ;
-(id)_effectiveLumaDodgePillSettings;
-(id)_newPillView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 shouldEnableGestures:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 shouldEnableGestures:(BOOL)arg1 ;
-(id)regionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct CGRect )_calculatePillFrame;
-(struct CGRect )_pointerInteractionHitTestRect;
-(struct CGRect )grabberFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )suggestedSizeForContentWidth:(CGFloat)arg0 ;
-(void)_animateToStyle:(NSInteger)arg0 disallowAdditive:(BOOL)arg1 withAnimationSettings:(id)arg2 ;
-(void)_bounce;
-(void)_invalidateInitialAutoHideTime;
-(void)_noteActiveForTouchThatShouldUnhideImmediately:(BOOL)arg0 ;
-(void)_notifyObserversOfDidUpdateHidden;
-(void)_setSystemPointerInteractionEnabled:(BOOL)arg0 ;
-(void)_updateIdleTouchAwarenessClient;
-(void)_updatePresence:(NSInteger)arg0 style:(NSInteger)arg1 withAnimationSettings:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)dealloc;
-(void)forgetBackgroundLuminance;
-(void)layoutSubviews;
-(void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg0 ;
-(void)mousePointerManager:(id)arg0 hardwarePointingDeviceAttachedDidChange:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetAutoHide;
-(void)resetAutoHideWithInitialDelay:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 forReason:(id)arg1 withAnimationSettings:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)turnOffAutoHideWithDelay:(CGFloat)arg0 ;
-(void)turnOnAutoHideWithInitialDelay:(CGFloat)arg0 ;
-(void)updateStyle;
-(void)updateStyleWithAnimationSettings:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif