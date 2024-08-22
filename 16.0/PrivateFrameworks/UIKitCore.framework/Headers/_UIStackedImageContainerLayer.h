// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTACKEDIMAGECONTAINERLAYER_H
#define _UISTACKEDIMAGECONTAINERLAYER_H

@class CALayer, NSString, NSArray, CATransformLayer;
@protocol CALayerDelegate, UINamedLayerStack;


#import "_UIStackedImageLayerDelegate.h"
#import "UIView.h"
#import "_UIStackedImageConfiguration.h"

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate>

 {
    BOOL _animatingToNormalState;
    BOOL _animatingStateChange;
    CGFloat _selectionStartTime;
    CGFloat _selectionDuration;
    NSInteger _selectionStyle;
    CGFloat _idleModeFocusSizeOffset;
    CGSize _radiosityImageScale;
    BOOL _radiosityNeedsLayout;
    CGFloat _scale;
    NSString *_imageStackContentsGravity;
    CGFloat _radiosityRequestTime;
    CGFloat _rotationAmount;
    CGPoint _translationOffset;
    CGFloat _maximumParallaxDepth;
    BOOL _nonOpaqueShadow;
    BOOL _singleLayerNoMask;
    BOOL _layerStackSupportsInflation;
    BOOL _layerStackInflated;
    NSUInteger _layerStackInflationSeed;
    BOOL _deferredInflationPending;
    id *_flatImage;
    NSArray *_parallaxImages;
    NSArray *_parallaxLayerDepths;
    CALayer *_imageLayersContainer;
    NSArray *_imageLayers;
    CALayer *_flatLayer;
    CALayer *_maskLayer;
    CALayer *_radiosityLayer;
    CALayer *_selectedPlaceholderLayer;
    CALayer *_shadowLayer;
    CALayer *_unfocusedShadowLayer;
    CALayer *_specularLayer;
    CALayer *_cursorLayer;
    CALayer *_cursorLayerContainer;
    CALayer *_focusKeylineStrokeLayer;
    CALayer *_overlayLayer;
    CALayer *_overlayContainerLayer;
    CALayer *_unmaskedOverlayLayer;
    CALayer *_unmaskedOverlayContainerLayer;
    CATransformLayer *_imagePerspectiveTransformLayer;
    CATransformLayer *_imageRotationTransformLayer;
    CATransformLayer *_maskPerspectiveTransformLayer;
    CATransformLayer *_maskRotationTransformLayer;
    CATransformLayer *_unmaskedOverlayPerspectiveTransformLayer;
    CATransformLayer *_unmaskedOverlayRotationTransformLayer;
    CATransformLayer *_cursorRotationTransformLayer;
    CALayer *_frontmostPerspectiveTransformLayer;
    CATransformLayer *_frontmostRotationTransformLayer;
    _UIStackedImageLayerDelegate *_layoutDelegate;
    UIView *_animationView;
}


@property (retain, nonatomic) _UIStackedImageConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSUInteger controlState; // ivar: _controlState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint focusDirection; // ivar: _focusDirection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<UINamedLayerStack> *layerStack; // ivar: _layerStack
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;


+(struct CGSize )_scaledSizeForSize:(struct CGSize )arg0 focusSizeIncrease:(CGFloat)arg1 selectionStyle:(NSInteger)arg2 ;
-(BOOL)_aspectMatchesLayerStack;
-(BOOL)_configuredForNonOpaqueShadow;
-(BOOL)_isFocused;
-(BOOL)_isFocusedIdle;
-(BOOL)_isFocusedOrFocusedIdle;
-(BOOL)_isHighlighted;
-(BOOL)_isNormal;
-(BOOL)_radiosityEnabled;
-(CGFloat)_focusedScaleFactorForCurrentBounds;
-(CGFloat)_focusedShadowRadius;
-(CGFloat)_getShadowOpacity;
-(CGFloat)_idleModeFocusSizeOffset;
-(CGFloat)_unfocusedShadowRadius;
-(NSInteger)_selectionStyle;
-(NSUInteger)_primaryControlStateForState:(NSUInteger)arg0 ;
-(id)_contentLayers;
-(id)_flatLayer;
-(id)_imageLayersContainer;
-(id)_imageStackContentsGravity;
-(id)_layerBelowTitles;
-(id)_overlayLayer;
-(id)_parallaxLayerDepths;
-(id)_preferredLayoutDelegateForLayer:(id)arg0 ;
-(id)_randomImage;
-(id)_shadowLayer;
-(id)_unmaskedOverlayLayer;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(struct CATransform3D )_fixedFrameTransformForDepth:(CGFloat)arg0 fudgeFactor:(CGFloat)arg1 ;
-(struct CATransform3D )_perspectiveTransformForCurrentState;
-(struct CATransform3D )_rotationTransformForCurrentFocusDirection;
-(struct CATransform3D )_scaleTransformForCurrentState;
-(struct CATransform3D )_specularTransformForCurrentState;
-(struct CGImage *)_cgImageForLayeredImage:(id)arg0 ;
-(struct CGRect )_cursorBounds;
-(struct CGRect )_displayFrameForModelFrame:(struct CGRect )arg0 ;
-(struct CGRect )_positionAndSizeForLayerImage:(id)arg0 ;
-(struct CGSize )_focusCursorInsetSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )_roundedBoundsSize;
-(struct CGSize )_scaledSizeForCurrentState;
-(void)_applyFocusDirectionTransform;
-(void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg0 ;
-(void)_deselect;
-(void)_layoutRadiosityLayer;
-(void)_removeLayerFromSuperlayer:(id)arg0 ;
-(void)_resetAnimatingToNormalState;
-(void)_setDefaultParallaxLayerDepths;
-(void)_setFlatImage:(id)arg0 ;
-(void)_setIdleModeFocusSizeOffset:(CGFloat)arg0 ;
-(void)_setImageStackContentsGravity:(id)arg0 ;
-(void)_setOverlayLayer:(id)arg0 ;
-(void)_setParallaxImages:(id)arg0 ;
-(void)_setParallaxLayerDepths:(id)arg0 ;
-(void)_setSelectionStyle:(NSInteger)arg0 ;
-(void)_setUnmaskedOverlayLayer:(id)arg0 ;
-(void)_setupFrontmostTransformLayers;
-(void)_showImageLayers;
-(void)_updateContentProviderLayerFocusDirection;
-(void)_updateCornerRadiusFromConfig;
-(void)_updateFocusKeylineStrokeScale;
-(void)_updateFocusKeylineStrokeTranslation:(struct CGPoint )arg0 ;
-(void)_updateFullBleedImageLayers;
-(void)_updateImageLayerFilterChains;
-(void)_updateImageLayerFilterValues;
-(void)_updateLayerForSelection;
-(void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg0 ;
-(void)_updateNonOpaqueShadowStateFromLayerStack;
-(void)_updateNormalImageLayers;
-(void)_updateOverlayContainerLayerHierarchy:(BOOL)arg0 ;
-(void)_updateOverlayLayout;
-(void)_updatePerspective;
-(void)_updateRadiosityFromLayerStack;
-(void)_updateRotationAndTranslation:(id)arg0 ;
-(void)_updateShadowBounds;
-(void)_updateShadowPositionWithOffset:(struct CGPoint )arg0 ;
-(void)_updateShadowWithAnimationCoordinator:(id)arg0 ;
-(void)_updateSingleLayerNoMaskFromLayerStack;
-(void)_updateSpecularLayerContents;
-(void)_updateSpecularLayerContentsRect;
-(void)_wrapLayerInView:(id)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllAnimations;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setRasterizationScale:(CGFloat)arg0 ;


@end


#endif