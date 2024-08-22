// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGEBUFFER_H
#define VNIMAGEBUFFER_H

@class CIImage, CIContext, NSDictionary;
@protocol VNSequencedRequestSupporting;

#import <Foundation/Foundation.h>

#import "VNImageSourceManager.h"

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting>

 {
    *__CVBuffer _origPixelBuffer;
    *CGImage _origCGImage;
    *__CFDictionary _pixelBufferReps;
    os_unfair_lock_s _pixelBufferRepsLock;
    CIImage *_origCIImage;
    CIContext *_passedInCIContext;
    *opaqueCMSampleBuffer _origSampleBuffer;
    VNImageSourceManager *_imageSourceManager;
    int _orientation;
    NSUInteger _origImageWidth;
    NSUInteger _origImageHeight;
    NSDictionary *_options;
}


@property (readonly) NSUInteger height;
@property (readonly) ? timingInfo;
@property (readonly) NSUInteger width;


+(id)createPixelBufferRepsCacheKeyForCropRect:(struct CGRect )arg0 format:(unsigned int)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
+(int)_helpReadOrientationFromOptionsDictionary:(id)arg0 ;
+(struct CGColorSpace *)copyColorspaceForFormat:(unsigned int)arg0 bitmapInfo:(*unsigned int)arg1 ;
+(struct CGRect )computeCenterCropRectFromCropRect:(struct CGRect )arg0 inImageSize:(struct CGSize )arg1 calculatedScaleX:(*CGFloat)arg2 calculatedScaleY:(*CGFloat)arg3 ;
+(struct __CFDictionary *)ioSurfaceBackedPixelBufferAttributes;
-(BOOL)getCameraIntrinsicsAvailable:(struct ? *)arg0 ;
-(BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint *)arg0 ;
-(BOOL)getPixelFocalLengthIfAvailable:(*float)arg0 ;
// -(BOOL)processInChunksOfSize:(NSUInteger)arg0 overlapFraction:(float)arg1 options:(id)arg2 roi:(struct CGRect )arg3 handler:(id)arg4 error:(unk)arg5  ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)augmentedBuffersWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 options:(id)arg3 augmentationOptions:(id)arg4 error:(*id)arg5 ;
-(id)augmentedCroppedBuffersWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 cropRect:(struct CGRect )arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(*id)arg6 ;
-(id)fileURL;
-(id)imageProperties;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg0 options:(id)arg1 ;
-(id)initWithCIImage:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithData:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)initWithURL:(id)arg0 orientation:(unsigned int)arg1 options:(id)arg2 ;
-(id)sequencedRequestPreviousObservationsKey;
-(int)orientation;
-(struct CGImage *)originalCGImage;
-(struct CGRect )makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect )arg0 ;
-(struct __CVBuffer *)bufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 options:(id)arg3 error:(*id)arg4 ;
-(struct __CVBuffer *)bufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 options:(id)arg3 error:(*id)arg4 pixelBufferRepsCacheKey:(*id)arg5 ;
-(struct __CVBuffer *)cachedPixelBufferRepresentationForKey:(id)arg0 ;
-(struct __CVBuffer *)createBufferWithMaxSideLengthOf:(NSUInteger)arg0 andPixelFormat:(unsigned int)arg1 andOptions:(id)arg2 error:(*id)arg3 ;
-(struct __CVBuffer *)createCroppedBufferWithMaxSideLengthOf:(NSUInteger)arg0 andCropBounds:(struct CGRect )arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(*id)arg4 ;
-(struct __CVBuffer *)cropAndScaleBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 cropRect:(struct CGRect )arg2 format:(unsigned int)arg3 imageCropAndScaleOption:(NSUInteger)arg4 options:(id)arg5 error:(*id)arg6 calculatedNormalizedOriginOffset:(struct CGPoint *)arg7 calculatedScaleX:(*CGFloat)arg8 calculatedScaleY:(*CGFloat)arg9 ;
-(struct __CVBuffer *)cropAndScaleBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 cropRect:(struct CGRect )arg2 format:(unsigned int)arg3 imageCropAndScaleOption:(NSUInteger)arg4 options:(id)arg5 error:(*id)arg6 calculatedNormalizedOriginOffset:(struct CGPoint *)arg7 calculatedScaleX:(*CGFloat)arg8 calculatedScaleY:(*CGFloat)arg9 pixelBufferRepsCacheKey:(*id)arg10 ;
-(struct __CVBuffer *)croppedBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 cropRect:(struct CGRect )arg3 options:(id)arg4 error:(*id)arg5 ;
-(struct __CVBuffer *)croppedBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 cropRect:(struct CGRect )arg3 options:(id)arg4 error:(*id)arg5 pixelBufferRepsCacheKey:(*id)arg6 ;
-(struct __CVBuffer *)originalPixelBuffer;
-(void)dealloc;
-(void)purgeCachedRepresentations;


@end


#endif