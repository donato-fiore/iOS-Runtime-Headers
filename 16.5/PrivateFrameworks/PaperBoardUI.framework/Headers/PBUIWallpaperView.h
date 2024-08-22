// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERVIEW_H
#define PBUIWALLPAPERVIEW_H

@class UIView, _UILegibilitySettingsProvider, _UILegibilitySettings, UIColor, NSTimer, NSString, UIImage;
@protocol PTSettingsKeyObserver, PBUILegibilitySettingsProvider, PBUILegibilitySettingsProviderDelegate, PBUIWallpaperViewInternalObserver, PBUIWallpaperViewDelegate;


#import "PBUIWallpaperPrototypeSettings.h"
#import "PBUIWallpaperParallaxSettings.h"

@interface PBUIWallpaperView : UIView <PTSettingsKeyObserver, PBUILegibilitySettingsProvider>

 {
    PBUIWallpaperPrototypeSettings *_wallpaperSettings;
    UIView *_parallaxView;
    CGFloat _contentScaleFactor;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _generatingBlurredImages;
    PBUIWallpaperParallaxSettings *_parallaxSettings;
    BOOL _wantsRasterization;
    NSInteger _disallowRasterizationBlockCount;
}


@property (readonly, copy, nonatomic) NSString *cacheGroup; // ivar: _cacheGroup
@property (readonly, copy, nonatomic) NSString *cacheUniqueIdentifier;
@property (readonly, nonatomic, getter=isContentStatic) BOOL contentStatic;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL continuousColorSamplingEnabled; // ivar: _continuousColorSamplingEnabled
@property (readonly, nonatomic) CGRect cropRect;
@property (readonly, nonatomic) CGFloat cropZoomScale;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUILegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL handlesInactiveAppearanceTreatment;
@property (readonly, nonatomic) BOOL hasContentOutsideVisibleBounds;
@property (readonly, nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIWallpaperViewInternalObserver> *internalObserver; // ivar: _internalObserver
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) BOOL needsImmediateLayoutBeforeRotation;
@property (readonly, nonatomic) BOOL needsWallpaperDimmingTreatment; // ivar: _needsWallpaperDimmingTreatment
@property (nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (nonatomic, getter=isRotating) BOOL rotating; // ivar: _rotating
@property (nonatomic) BOOL sharesContentsAcrossVariants; // ivar: _sharesContentsAcrossVariants
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCropping;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (retain, nonatomic) UIImage *untreatedWallpaperImage; // ivar: _untreatedWallpaperImage
@property (nonatomic) NSInteger variant; // ivar: _variant
@property (readonly, copy, nonatomic) NSString *variantCacheIdentifier;
@property (nonatomic) BOOL wallpaperAnimationEnabled; // ivar: _wallpaperAnimationEnabled
@property (weak, nonatomic) NSObject<PBUIWallpaperViewDelegate> *wallpaperDelegate; // ivar: _wallpaperDelegate
@property (readonly, nonatomic) UIImage *wallpaperImage;
@property (readonly, nonatomic) NSInteger wallpaperMode; // ivar: _wallpaperMode
@property (readonly, copy, nonatomic) NSString *wallpaperName; // ivar: _wallpaperName
@property (readonly, nonatomic) NSInteger wallpaperType;
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


+(BOOL)_allowsRasterization;
+(BOOL)_shouldScaleForParallax;
+(BOOL)allowsParallax;
+(Class)wallpaperViewClassForConfiguration:(id)arg0 ;
+(Class)wallpaperViewClassForWallpaperType:(NSInteger)arg0 ;
-(BOOL)_dontUseShadow;
-(BOOL)_isParallaxActive;
-(BOOL)_isParallaxEnabled;
-(BOOL)_isParallaxMotionEnabled;
-(BOOL)_isVisible;
-(BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)arg0 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 ;
-(BOOL)wantsRasterization;
-(CGFloat)_contrastInContentViewRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(CGFloat)contentScaleFactor;
-(CGFloat)contrast;
-(CGFloat)contrastInRect:(struct CGRect )arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(id)_averageColorInContentViewRect:(struct CGRect )arg0 smudgeRadius:(CGFloat)arg1 ;
-(id)_backdrop_generateImageFromImage:(id)arg0 forBackdropParameters:(struct ? )arg1 includeTint:(BOOL)arg2 traitCollection:(id)arg3 ;
-(id)_blurredImage;
-(id)_blurredImageURL;
-(id)_cacheKeyForParameters:(struct ? )arg0 includingTint:(BOOL)arg1 downsampleFactor:(CGFloat)arg2 traitCollection:(id)arg3 ;
-(id)_computeAverageColor;
-(id)_displayedImage;
-(id)_fallbackImageWithOriginalSize:(struct CGSize )arg0 ;
-(id)_generateImageFromImage:(id)arg0 forBackdropParameters:(struct ? )arg1 includeTint:(BOOL)arg2 traitCollection:(id)arg3 ;
-(id)_imageForBackdropParameters:(struct ? )arg0 includeTint:(BOOL)arg1 overrideTraitCollection:(id)arg2 ;
-(id)_imageURLForBackdropParameters:(struct ? )arg0 includeTint:(BOOL)arg1 overrideTraitCollection:(id)arg2 ;
-(id)_material_generateImageFromImage:(id)arg0 forBackdropParameters:(struct ? )arg1 traitCollection:(id)arg2 ;
-(id)_primaryColorOverride;
-(id)averageColorInRect:(struct CGRect )arg0 withSmudgeRadius:(CGFloat)arg1 ;
-(id)blurredImage;
-(id)blurredImageURL;
-(id)imageForBackdropParameters:(struct ? )arg0 includeTint:(BOOL)arg1 overrideTraitCollection:(id)arg2 ;
-(id)imageURLForBackdropParameters:(struct ? )arg0 includeTint:(BOOL)arg1 overrideTraitCollection:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)snapshotImage;
-(id)snapshotImageURL;
-(void)_addParallax;
-(void)_applyParallaxSettings;
-(void)_beginDisallowRasterizationBlock;
-(void)_endDisallowRasterizationBlock;
-(void)_handleVariantChange;
-(void)_handleVisibilityChange;
-(void)_notifyBlursInvalidated;
-(void)_removeParallax;
-(void)_startGeneratingBlurredImages;
-(void)_stopGeneratingBlurredImages;
-(void)_updateContentViewScale;
-(void)_updateGeneratingBlurs;
-(void)_updateLegibilitySettingsForAverageColor:(id)arg0 force:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_updateParallax;
-(void)_updateRasterizationState;
-(void)_updateScaleFactor;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)preheatImageData;
-(void)prepareToAppear;
-(void)prepareToDisappear;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setGeneratesBlurredImages:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateLegibilitySettingsForAverageColor:(id)arg0 ;


@end


#endif