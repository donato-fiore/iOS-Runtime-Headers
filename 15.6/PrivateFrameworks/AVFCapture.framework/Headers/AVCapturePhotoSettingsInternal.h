// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREPHOTOSETTINGSINTERNAL_H
#define AVCAPTUREPHOTOSETTINGSINTERNAL_H

@class NSDictionary, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "AVSemanticStyle.h"

@interface AVCapturePhotoSettingsInternal : NSObject {
    NSDictionary *format;
    NSString *processedFileType;
    unsigned int rawPhotoPixelFormatType;
    NSString *rawFileType;
    NSInteger uniqueID;
    NSInteger flashMode;
    BOOL autoRedEyeReductionEnabled;
    NSInteger digitalFlashMode;
    NSInteger HDRMode;
    BOOL EV0PhotoDeliveryEnabled;
    NSInteger photoQualityPrioritization;
    BOOL photoQualityPrioritizationIsSetByClient;
    BOOL autoVirtualDeviceFusionEnabled;
    NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;
    BOOL highResolutionPhotoEnabled;
    BOOL depthDataDeliveryEnabled;
    BOOL embedsDepthDataInPhoto;
    BOOL depthDataFiltered;
    BOOL cameraCalibrationDataDeliveryEnabled;
    BOOL portraitEffectsMatteDeliveryEnabled;
    BOOL embedsPortraitEffectsMatteInPhoto;
    NSArray *enabledSemanticSegmentationMatteTypes;
    BOOL embedsSemanticSegmentationMattesInPhoto;
    NSDictionary *metadata;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSString *livePhotoVideoCodecType;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewPhotoFormat;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *rawEmbeddedThumbnailPhotoFormat;
    BOOL squareCropEnabled;
    BOOL turboModeEnabled;
    BOOL burstQualityCaptureEnabled;
    NSArray *photoFilters;
    NSArray *adjustedPhotoFilters;
    unsigned int shutterSound;
    NSUInteger userInitiatedPhotoRequestTime;
    BOOL autoDeferredProcessingEnabled;
    NSURL *HEICSFileURL;
    NSURL *videoFileURL;
    NSDictionary *videoFormat;
    NSArray *videoFileMetadata;
    BOOL autoSpatialOverCaptureEnabled;
    NSDictionary *spatialOverCaptureMetadata;
    NSURL *spatialOverCaptureLivePhotoMovieFileURL;
    NSArray *spatialOverCaptureLivePhotoMovieMetadata;
    NSString *spatialOverCaptureLivePhotoContentIdentifier;
    NSString *spatialOverCaptureGroupIdentifier;
    NSDictionary *spatialOverCaptureMetadataForOriginalPhoto;
    NSURL *spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
    NSArray *spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
    NSString *spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
    NSString *spatialOverCaptureGroupIdentifierForOriginalPhoto;
    BOOL processedPhotoZoomWithoutUpscalingEnabled;
    BOOL autoContentAwareDistortionCorrectionEnabled;
    AVSemanticStyle *semanticStyle;
    BOOL previewPhotoFormatDimensionsLimitedToDisplayDimensions;
    BOOL prefersStillImageShiftedToMatchSpatialOverCapturePreview;
    NSString *livePhotoContentIdentifier;
    NSString *livePhotoContentIdentifierForOriginalPhoto;
}






@end


#endif