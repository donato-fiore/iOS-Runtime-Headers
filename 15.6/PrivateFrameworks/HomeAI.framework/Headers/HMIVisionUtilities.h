// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVISIONUTILITIES_H
#define HMIVISIONUTILITIES_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIVisionUtilities : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createJPEGDataFromPixelBuffer:(struct __CVBuffer *)arg0 scale:(float)arg1 encodeQuality:(float)arg2 error:(*id)arg3 ;
+(id)logCategory;
+(struct CGRect )applyPadding:(struct CGRect )arg0 withOriginalSize:(struct CGSize )arg1 padding:(struct CGSize )arg2 ;
+(struct CGRect )imposeMinSizeFor:(struct CGRect )arg0 withOriginalSize:(struct CGSize )arg1 minCrop:(struct CGSize )arg2 ;
+(struct CGRect )maintainAspectRatio:(struct CGRect )arg0 originalSize:(struct CGSize )arg1 ratioThreshold:(float)arg2 ;
+(struct __CVBuffer *)createPixelBufferFromImageData:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createPixelBufferFromJPEGData:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createPixelBufferFromJPEGDataProvider:(struct CGDataProvider *)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createPixelBufferFromJPEGPath:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createPixelBufferWithSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 useIOSurface:(BOOL)arg2 ;
+(struct __CVBuffer *)cropPixelBuffer:(struct __CVBuffer *)arg0 crop:(struct CGRect )arg1 error:(*id)arg2 ;
+(struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg0 size:(struct CGSize )arg1 error:(*id)arg2 ;
+(struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg0 size:(struct CGSize )arg1 pixelFormat:(unsigned int)arg2 options:(NSInteger)arg3 error:(*id)arg4 ;
+(struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg0 crop:(struct CGRect )arg1 size:(struct CGSize )arg2 pixelFormat:(unsigned int)arg3 options:(NSInteger)arg4 error:(*id)arg5 ;
+(struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg0 pixelFormat:(unsigned int)arg1 options:(NSInteger)arg2 error:(*id)arg3 ;
+(struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg0 rotationAngle:(float)arg1 crop:(struct CGRect )arg2 size:(struct CGSize )arg3 precision:(NSUInteger)arg4 error:(*id)arg5 ;
+(void)releaseCachedVisionResources;


@end


#endif