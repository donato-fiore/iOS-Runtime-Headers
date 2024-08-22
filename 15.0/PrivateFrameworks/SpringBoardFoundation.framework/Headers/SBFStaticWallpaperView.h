// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFSTATICWALLPAPERVIEW_H
#define SBFSTATICWALLPAPERVIEW_H

@class UIImage, NSData, NSString, NSURL;


#import "SBFWallpaperView.h"
#import "SBFColorBoxes.h"

@interface SBFStaticWallpaperView : SBFWallpaperView {
    CGFloat _overallContrast;
    SBFColorBoxes *_colorBoxes;
}


@property (retain, nonatomic) SBFColorBoxes *colorBoxes;
@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage; // ivar: _displayedImage
@property (copy, nonatomic) NSData *displayedImageHashData; // ivar: _displayedImageHashData
@property (copy, nonatomic) NSString *displayedImageHashString; // ivar: _displayedImageHashString
@property (retain, nonatomic, getter=_displayedImageURL, setter=_setDisplayedImageURL:) NSURL *displayedImageURL; // ivar: _displayedImageURL
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage; // ivar: _sampleImage


+(BOOL)_allowsParallax;
+(BOOL)_allowsRasterization;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
-(BOOL)hasContentOutsideVisibleBounds;
-(BOOL)imageRequiresLuminanceTreatment;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)_contrastInContentViewRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(CGFloat)contrast;
-(CGFloat)contrastInRect:(struct CGRect )arg0 contrastWithinBoxes:(*CGFloat)arg1 contrastBetweenBoxes:(*CGFloat)arg2 ;
-(CGFloat)cropZoomScale;
-(NSInteger)wallpaperType;
-(float)_zoomScale;
-(id)_averageColorInContentViewRect:(struct CGRect )arg0 smudgeRadius:(CGFloat)arg1 ;
-(id)_computeAverageColor;
-(id)_createColorBoxes;
-(id)_wallpaperImageForAnalysis;
-(id)cacheUniqueIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 variant:(NSInteger)arg2 cacheGroup:(id)arg3 delegate:(id)arg4 options:(NSUInteger)arg5 ;
-(id)snapshotImage;
-(id)snapshotImageURL;
-(id)wallpaperImage;
-(struct CGSize )_imageSize;
-(void)_displayImage:(id)arg0 ;
// -(void)_generateImageForImage:(id)arg0 cacheKey:(id)arg1 options:(NSUInteger)arg2 downsampleFactor:(CGFloat)arg3 needsDimmingTreatment:(BOOL)arg4 averageColorProvider:(id)arg5 generationHandler:(unk)arg6  ;
-(void)_setUpStaticImageContentView:(id)arg0 ;
-(void)_setupContentViewWithOptions:(NSUInteger)arg0 ;
-(void)_setupWallpaperImageFromConfiguration:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_updateColorBoxesWithKey:(id)arg0 image:(id)arg1 ;
-(void)preheatImageData;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setCropRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 ;


@end


#endif