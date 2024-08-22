// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREIRISSINKCONFIGURATION_H
#define FIGCAPTUREIRISSINKCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding;


#import "FigCaptureSinkConfiguration.h"
#import "FigCaptureIrisPreparedSettings.h"

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration <NSSecureCoding>



@property (nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled; // ivar: _bravoConstituentPhotoDeliveryEnabled
@property (nonatomic) BOOL deferredProcessingEnabled; // ivar: _deferredProcessingEnabled
@property (nonatomic) BOOL demosaicedRawEnabled; // ivar: _demosaicedRawEnabled
@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (nonatomic) BOOL digitalFlashCaptureEnabled; // ivar: _digitalFlashCaptureEnabled
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs; // ivar: _enabledSemanticSegmentationMatteURNs
@property (nonatomic) BOOL fastCapturePrioritizationEnabled; // ivar: _fastCapturePrioritizationEnabled
@property (nonatomic) BOOL filterRenderingEnabled; // ivar: _filterRenderingEnabled
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled; // ivar: _intelligentDistortionCorrectionEnabled
@property (nonatomic) BOOL irisApplyPreviewShift; // ivar: _irisApplyPreviewShift
@property (nonatomic) BOOL irisFrameHarvestingEnabled; // ivar: _irisFrameHarvestingEnabled
@property (nonatomic) int irisMovieAutoTrimMethod; // ivar: _movieAutoTrimMethod
@property (nonatomic) BOOL irisMovieCaptureEnabled; // ivar: _movieCaptureEnabled
@property (nonatomic) BOOL irisMovieCaptureSuspended; // ivar: _movieCaptureSuspended
@property (nonatomic) ? irisMovieDuration; // ivar: _movieDuration
@property (nonatomic) ? irisMovieVideoFrameDuration; // ivar: _movieVideoFrameDuration
@property (retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings; // ivar: _preparedSettings
@property (nonatomic) ? maxPhotoDimensions; // ivar: _maxPhotoDimensions
@property (nonatomic) int maxQualityPrioritization; // ivar: _maxQualityPrioritization
@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled; // ivar: _momentCaptureMovieRecordingEnabled
@property (nonatomic) BOOL optimizesImagesForOfflineVideoStabilization; // ivar: _optimizesImagesForOfflineVideoStabilization
@property (nonatomic) BOOL portraitEffectsMatteDeliveryEnabled; // ivar: _portraitEffectsMatteDeliveryEnabled
@property (nonatomic) BOOL preservesIrisMovieCaptureSuspendedOnSessionStop; // ivar: _preservesIrisMovieCaptureSuspendedOnSessionStop
@property (nonatomic) BOOL previewQualityAdjustedPhotoFilterRenderingEnabled; // ivar: _previewQualityAdjustedPhotoFilterRenderingEnabled
@property (nonatomic) BOOL quadraHighResCaptureEnabled; // ivar: _quadraHighResCaptureEnabled
@property (nonatomic) BOOL semanticStyleRenderingEnabled; // ivar: _semanticStyleRenderingEnabled
@property (nonatomic) BOOL spatialOverCaptureEnabled; // ivar: _spatialOverCaptureEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif