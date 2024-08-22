// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDYNAMICLAYERVIEW_H
#define PKDYNAMICLAYERVIEW_H

@class UIView, PKPass, UIImageView, CAGradientLayer, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, PKDynamicLayerCrossDissolveConfiguration, UIImage, NSData, CAEmitterLayer, CALayer, _UIParallaxMotionEffect, UIMotionEffectGroup;


#import "PKDynamicContentView.h"

@interface PKDynamicLayerView : UIView {
    PKPass *_pass;
    PKDynamicContentView *_backgroundParallaxView;
    UIImageView *_backgroundParallaxCrossDissolveView;
    CAGradientLayer *_backgroundRadialGradientLayer;
    PKDynamicContentView *_neutralView;
    PKDynamicContentView *_foregroundParallaxView;
    UIImageView *_foregroundParallaxCrossDissolveView;
    CAGradientLayer *_foregroundRadialGradientLayer;
    PKDynamicContentView *_staticOverlayView;
    UIImageView *_staticFallbackView;
    PKDynamicLayerConfiguration *_dynamicLayerConfiguration;
    PKDynamicLayerTransactionEffectConfiguration *_transactionEffectConfiguration;
    PKDynamicLayerCrossDissolveConfiguration *_crossDissolveConfiguration;
    UIImage *_transactionEffectEmitterImage;
    NSData *_transactionEffectShapeData;
    CAEmitterLayer *_transactionEffectLayer;
    CALayer *_dimmingLayer;
    _UIParallaxMotionEffect *_bottomEffect;
    _UIParallaxMotionEffect *_topEffect;
    UIMotionEffectGroup *_radialMaskEffects;
    UIOffset _parallaxOffset;
    BOOL _invalidated;
    BOOL _paused;
    BOOL _loaded;
    BOOL _effectiveMotionEnabled;
}


@property (nonatomic) BOOL automaticallyLoadContent; // ivar: _automaticallyLoadContent
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // ivar: _motionEnabled
@property (nonatomic, getter=isPaused) BOOL paused;


-(id)_configureMotionEffectGroupForCrossDissolveConfiguration:(id)arg0 ;
-(id)_dimmingLayerAnimationWithDuration:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 automaticallyLoadContent:(BOOL)arg2 ;
-(void)_addParallaxMotionEffect;
-(void)_addRadialMaskEffectsToView:(id)arg0 ;
-(void)_configureDynamicViewsWithImageSet:(id)arg0 ;
-(void)_configureViews;
-(void)_removeParallaxMotionEffect;
-(void)_updateVisibility;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)loadContent;
-(void)runTransactionEffect;


@end


#endif