// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVISUALEFFECTVIEW_H
#define UIVISUALEFFECTVIEW_H

@class NSMutableArray, NSArray, NSString;
@protocol NSSecureCoding;


#import "UIView.h"
#import "UIImage.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"
#import "_UIVisualEffectHost.h"
#import "_UIVisualEffectEnvironment.h"
#import "UIVisualEffectView.h"
#import "_UIVisualEffectBackdropView.h"
#import "_UIVisualEffectViewCornerMask.h"
#import "UIVisualEffect.h"

@interface UIVisualEffectView : UIView <NSSecureCoding>

 {
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    NSMutableArray *_captureDependents;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _UIVisualEffectEnvironment *_environment;
    ? _effectViewFlags;
}


@property (nonatomic, setter=_setAllowsGroupFiltering:) BOOL _allowsGroupFiltering;
@property (readonly, nonatomic) BOOL _applyCornerMaskToSelf;
@property (nonatomic, setter=_setBackdropViewBackgroundColorAlpha:) CGFloat _backdropViewBackgroundColorAlpha;
@property (copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents;
@property (readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (readonly, weak, nonatomic) UIVisualEffectView *_captureSource; // ivar: _captureSource
@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView;
@property (retain, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask; // ivar: __cornerMask
@property (nonatomic, setter=_setCornerRadius:) CGFloat _cornerRadius;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
@property (nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) BOOL _noiseEnabled;
@property (nonatomic, setter=_setRenderMode:) NSInteger _renderMode;
@property (nonatomic) BOOL allowsBlurring;
@property (nonatomic) BOOL allowsDithering;
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (copy, nonatomic) NSArray *contentEffects; // ivar: _contentEffects
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect; // ivar: _effect
@property (nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) BOOL useLiveMasking; // ivar: _useLiveMasking
@property (nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) BOOL useReducedTransparencyForContentEffects;


+(BOOL)supportsSecureCoding;
-(CGFloat)_continuousCornerRadius;
-(id)_backgroundHost;
-(id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)arg0 ;
-(id)_contentHost;
-(id)_cornerCurve;
-(id)_debug;
-(id)_effectDescriptorForEffects:(id)arg0 usage:(NSInteger)arg1 ;
-(id)_environment;
-(id)_initialValueForKey:(id)arg0 ;
-(id)_maskImageForMaskView:(id)arg0 ;
-(id)_maskView;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)_whatsWrongWithThisEffect;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffect:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addCaptureDependent:(id)arg0 ;
-(void)_addSubview:(id)arg0 positioned:(NSInteger)arg1 relativeTo:(id)arg2 ;
-(void)_applyCornerRadiusToSubviews;
-(void)_commonInit;
-(void)_configureEffects;
-(void)_ensureBackgroundHost;
-(void)_ensureContentHostWithView:(id)arg0 ;
-(void)_generateBackgroundEffects:(id)arg0 contentEffects:(id)arg1 ;
-(void)_generateDeferredAnimations:(id)arg0 ;
-(void)_generateEffectAnimations:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_registerNotifications;
-(void)_removeCaptureDependent:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setMaskView:(id)arg0 ;
-(void)_setTintOpacity:(CGFloat)arg0 ;
-(void)_unregisterNotifications;
-(void)_updateCaptureDependents;
-(void)_updateEffectBackgroundColor;
-(void)_updateEffectForAccessibilityChanges:(id)arg0 ;
-(void)_updateEffectForAlphaTransitionDidEnd:(id)arg0 ;
-(void)_updateEffectForAlphaTransitionWillBegin:(id)arg0 ;
-(void)_updateEffectForReducedTransparency;
-(void)_updateEffectForSnapshotDidEnd:(id)arg0 ;
-(void)_updateEffectForSnapshotWillBegin:(id)arg0 ;
-(void)_updateEffectsFromLegacyEffect;
-(void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id)arg0 ;
-(void)_updateSubView:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)_updateSubviews;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif