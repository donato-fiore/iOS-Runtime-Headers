// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREPHOTOINTERNAL_H
#define AVCAPTUREPHOTOINTERNAL_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVCameraCalibrationData.h"
#import "AVCaptureResolvedPhotoSettings.h"
#import "AVCapturePhotoSettings.h"
#import "AVDepthData.h"
#import "AVPortraitEffectsMatte.h"
#import "AVSemanticSegmentationMatte.h"
#import "AVCaptureBracketedStillImageSettings.h"
#import "AVCapturePhotoPrivateClientMetadata.h"
#import "AVApplePortraitMetadata.h"

@interface AVCapturePhotoInternal : NSObject {
    ? timestamp;
    *__IOSurface photoSurface;
    NSUInteger photoSurfaceSize;
    NSString *processedFileType;
    *__CVBuffer photoPixelBuffer;
    *__CVBuffer previewPixelBuffer;
    *__CVBuffer embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    BOOL didTryToDecodeDepthData;
    AVPortraitEffectsMatte *portraitEffectsMatte;
    BOOL didTryToDecodePortraitEffectsMatte;
    AVSemanticSegmentationMatte *hairSegmentationMatte;
    BOOL didTryToDecodeHairSegmentationMatte;
    AVSemanticSegmentationMatte *skinSegmentationMatte;
    BOOL didTryToDecodeSkinSegmentationMatte;
    AVSemanticSegmentationMatte *teethSegmentationMatte;
    BOOL didTryToDecodeTeethSegmentationMatte;
    AVSemanticSegmentationMatte *glassesSegmentationMatte;
    BOOL didTryToDecodeGlassesSegmentationMatte;
    BOOL isRawPhoto;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    NSUInteger sequenceCount;
    NSUInteger photoCount;
    NSString *sourceDeviceType;
    unsigned int expectedPhotoProcessingFlags;
    unsigned int actualPhotoProcessingFlags;
    AVCapturePhotoPrivateClientMetadata *privateClientMetadata;
    AVApplePortraitMetadata *portraitMetadata;
    BOOL lensStabilizationSupported;
}






@end


#endif