// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESTILLIMAGESETTINGS_H
#define FIGCAPTURESTILLIMAGESETTINGS_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int HDRMode; // ivar: _HDRMode
@property (readonly, nonatomic) *float ISOs; // ivar: _ISOs
@property (nonatomic) BOOL autoDeferredProcessingEnabled; // ivar: _autoDeferredProcessingEnabled
@property (nonatomic) BOOL autoIntelligentDistortionCorrectionEnabled; // ivar: _autoIntelligentDistortionCorrectionEnabled
@property (nonatomic) BOOL autoRedEyeReductionEnabled; // ivar: _autoRedEyeReductionEnabled
@property (nonatomic, getter=isBeginMomentCaptureSettings) BOOL beginMomentCaptureSettings; // ivar: _beginMomentCaptureSettings
@property (readonly, nonatomic) unsigned int bracketImageCount; // ivar: _bracketImageCount
@property (readonly, nonatomic) int bracketType; // ivar: _bracketType
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes; // ivar: _bravoConstituentImageDeliveryDeviceTypes
@property (nonatomic) int bravoImageFusionMode; // ivar: _bravoImageFusionMode
@property (nonatomic) BOOL burstQualityCaptureEnabled; // ivar: _burstQualityCaptureEnabled
@property (nonatomic) BOOL bypassUpscaling; // ivar: _bypassUpscaling
@property (nonatomic) BOOL cameraCalibrationDataDeliveryEnabled; // ivar: _cameraCalibrationDataDeliveryEnabled
@property (readonly, nonatomic) NSString *captureRequestIdentifier; // ivar: _captureRequestIdentifier
@property (nonatomic, getter=isClientInitiatedPrepareSettings) BOOL clientInitiatedPrepareSettings; // ivar: _clientInitiatedPrepareSettings
@property (nonatomic) int clientQualityPrioritization; // ivar: _clientQualityPrioritization
@property (nonatomic) unsigned int deferredPhotoFinalHeight; // ivar: _deferredPhotoFinalHeight
@property (nonatomic) unsigned int deferredPhotoFinalWidth; // ivar: _deferredPhotoFinalWidth
@property (nonatomic) unsigned int deferredPhotoProxyHeight; // ivar: _deferredPhotoProxyHeight
@property (nonatomic) unsigned int deferredPhotoProxyWidth; // ivar: _deferredPhotoProxyWidth
@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (nonatomic) BOOL depthDataFiltered; // ivar: _depthDataFiltered
@property (nonatomic) BOOL deviceOrientationCorrectionEnabled; // ivar: _deviceOrientationCorrectionEnabled
@property (nonatomic) int digitalFlashMode; // ivar: _digitalFlashMode
@property (nonatomic) unsigned int downgradeOutputHeight; // ivar: _downgradeOutputHeight
@property (nonatomic) unsigned int downgradeOutputWidth; // ivar: _downgradeOutputWidth
@property (nonatomic) BOOL embedsDepthDataInImage; // ivar: _embedsDepthDataInImage
@property (nonatomic) BOOL embedsPortraitEffectsMatteInImage; // ivar: _embedsPortraitEffectsMatteInImage
@property (nonatomic) BOOL embedsSemanticSegmentationMattesInImage; // ivar: _embedsSemanticSegmentationMattesInImage
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs; // ivar: _enabledSemanticSegmentationMatteURNs
@property (readonly, nonatomic) *? exposureDurations; // ivar: _exposureDurations
@property (readonly, nonatomic) *float exposureTargetBiases; // ivar: _exposureTargetBiases
@property (nonatomic) int flashMode; // ivar: _flashMode
@property (nonatomic) NSString *imageGroupIdentifier; // ivar: _imageGroupIdentifier
@property (nonatomic) BOOL lensStabilizationDuringBracketEnabled; // ivar: _lensStabilizationDuringBracketEnabled
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDictionary *metadataForOriginalImage; // ivar: _metadataForOriginalImage
@property (nonatomic) BOOL noiseReductionEnabled; // ivar: _noiseReductionEnabled
@property (copy, nonatomic) NSArray *originalImageFilters; // ivar: _originalImageFilters
@property (nonatomic) int outputFileType; // ivar: _outputFileType
@property (nonatomic) unsigned int outputFormat; // ivar: _outputFormat
@property (readonly, nonatomic, getter=isOutputFormatCompressed) BOOL outputFormatCompressed;
@property unsigned int outputHeight; // ivar: _outputHeight
@property (nonatomic) BOOL outputMirroring; // ivar: _outputMirroring
@property (nonatomic) int outputOrientation; // ivar: _outputOrientation
@property (readonly, nonatomic) NSDictionary *outputPixelBufferAttributes;
@property unsigned int outputWidth; // ivar: _outputWidth
@property (nonatomic) int payloadType; // ivar: _payloadType
@property (nonatomic) BOOL portraitEffectsMatteDeliveryEnabled; // ivar: _portraitEffectsMatteDeliveryEnabled
@property (nonatomic) float portraitLightingEffectStrength; // ivar: _portraitLightingEffectStrength
@property (nonatomic) BOOL prefersStillImageShiftedToMatchSpatialOverCapturePreview; // ivar: _prefersStillImageShiftedToMatchSpatialOverCapturePreview
@property (nonatomic) BOOL previewEnabled; // ivar: _previewEnabled
@property (nonatomic) unsigned int previewFormat; // ivar: _previewFormat
@property unsigned int previewHeight; // ivar: _previewHeight
@property (nonatomic) BOOL previewMirroring; // ivar: _previewMirroring
@property (nonatomic) int previewOrientation; // ivar: _previewOrientation
@property (readonly, nonatomic) NSDictionary *previewPixelBufferAttributes;
@property unsigned int previewWidth; // ivar: _previewWidth
@property (copy, nonatomic) NSArray *processedImageFilters; // ivar: _processedImageFilters
@property (nonatomic) BOOL providesOriginalImage; // ivar: _providesOriginalImage
@property (nonatomic) int qualityPrioritization; // ivar: _qualityPrioritization
@property (nonatomic) int rawOutputFileType; // ivar: _rawOutputFileType
@property (nonatomic) unsigned int rawOutputFormat; // ivar: _rawOutputFormat
@property (nonatomic) BOOL rawThumbnailEnabled; // ivar: _rawThumbnailEnabled
@property (nonatomic) unsigned int rawThumbnailFormat; // ivar: _rawThumbnailFormat
@property unsigned int rawThumbnailHeight; // ivar: _rawThumbnailHeight
@property unsigned int rawThumbnailWidth; // ivar: _rawThumbnailWidth
@property (nonatomic) int resolutionFlavor; // ivar: _resolutionFlavor
@property (nonatomic) float scaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic) NSInteger settingsID; // ivar: _settingsID
@property (nonatomic) int settingsProvider; // ivar: _settingsProvider
@property (nonatomic) unsigned int shutterSound; // ivar: _shutterSound
@property (nonatomic) float simulatedAperture; // ivar: _simulatedAperture
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadata; // ivar: _spatialOverCaptureMetadata
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadataForOriginalImage; // ivar: _spatialOverCaptureMetadataForOriginalImage
@property (nonatomic) BOOL squareCropEnabled; // ivar: _squareCropEnabled
@property (nonatomic) CGFloat stillImageCaptureAbsoluteStartTime; // ivar: _stillImageCaptureAbsoluteStartTime
@property (nonatomic) NSInteger stillImageCaptureStartTime; // ivar: _stillImageCaptureStartTime
@property (nonatomic) NSInteger stillImageRequestTime; // ivar: _stillImageRequestTime
@property (nonatomic) ? stillImageUserInitiatedRequestPTS; // ivar: _stillImageUserInitiatedRequestPTS
@property (nonatomic) NSUInteger stillImageUserInitiatedRequestTime; // ivar: _stillImageUserInitiatedRequestTime
@property (nonatomic) BOOL thumbnailEnabled; // ivar: _thumbnailEnabled
@property (nonatomic) unsigned int thumbnailFormat; // ivar: _thumbnailFormat
@property unsigned int thumbnailHeight; // ivar: _thumbnailHeight
@property unsigned int thumbnailWidth; // ivar: _thumbnailWidth
@property (nonatomic, getter=isUserInitiatedRequestSettings) BOOL userInitiatedRequestSettings; // ivar: _userInitiatedRequestSettings
@property (nonatomic) float videoStabilizationOverscanCropMultiplier; // ivar: _videoStabilizationOverscanCropMultiplier
@property (copy, nonatomic) NSDictionary *vtCompressionProperties; // ivar: _vtCompressionProperties
@property (nonatomic) int wideColorMode; // ivar: _wideColorMode
@property (nonatomic, getter=isZoomWithoutUpscalingEnabled) BOOL zoomWithoutUpscalingEnabled; // ivar: _zoomWithoutUpscalingEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)figCaptureIrisPreparedSettingsRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingsID:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif