// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFANICONCONTENTVIEW_H
#define HUFANICONCONTENTVIEW_H

@class UIImageView, UIVisualEffectView;


#import "HUIconContentView.h"
#import "HUNonAnimatingTintImageView.h"
#import "HUDynamicStateAnimationApplier.h"

@interface HUFanIconContentView : HUIconContentView

@property (retain, nonatomic) UIImageView *baseView; // ivar: _baseView
@property (retain, nonatomic) UIVisualEffectView *baseVisualEffectView; // ivar: _baseVisualEffectView
@property (retain, nonatomic) HUNonAnimatingTintImageView *bladesView; // ivar: _bladesView
@property (retain, nonatomic) UIVisualEffectView *bladesVisualEffectView; // ivar: _bladesVisualEffectView
@property (nonatomic) CGFloat rotationSpeed; // ivar: _rotationSpeed
@property (nonatomic) NSUInteger rotationState; // ivar: _rotationState
@property (retain, nonatomic) HUDynamicStateAnimationApplier *speedRampApplier; // ivar: _speedRampApplier


-(BOOL)shouldFlipForRTL;
-(BOOL)wantsManagedVibrancyEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_rampBladesLayerToRotationSpeedAnimated:(BOOL)arg0 ;
-(void)_setBladesLayerSpeed:(float)arg0 ;
-(void)_updateImages;
-(void)_updateRotationAnimationFromState:(NSUInteger)arg0 shouldRampSpeed:(BOOL)arg1 ;
-(void)_updateVisualEffects;
-(void)layoutSubviews;
-(void)setDisableContinuousAnimation:(BOOL)arg0 ;
-(void)setIconSize:(NSUInteger)arg0 ;
-(void)setVibrancyEffect:(id)arg0 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif