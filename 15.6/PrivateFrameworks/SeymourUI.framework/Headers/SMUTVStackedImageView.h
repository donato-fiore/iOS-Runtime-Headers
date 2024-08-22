// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMUTVSTACKEDIMAGEVIEW_H
#define SMUTVSTACKEDIMAGEVIEW_H

@class UIView, UIImage, _UIStackedImageContainerLayer, _UIStackedImageConfiguration, UIMotionEffectGroup, NSLayoutConstraint, UILayoutGuide, NSShadow;


#import "_SMUTVStackedImageNamedLayerStack.h"

@interface SMUTVStackedImageView : UIView {
    UIImage *_staticImage;
    _UIStackedImageContainerLayer *_imageStackLayer;
    _UIStackedImageConfiguration *_imageStackConfig;
    _SMUTVStackedImageNamedLayerStack *_uiLayerStack;
    UIMotionEffectGroup *_motionEffectGroup;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    CGFloat _layerSelectionDuration;
    CGFloat _layerUnselectionDuration;
    CGFloat _shadowSelectionDuration;
    CGFloat _shadowUnselectionDuration;
    CGFloat _repositionUnselectionDuration;
}


@property (nonatomic) BOOL allowsNonOpaqueShadow;
@property (readonly, nonatomic) NSUInteger controlState;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL flatImageContainsCornerRadius;
@property (nonatomic) CGPoint focusDirection;
@property (readonly, nonatomic) UILayoutGuide *focusLayoutGuide; // ivar: _focusLayoutGuide
@property (nonatomic) CGFloat focusSizeIncrease;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isOverlayComposited) BOOL overlayComposited; // ivar: _overlayComposited
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (readonly, nonatomic) NSUInteger primaryControlState;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) UIView *unmaskedOverlayView; // ivar: _unmaskedOverlayView


-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg0 forMotionEffect:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_scaledSize;
-(void)_attachMotionEffects;
-(void)_commitLayerStack:(id)arg0 ;
-(void)_detachMotionEffects;
-(void)_loadImage;
-(void)_updateFocusLayoutGuideForControlState:(NSUInteger)arg0 ;
-(void)_updateLayerStack:(id)arg0 withImage:(struct CGImage *)arg1 size:(struct CGSize )arg2 ;
-(void)_updateMotionEffectsForState:(NSUInteger)arg0 ;
-(void)_updateStackedImageConfiguration;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif