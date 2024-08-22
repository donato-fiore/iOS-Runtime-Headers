// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREPHOTOSETTINGS_H
#define AVCAPTUREPHOTOSETTINGS_H

@class NSArray, NSDictionary, NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVCapturePhotoSettingsInternal.h"

@interface AVCapturePhotoSettings : NSObject <NSCopying>

 {
    AVCapturePhotoSettingsInternal *_internal;
}


@property (nonatomic, getter=isAutoContentAwareDistortionCorrectionEnabled) BOOL autoContentAwareDistortionCorrectionEnabled;
@property (nonatomic, getter=isAutoDualCameraFusionEnabled) BOOL autoDualCameraFusionEnabled;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic, getter=isAutoVirtualDeviceFusionEnabled) BOOL autoVirtualDeviceFusionEnabled;
@property (readonly, nonatomic) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) BOOL cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) BOOL depthDataDeliveryEnabled;
@property (nonatomic, getter=isDepthDataFiltered) BOOL depthDataFiltered;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) BOOL dualCameraDualPhotoDeliveryEnabled;
@property (copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property (nonatomic) BOOL embedsDepthDataInPhoto;
@property (nonatomic) BOOL embedsPortraitEffectsMatteInPhoto;
@property (nonatomic) BOOL embedsSemanticSegmentationMattesInPhoto;
@property (copy, nonatomic) NSArray *enabledSemanticSegmentationMatteTypes;
@property (nonatomic) NSInteger flashMode;
@property (readonly, copy) NSDictionary *format;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) BOOL highResolutionPhotoEnabled;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (copy, nonatomic) NSString *livePhotoVideoCodecType;
@property (nonatomic) ? maxPhotoDimensions;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) NSInteger photoQualityPrioritization;
@property (nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) BOOL portraitEffectsMatteDeliveryEnabled;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (readonly) NSString *processedFileType;
@property (copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property (readonly) NSString *rawFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) NSInteger uniqueID;
@property (copy, nonatomic) NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;


+(id)burstQualityPhotoSettings;
+(id)photoSettings;
+(id)photoSettingsFromMomentCaptureSettings:(id)arg0 withFormat:(id)arg1 ;
+(id)photoSettingsFromMomentCaptureSettings:(id)arg0 withRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 format:(id)arg3 ;
+(id)photoSettingsFromPhotoInitiationSettings:(id)arg0 format:(id)arg1 ;
+(id)photoSettingsFromPhotoSettings:(id)arg0 ;
+(id)photoSettingsWithFormat:(id)arg0 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned int)arg0 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned int)arg0 processedFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned int)arg0 rawFileType:(id)arg1 processedFormat:(id)arg2 processedFileType:(id)arg3 ;
+(void)initialize;
-(BOOL)arePreviewPhotoFormatDimensionsLimitedToDisplayDimensions;
-(BOOL)isAutoDeferredProcessingEnabled;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(BOOL)isBurstQualityCaptureEnabled;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(BOOL)isPrefersStillImageShiftedToMatchSpatialOverCapturePreview;
-(BOOL)isProcessedPhotoZoomWithoutUpscalingEnabled;
-(BOOL)isSquareCropEnabled;
-(BOOL)isTurboModeEnabled;
-(NSInteger)HDRMode;
-(NSInteger)digitalFlashMode;
-(NSUInteger)userInitiatedPhotoRequestTime;
-(id)HEICSFileURL;
-(id)_initWithFormat:(id)arg0 processedFileType:(id)arg1 rawPixelFormatType:(unsigned int)arg2 rawFileType:(id)arg3 burstQualityCaptureEnabled:(BOOL)arg4 uniqueID:(NSInteger)arg5 exceptionReason:(*id)arg6 ;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)adjustedPhotoFilters;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)photoFilters;
-(id)semanticStyle;
-(id)spatialOverCaptureGroupIdentifier;
-(id)spatialOverCaptureGroupIdentifierForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoContentIdentifier;
-(id)spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoMovieFileURL;
-(id)spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoMovieMetadata;
-(id)spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
-(id)spatialOverCaptureMetadata;
-(id)spatialOverCaptureMetadataForOriginalPhoto;
-(id)videoFileMetadata;
-(id)videoFileURL;
-(id)videoFormat;
-(struct CGSize )embeddedThumbnailCGSize;
-(struct CGSize )previewCGSize;
-(struct CGSize )rawEmbeddedThumbnailCGSize;
-(unsigned int)embeddedThumbnailFormatFourCC;
-(unsigned int)previewFormatFourCC;
-(unsigned int)rawEmbeddedThumbnailFormatFourCC;
-(unsigned int)shutterSound;
-(void)_setPropertiesFromMomentCaptureSettings:(id)arg0 ;
-(void)dealloc;
-(void)setAdjustedPhotoFilters:(id)arg0 ;
-(void)setAutoDeferredProcessingEnabled:(BOOL)arg0 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg0 ;
-(void)setDigitalFlashMode:(NSInteger)arg0 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg0 ;
-(void)setHDRMode:(NSInteger)arg0 ;
-(void)setHEICSFileURL:(id)arg0 ;
-(void)setLivePhotoContentIdentifier:(id)arg0 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg0 ;
-(void)setPhotoFilters:(id)arg0 ;
-(void)setPrefersStillImageShiftedToMatchSpatialOverCapturePreview:(BOOL)arg0 ;
-(void)setProcessedPhotoZoomWithoutUpscalingEnabled:(BOOL)arg0 ;
-(void)setSemanticStyle:(id)arg0 ;
-(void)setShutterSound:(unsigned int)arg0 ;
-(void)setSpatialOverCaptureLivePhotoMovieFileURL:(id)arg0 ;
-(void)setSpatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto:(id)arg0 ;
-(void)setSpatialOverCaptureLivePhotoMovieMetadata:(id)arg0 ;
-(void)setSpatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto:(id)arg0 ;
-(void)setSpatialOverCaptureMetadata:(id)arg0 ;
-(void)setSpatialOverCaptureMetadataForOriginalPhoto:(id)arg0 ;
-(void)setSquareCropEnabled:(BOOL)arg0 ;
-(void)setTurboModeEnabled:(BOOL)arg0 ;
-(void)setUserInitiatedPhotoRequestTime:(NSUInteger)arg0 ;
-(void)setVideoFileMetadata:(id)arg0 ;
-(void)setVideoFileURL:(id)arg0 ;
-(void)setVideoFormat:(id)arg0 ;


@end


#endif