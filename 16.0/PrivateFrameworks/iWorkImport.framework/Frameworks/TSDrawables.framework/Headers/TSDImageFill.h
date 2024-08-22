// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGEFILL_H
#define TSDIMAGEFILL_H

@class TSUColor, NSString, TSPData, NSArray;
@protocol TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying, OS_dispatch_queue;


#import "TSDFill.h"
#import "TSDImageFillCachedImage.h"

@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying>

 {
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    TSUColor *mCachedReferenceColor;
    BOOL mShouldSkipFurtherAttemptsToCalculateReferenceColor;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    *CGImage mTempRenderCopy;
    *CGImage mSourceOfTempRenderCopy;
    NSInteger mTempRenderCount;
}


@property (readonly, nonatomic) BOOL canCopyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize fillSize; // ivar: mFillSize
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) TSPData *imageData; // ivar: mImageData
@property (nonatomic, setter=p_setFillSize:) CGSize p_fillSize;
@property (retain, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
@property (nonatomic, setter=p_setTechnique:) NSUInteger p_technique;
@property (retain, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property (readonly, nonatomic) NSArray *referencedDataList;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) TSUColor *storedReferenceColor;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger technique; // ivar: mTechnique
@property (readonly, copy, nonatomic) TSUColor *tintColor; // ivar: mTintColor


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
-(BOOL)canApplyToRenderable;
-(BOOL)canApplyToRenderableByAddingSubrenderables;
-(BOOL)drawsInOneStep;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOpaque;
-(BOOL)p_shouldApplyTintedImage;
-(NSInteger)fillType;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithNewImageData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForUnarchiving;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithImageData:(id)arg0 technique:(NSUInteger)arg1 tintColor:(id)arg2 size:(struct CGSize )arg3 ;
-(id)initWithImageData:(id)arg0 technique:(NSUInteger)arg1 tintColor:(id)arg2 size:(struct CGSize )arg3 referenceColor:(id)arg4 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)p_cachedImageForSize:(struct CGSize )arg0 inContext:(struct CGContext *)arg1 orContentsScaleProvider:(id)arg2 ;
-(id)p_calculateReferenceColor;
-(id)p_halfSizeCachedImage;
-(id)p_quarterSizeCachedImage;
-(id)p_standardSizeCachedImage;
-(id)p_tintedImageWithScale:(CGFloat)arg0 ;
-(id)p_validatedImageProvider;
-(id)presetKind;
-(id)referenceColor;
-(id)referenceColorForFontArchiving;
-(struct CGRect )p_drawnRectForImageSize:(struct CGSize )arg0 destRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
-(struct CGSize )p_sizeOfFillImageForDestRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(struct CGSize )renderedImageSizeForObjectSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawFillInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 clippingToPath:(struct CGPath *)arg2 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)flushImageCache;
-(void)i_commonInit;
-(void)i_commonSetup;
-(void)i_updateStoredReferenceColorIfNeeded;
-(void)p_clearTintedImageCache;
-(void)p_drawBitmapImage:(struct CGImage *)arg0 withOrientation:(NSInteger)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect )arg3 ;
-(void)p_drawPDFWithProvider:(id)arg0 inContext:(struct CGContext *)arg1 bounds:(struct CGRect )arg2 ;
-(void)p_paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 rectForFill:(struct CGRect )arg2 ;
-(void)p_updateCachedReferenceColorIfNeeded;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif