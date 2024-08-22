// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURERESOLVEDPHOTOSETTINGSINTERNAL_H
#define AVCAPTURERESOLVEDPHOTOSETTINGSINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVSemanticStyle.h"

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {
    NSInteger uniqueID;
    ? photoDimensions;
    ? rawPhotoDimensions;
    ? previewDimensions;
    ? embeddedThumbnailDimensions;
    ? rawEmbeddedThumbnailDimensions;
    BOOL livePhotoMovieEnabled;
    ? livePhotoMovieDimensions;
    ? portraitEffectsMatteDimensions;
    ? hairSegmentationMatteDimensions;
    ? skinSegmentationMatteDimensions;
    ? teethSegmentationMatteDimensions;
    ? glassesSegmentationMatteDimensions;
    ? spatialOverCapturePhotoDimensions;
    BOOL turboModeEnabled;
    BOOL flashEnabled;
    BOOL redEyeReductionEnabled;
    BOOL HDREnabled;
    BOOL adjustedPhotoFiltersEnabled;
    BOOL EV0PhotoDeliveryEnabled;
    BOOL stillImageStabilizationEnabled;
    BOOL virtualDeviceFusionEnabled;
    BOOL squareCropEnabled;
    ? deferredPhotoProxyDimensions;
    ? photoProcessingTimeRange;
    BOOL contentAwareDistortionCorrectionEnabled;
    NSArray *photoManifest;
    NSUInteger digitalFlashUserInterfaceHints;
    NSArray *digitalFlashUserInterfaceRGBEstimate;
    BOOL captureBeforeResolvingSettingsEnabled;
    AVSemanticStyle *semanticStyle;
}




-(void)dealloc;


@end


#endif