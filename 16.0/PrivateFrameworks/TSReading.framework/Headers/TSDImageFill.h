// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGEFILL_H
#define TSDIMAGEFILL_H

@class TSUFlushableCachedImage, TSUColor, NSString;
@protocol TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying, OS_dispatch_queue;


#import "TSDFill.h"
#import "TSPData.h"

@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>

 {
    TSUFlushableCachedImage *mStandardSizeTintedImage;
    TSUFlushableCachedImage *mHalfSizeTintedImage;
    TSUFlushableCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    *CGImage mTempRenderCopy;
    *CGImage mSourceOfTempRenderCopy;
    NSInteger mTempRenderCount;
}


@property (readonly, nonatomic) CGSize fillSize; // ivar: mFillSize
@property (readonly, retain, nonatomic) TSPData *imageData; // ivar: mImageData
@property (readonly, nonatomic) BOOL interpretsUntaggedImageDataAsGeneric; // ivar: mInterpretsUntaggedImageDataAsGeneric
@property (readonly, retain, nonatomic) TSPData *originalImageData; // ivar: mOriginalImageData
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) CGFloat scale;
@property (nonatomic) int technique; // ivar: mTechnique
@property (readonly, copy, nonatomic) TSUColor *tintColor; // ivar: mTintColor


+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 ;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)drawsInOneStep;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOpaque;
-(BOOL)p_shouldApplyTintedImage;
-(BOOL)shouldBeReappliedToCALayer:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(SEL)mapThemeAssetSelector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGenericImageData:(id)arg0 technique:(int)arg1 tintColor:(id)arg2 size:(struct CGSize )arg3 originalImageData:(id)arg4 ;
-(id)initWithImageData:(id)arg0 technique:(int)arg1 tintColor:(id)arg2 size:(struct CGSize )arg3 originalImageData:(id)arg4 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)p_cachedImageForSize:(struct CGSize )arg0 inContext:(struct CGContext *)arg1 orLayer:(id)arg2 ;
-(id)p_halfSizeCachedImage;
-(id)p_quarterSizeCachedImage;
-(id)p_standardSizeCachedImage;
-(id)p_validatedImageProvider;
-(id)referenceColor;
-(int)fillType;
-(struct CGImage *)p_newHalfSizeImage;
-(struct CGImage *)p_newQuarterSizeImage;
-(struct CGImage *)p_newStandardSizeImage;
-(struct CGImage *)p_newTintedImageWithScale:(CGFloat)arg0 ;
-(struct CGRect )p_drawnRectForImageSize:(struct CGSize )arg0 destRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
-(struct CGSize )p_sizeOfFillImageForDestRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(struct CGSize )renderedImageSizeForObjectSize:(struct CGSize )arg0 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 forShapeRep:(id)arg1 inContext:(struct CGContext *)arg2 ;
-(void)applyToCALayer:(id)arg0 withScale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)i_flushCaches;
-(void)p_drawBitmapImage:(struct CGImage *)arg0 withOrientation:(NSInteger)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect )arg3 ;
-(void)p_drawPDFWithProvider:(id)arg0 inContext:(struct CGContext *)arg1 bounds:(struct CGRect )arg2 ;
-(void)p_paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;


@end


#endif