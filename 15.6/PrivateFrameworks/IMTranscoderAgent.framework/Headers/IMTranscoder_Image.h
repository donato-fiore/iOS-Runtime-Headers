// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODER_IMAGE_H
#define IMTRANSCODER_IMAGE_H



#import "IMTranscoder.h"

@interface IMTranscoder_Image : IMTranscoder

@property (nonatomic) CGFloat overrideJPEGCompressionQuality; // ivar: _overrideJPEGCompressionQuality


+(BOOL)_canConvertPNGToJPEG:(struct CGImage *)arg0 ;
+(BOOL)_imageContainsTranslucentPixels:(struct CGImage *)arg0 ;
+(NSUInteger)findLargerDimensionFromImage:(struct CGImageSource *)arg0 withProperties:(id)arg1 toWidth:(*id)arg2 toHeight:(*id)arg3 ;
+(id)excludedUTIs;
+(id)findOrientationFromProperties:(id)arg0 ;
+(id)supportedUTIs;
-(BOOL)_isHEIFImageFormat:(struct __CFString *)arg0 ;
-(BOOL)_isWebPImageFormat:(struct __CFString *)arg0 ;
-(BOOL)_isWideGamutImage:(struct CGImageSource *)arg0 ;
-(NSInteger)shouldTranscodeTransfer:(id)arg0 transcoderUserInfo:(id)arg1 target:(NSInteger)arg2 utiType:(id)arg3 allowUnfilteredUTIs:(id)arg4 fileSizeLimit:(NSUInteger)arg5 ;
-(NSUInteger)_getImageWidth:(struct CGImageSource *)arg0 ;
-(id)_checkAndSaveImageData:(id)arg0 sourceURL:(id)arg1 inFormat:(struct __CFString *)arg2 withMaxByteSize:(NSUInteger)arg3 actualSize:(*NSUInteger)arg4 usedLengthIndex:(*int)arg5 currentIndex:(int)arg6 ;
-(id)_copyWideGamutImage:(struct CGImageSource *)arg0 sourceURL:(id)arg1 inFormat:(struct __CFString *)arg2 withMaxByteSize:(NSUInteger)arg3 maxDimension:(NSUInteger)arg4 actualSize:(*NSUInteger)arg5 telemetry:(id)arg6 ;
-(id)_getScaleFactorArray:(id)arg0 transferURL:(id)arg1 outputURLs:(id)arg2 ;
-(id)_newGeneratedImage:(struct CGImageSource *)arg0 sourceWidth:(id)arg1 sourceHeight:(id)arg2 sourceLength:(NSUInteger)arg3 sourceProps:(id)arg4 target:(NSInteger)arg5 hardwareEncoder:(id)arg6 inFormat:(struct __CFString *)arg7 fromFormat:(struct __CFString *)arg8 withMaxLength:(NSUInteger)arg9 withMaxCount:(NSUInteger)arg10 withCompressionQuality:(CGFloat)arg11 enforceMaxes:(BOOL)arg12 subsampling:(int)arg13 ;
-(id)_writeHEIFImage:(struct CGImageSource *)arg0 sourceURL:(id)arg1 inFormat:(struct __CFString *)arg2 withMaxByteSize:(NSUInteger)arg3 maxDimension:(NSUInteger)arg4 actualSize:(*NSUInteger)arg5 startingLengthIndex:(int)arg6 usedLengthIndex:(*int)arg7 telemetry:(id)arg8 ;
-(id)_writeImage:(struct CGImageSource *)arg0 sourceURL:(id)arg1 target:(NSInteger)arg2 hardwareEncoder:(id)arg3 inFormat:(struct __CFString *)arg4 fromFormat:(struct __CFString *)arg5 withMaxByteSize:(NSUInteger)arg6 maxDimension:(NSUInteger)arg7 actualSize:(*NSUInteger)arg8 startingLengthIndex:(int)arg9 usedLengthIndex:(*int)arg10 estimator:(id)arg11 telemetry:(id)arg12 ;
-(id)_writeImageData:(id)arg0 inFormat:(struct __CFString *)arg1 sourceURL:(id)arg2 ;
-(id)_writeRepresentationsForImage:(struct CGImageSource *)arg0 target:(NSInteger)arg1 sourceURL:(id)arg2 sizes:(id)arg3 maxDimension:(NSUInteger)arg4 srcUTI:(struct __CFString *)arg5 inFormat:(struct __CFString *)arg6 estimator:(id)arg7 telemetry:(id)arg8 ;
-(id)copyFramePropertiesFrom:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 inFormat:(struct __CFString *)arg2 outFormat:(struct __CFString *)arg3 ;
-(id)copyImagePropertiesFrom:(struct CGImageSource *)arg0 frameCount:(NSUInteger)arg1 withProps:(id)arg2 inFormat:(struct __CFString *)arg3 outFormat:(struct __CFString *)arg4 ;
-(void)_setWideGamutProperties:(id)arg0 scaledImage:(struct CGImage *)arg1 ;
-(void)copyAuxiliaryImagesFromImageSource:(struct CGImageSource *)arg0 toDestination:(struct CGImageDestination *)arg1 fromImageAtIndex:(NSUInteger)arg2 scaleFactor:(CGFloat)arg3 ;
-(void)transcodeFileTransfer:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;
-(void)validateFileTransfer:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif