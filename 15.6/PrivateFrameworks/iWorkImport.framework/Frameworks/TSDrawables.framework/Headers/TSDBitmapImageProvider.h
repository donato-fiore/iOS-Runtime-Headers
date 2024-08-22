// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDBITMAPIMAGEPROVIDER_H
#define TSDBITMAPIMAGEPROVIDER_H

@class NSMutableDictionary, TSUOnce;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "TSDImageProvider.h"

@interface TSDBitmapImageProvider : TSDImageProvider {
    *CGImageSource mImageSource;
    *CGImage mImage;
    *CGImage mLargestSafeImage;
    NSMutableDictionary *mResampledImages;
    NSUInteger mImageGamut;
    CGSize mNaturalSize;
    NSInteger mOrientation;
    BOOL mIsOpaque;
    BOOL mIsValid;
    BOOL mIsRawImage;
    NSUInteger mDPI;
    NSObject<OS_dispatch_queue> *mImageQueue;
    TSUOnce *mCheckIfValidOnce;
    NSObject<OS_dispatch_semaphore> *mFlushableContentLock;
    BOOL mHasFlushableContent;
    NSUInteger mEstimatedSize;
}


@property (readonly, nonatomic) *CGImage CGImageOfAnySize;
@property (readonly, nonatomic) *CGImage CGImageOfLargestSafeSize;
@property (readonly, nonatomic) *CGImageSource CGImageSource;
@property (readonly, nonatomic) CGSize dpiAdjustedFillSize;
@property (readonly, nonatomic) NSUInteger imageDPI;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) NSInteger orientation;
@property (readonly, nonatomic) NSUInteger validationStatus; // ivar: mValidationStatus


+(id)TSUImageForImageData:(id)arg0 ;
+(struct CGImage *)CGImageForImageData:(id)arg0 ;
+(struct CGSize )naturalSizeForImageData:(id)arg0 ;
-(BOOL)i_hasFlushableContent;
-(BOOL)isValid;
-(BOOL)p_shouldScaleRetinaImages;
-(NSInteger)p_reciprocalScaleForImageSize:(struct CGSize )arg0 ;
-(NSUInteger)i_flushableMemoryEstimate;
-(NSUInteger)imageGamut;
-(struct CGImage *)CGImageForNaturalSize;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 inContext:(struct CGContext *)arg1 orContentsScaleProvider:(id)arg2 ;
-(struct CGImage *)CGImageResampledToSize:(struct CGSize )arg0 lowQuality:(BOOL)arg1 ;
-(struct CGImage *)p_createResampledImageWithReciprocalScale:(NSUInteger)arg0 ;
-(struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg0 ;
-(struct CGImage *)p_newImageOfSize:(struct CGSize )arg0 fromSource:(struct CGImageSource *)arg1 ;
-(struct CGImage *)p_resampledImageOfReciprocalScale:(NSUInteger)arg0 ;
-(struct CGImageSource *)p_newImageOfSize:(struct CGSize )arg0 ;
-(struct CGSize )dpiAdjustedNaturalSize;
-(struct CGSize )naturalSize;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)i_commonInit;
-(void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg0 andImage:(struct CGImage *)arg1 ;
-(void)p_configureRawBehaviorFromImageSource:(struct CGImageSource *)arg0 ;
-(void)p_loadFullSizedImageIfNecessary;
-(void)p_loadImageMetadata;
-(void)p_loadLargestSafeImageIfNecessary;
-(void)p_loadSourceRefIfNecessary;
-(void)p_updateEstimatedSize;


@end


#endif