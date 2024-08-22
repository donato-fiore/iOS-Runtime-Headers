// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREPHOTO_H
#define AVCAPTUREPHOTO_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AVCameraCalibrationData.h"
#import "AVDepthData.h"
#import "AVCapturePhotoInternal.h"
#import "AVPortraitEffectsMatte.h"
#import "AVCaptureResolvedPhotoSettings.h"

@interface AVCapturePhoto : NSObject

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVDepthData *depthData;
@property (readonly, nonatomic) ? dimensions;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly, nonatomic) AVCapturePhotoInternal *internal; // ivar: _internal
@property (readonly) NSDictionary *metadata;
@property (readonly) NSInteger photoCount;
@property (readonly) *__CVBuffer pixelBuffer;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) *__CVBuffer previewPixelBuffer;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) ? timestamp;


+(id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg0 codec:(unsigned int)arg1 unresolvedSettings:(id)arg2 ;
+(void)initialize;
-(BOOL)_isCompressedPhoto;
-(BOOL)_isProRAWPhoto;
-(BOOL)_isSushiRAWPhoto;
-(BOOL)_isUncompressedYUVOrRGBPhoto;
-(NSInteger)lensStabilizationStatus;
-(NSInteger)sequenceCount;
-(id)_defaultRawCompressionSettings;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg0 replacementEmbeddedThumbnailPhotoFormat:(id)arg1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg2 replacementDepthData:(id)arg3 replacementPortraitEffectsMatte:(id)arg4 replacementHairSegmentationMatte:(id)arg5 replacementSkinSegmentationMatte:(id)arg6 replacementTeethSegmentationMatte:(id)arg7 replacementGlassesSegmentationMatte:(id)arg8 replacementRawCompressionSettings:(id)arg9 exceptionReason:(*id)arg10 ;
-(id)bracketSettings;
-(id)debugDescription;
-(id)description;
-(id)fileDataRepresentation;
-(id)fileDataRepresentationWithCustomizer:(id)arg0 ;
-(id)fileDataRepresentationWithReplacementMetadata:(id)arg0 replacementEmbeddedThumbnailPhotoFormat:(id)arg1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg2 replacementDepthData:(id)arg3 ;
-(id)initWithTimestamp:(struct ? )arg0 photoSurface:(struct __IOSurface *)arg1 photoSurfaceSize:(NSUInteger)arg2 processedFileType:(id)arg3 previewPhotoSurface:(struct __IOSurface *)arg4 embeddedThumbnailSourceSurface:(struct __IOSurface *)arg5 metadata:(id)arg6 depthDataSurface:(struct __IOSurface *)arg7 depthMetadataDictionary:(id)arg8 portraitEffectsMatteSurface:(struct __IOSurface *)arg9 portraitEffectsMatteMetadataDictionary:(id)arg10 hairSegmentationMatteSurface:(struct __IOSurface *)arg11 hairSegmentationMatteMetadataDictionary:(id)arg12 skinSegmentationMatteSurface:(struct __IOSurface *)arg13 skinSegmentationMatteMetadataDictionary:(id)arg14 teethSegmentationMatteSurface:(struct __IOSurface *)arg15 teethSegmentationMatteMetadataDictionary:(id)arg16 glassesSegmentationMatteSurface:(struct __IOSurface *)arg17 glassesSegmentationMatteMetadataDictionary:(id)arg18 captureRequest:(id)arg19 bracketSettings:(id)arg20 sequenceCount:(NSUInteger)arg21 photoCount:(NSUInteger)arg22 expectedPhotoProcessingFlags:(unsigned int)arg23 sourceDeviceType:(id)arg24 ;
-(id)livePhotoMovieFileURL;
-(id)portraitMetadata;
-(id)privateClientMetadata;
-(id)processedFileType;
-(id)semanticSegmentationMatteForType:(id)arg0 ;
-(int)_maximumAppleProRAWBitDepth;
-(struct CGImage *)CGImageRepresentation;
-(struct CGImage *)previewCGImageRepresentation;
-(struct __CVBuffer *)_embeddedThumbnailSourcePixelBuffer;
-(unsigned int)_orientation;
-(unsigned int)actualPhotoProcessingFlags;
-(unsigned int)expectedPhotoProcessingFlags;
-(unsigned int)photoProcessingFlags;
-(void)dealloc;


@end


#endif