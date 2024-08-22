// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIIMAGEVIEW_H
#define UIIMAGEVIEW_H

@class NSArray, NSString;
@protocol UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentLayoutTarget, _UIImageContentEffect;


#import "UIView.h"
#import "_UIImageContentLayout.h"
#import "UITraitCollection.h"
#import "_UIImageLoader.h"
#import "_UIStackedImageContainerView.h"
#import "UIImageSymbolConfiguration.h"
#import "UILayoutGuide.h"
#import "UIImage.h"
#import "UIColor.h"

@interface UIImageView : UIView <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentLayoutTarget, _UIImageContentEffect>

 {
    id *_storage;
    _UIImageContentLayout *_pendingImageContentLayout;
    UIEdgeInsets _cachedEdgeInsetsForEffects;
    UITraitCollection *_lastResolvedTraitCollection;
    NSInteger _lastResolvedLayoutDirectionTrait;
    CGFloat _previousBaselineOffsetFromBottom;
    CGFloat _previousFirstBaselineOffsetFromTop;
    ? _imageViewFlags;
}


@property (nonatomic, setter=_setAnimatesContents:) BOOL _animatesContents; // ivar: __animatesContents
@property (nonatomic, setter=_setDefaultRenderingMode:) NSInteger _defaultRenderingMode;
@property (readonly, nonatomic) UIEdgeInsets _edgeInsetsForEffects;
@property (nonatomic, setter=_setEdgeInsetsForEffectsAreValid:) BOOL _edgeInsetsForEffectsAreValid; // ivar: _edgeInsetsForEffectsAreValid
@property (nonatomic, setter=_setGuardAgainstDegenerateBaselineCalculation:) BOOL _guardAgainstDegenerateBaselineCalculation;
@property (readonly, nonatomic) BOOL _hasContentGravity;
@property (readonly, nonatomic) _UIImageLoader *_imageLoader;
@property (readonly, nonatomic) _UIStackedImageContainerView *_layeredImageContainer;
@property (nonatomic, setter=_setLayeredImageCornerRadius:) CGFloat _layeredImageCornerRadius;
@property (readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;
@property (nonatomic, setter=_setMasksTemplateImages:) BOOL _masksTemplateImages;
@property (retain, nonatomic, setter=_setOverridingSymbolConfiguration:) UIImageSymbolConfiguration *_overridingSymbolConfiguration;
@property (retain, nonatomic, setter=_setPlaceholderView:) UIView *_placeholderView;
@property (nonatomic, setter=_setSuppressPixelAlignment:) BOOL _suppressPixelAlignment;
@property (nonatomic, setter=_setSymbolImagesIgnoreAccessibilitySizes:) BOOL _symbolImagesIgnoreAccessibilitySizes; // ivar: __symbolImagesIgnoreAccessibilitySizes
@property (nonatomic, setter=_setTemplateImageRenderingEffects:) NSUInteger _templateImageRenderingEffects;
@property (readonly, nonatomic) BOOL _templateSettingsAreInvalid; // ivar: _templateSettingsAreInvalid
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) BOOL adjustsImageWhenAncestorFocused; // ivar: _adjustsImageWhenAncestorFocused
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) CGFloat animationDuration;
@property (copy, nonatomic) NSArray *animationImages;
@property (nonatomic) NSInteger animationRepeatCount;
@property (readonly, nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) UILayoutGuide *focusedFrameGuide; // ivar: _focusedFrameGuide
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSArray *highlightedAnimationImages;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIImage *image;
@property (readonly) UILayoutGuide *imageContentGuide;
@property (nonatomic) BOOL masksFocusEffectToContents; // ivar: _masksFocusEffectToContents
@property (readonly, nonatomic) UIView *overlayContentView;
@property (readonly, nonatomic) CGFloat preferredContentScaleFactor;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (readonly, nonatomic) NSInteger semanticContentAttribute;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;


+(BOOL)_canReuseIOSurface:(struct __IOSurface *)arg0 forRenderingCIImageWithIOSurfaceProperties:(id)arg1 ;
+(id)_sharedDecodingQueue;
+(id)_surfacePropertiesForRenderingCIImageWithSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 bytesPerElement:(NSUInteger)arg2 ;
-(BOOL)_canDrawContent;
-(BOOL)_displayImageAsLayered:(id)arg0 ;
-(BOOL)_getDrawModeCompositeOperation:(*int)arg0 whiteComponent:(*CGFloat)arg1 drawingAlpha:(*CGFloat)arg2 ;
-(BOOL)_hasBaseline;
-(BOOL)_hasInstalledContentsAnimation;
-(BOOL)_isHasBaselinePropertyChangeable;
-(BOOL)_needsImageEffectsForImage:(id)arg0 ;
-(BOOL)_needsImageEffectsForImage:(id)arg0 symbolConfiguration:(id)arg1 suppressColorizing:(BOOL)arg2 ;
-(BOOL)_recomputePretilingState;
-(BOOL)_resolveImageForTrait:(id)arg0 previouslyDisplayedImage:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize )arg0 oldSize:(struct CGSize )arg1 ;
-(BOOL)_shouldTreatImageAsTemplate:(id)arg0 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isTransparentFocusItem;
-(BOOL)scalesLargeContentImage;
-(BOOL)useBlockyMagnificationInClassic;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_scaleFactorForImage;
-(NSInteger)_effectiveRenderingModeForSource:(id)arg0 symbolConfiguration:(id)arg1 ;
-(NSUInteger)defaultAccessibilityTraits;
-(id)_activeImage;
-(id)_adaptiveImageForImage:(id)arg0 assignedImage:(id)arg1 currentImage:(id)arg2 hasAdapted:(*BOOL)arg3 ;
-(id)_applyImageEffectsToCIImage:(id)arg0 effectiveTintColor:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg0 ;
-(id)_checkHighlightedImageForAdaptation:(id)arg0 hadAdapted:(*BOOL)arg1 ;
-(id)_checkImageForAdaptation:(id)arg0 hasAdapted:(*BOOL)arg1 ;
-(id)_colorSymbolConfigurationAddingTintColor:(id)arg0 ;
-(id)_contentsMultiplyColorForEffectiveTintColor:(id)arg0 ;
-(id)_currentAnimationKeyframeImage;
-(id)_currentHighlightedImage;
-(id)_currentImage;
-(id)_decompressingImageForType:(NSUInteger)arg0 ;
-(id)_effectForRenderingSource:(id)arg0 ;
-(id)_effectiveTintColorWithImage:(id)arg0 symbolConfiguration:(id)arg1 ;
-(id)_existingOverlayView;
-(id)_generateBackdropMaskImage;
-(id)_imageContentGuideAllowingCreation:(BOOL)arg0 ;
-(id)_imageResolvingTraitCollectionForTraitCollection:(id)arg0 layoutDirection:(NSInteger)arg1 ;
-(id)_layoutForImage:(id)arg0 inSize:(struct CGSize )arg1 ;
-(id)_layoutForImage:(id)arg0 inSize:(struct CGSize )arg1 cachePerSize:(BOOL)arg2 forBaselineOffset:(BOOL)arg3 ;
-(id)_renditionForSource:(id)arg0 size:(struct CGSize )arg1 symbolConfiguration:(id)arg2 withRenditionResult:(id)arg3 lazy:(BOOL)arg4 ;
-(id)_resolvedImageFromImage:(id)arg0 ;
-(id)_resolvedImageFromImage:(id)arg0 forTrait:(id)arg1 ;
-(id)_symbolConfigurationForImage:(id)arg0 ;
-(id)_symbolConfigurationForSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(id)largeContentImage;
-(id)midlineGuide;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_ancestorWillUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_applySettingsForLegibilityStyle:(NSInteger)arg0 ;
-(void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(BOOL)arg0 ;
-(void)_cleanUpForStopAnimating;
-(void)_clearPretiledImageCacheForImage:(id)arg0 ;
-(void)_configureForLayeredImage:(id)arg0 ;
-(void)_decodeQ_imageLoader:(id)arg0 decodeImage:(id)arg1 layout:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didStopBeingDisplayedInPointerContentEffect;
-(void)_drawImageEffectsForImage:(id)arg0 inRect:(struct CGRect )arg1 effectiveTintColor:(id)arg2 ;
-(void)_handlePendingImageLayout:(id)arg0 ;
-(void)_invalidateImageLayouts;
-(void)_invalidateTemplateSettings;
-(void)_kickoffQ_beginLoadingWithImageLoader:(id)arg0 ;
-(void)_loadImage:(id)arg0 delegate:(id)arg1 ;
-(void)_loadImageWithURL:(id)arg0 ;
-(void)_mainQ_beginLoadingIfApplicable;
-(void)_mainQ_imageLoader:(id)arg0 finishedOrSkippedDecodingImage:(id)arg1 layout:(id)arg2 ;
-(void)_mainQ_imageLoader:(id)arg0 finishedWithImage:(id)arg1 error:(id)arg2 ;
-(void)_mainQ_resetForLoader:(id)arg0 delegate:(id)arg1 ;
-(void)_removeLayerAnimations;
-(void)_setDecompressingImage:(id)arg0 forType:(NSUInteger)arg1 ;
-(void)_setLayeredImageContainer:(id)arg0 ;
-(void)_setViewGeometry:(struct CGRect )arg0 forMetric:(int)arg1 ;
-(void)_stopLoading;
-(void)_teardownLayeredImage;
-(void)_templateSettingsDidChange;
-(void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg0 ;
-(void)_updateImageViewForOldImage:(id)arg0 newImage:(id)arg1 ;
-(void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg0 focusAnimationCoordinator:(id)arg1 ;
-(void)_updateMasking;
-(void)_updateMaterialForImage:(id)arg0 ;
-(void)_updatePretiledImageCacheForImage:(id)arg0 ;
-(void)_updateResolvedImage;
-(void)_updateState;
-(void)_updateTemplateProperties;
-(void)_updateVisibilityAndFrameOfPlaceholderView;
-(void)_willBeginBeingDisplayedInPointerContentEffect;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCGImageRef:(struct CGImage *)arg0 ;
-(void)setContentScaleFactor:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif