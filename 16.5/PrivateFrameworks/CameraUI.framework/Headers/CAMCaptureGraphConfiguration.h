// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTUREGRAPHCONFIGURATION_H
#define CAMCAPTUREGRAPHCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CAMSemanticStyle.h"
#import "CAMVideoThumbnailOutputConfiguration.h"

@interface CAMCaptureGraphConfiguration : NSObject

@property (readonly, nonatomic) NSInteger aspectRatioCrop; // ivar: _aspectRatioCrop
@property (readonly, nonatomic) NSInteger audioConfiguration; // ivar: _audioConfiguration
@property (readonly, nonatomic, getter=isCaptureMirrored) BOOL captureMirrored; // ivar: _captureMirrored
@property (readonly, nonatomic) NSInteger device; // ivar: _device
@property (readonly, nonatomic) NSInteger devicePosition;
@property (readonly, nonatomic) BOOL enableAutoFPSVideo; // ivar: _enableAutoFPSVideo
@property (readonly, nonatomic) BOOL enableContentAwareDistortionCorrection; // ivar: _enableContentAwareDistortionCorrection
@property (readonly, nonatomic) BOOL enableHDR10BitVideoIfSupported; // ivar: _enableHDR10BitVideoIfSupported
@property (readonly, nonatomic) BOOL enableRAWCaptureIfSupported; // ivar: _enableRAWCaptureIfSupported
@property (readonly, nonatomic) BOOL enableResponsiveShutter; // ivar: _enableResponsiveShutter
@property (readonly, nonatomic) NSInteger maximumPhotoResolution; // ivar: _maximumPhotoResolution
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSInteger photoEncodingBehavior; // ivar: _photoEncodingBehavior
@property (readonly, nonatomic) NSInteger photoQualityPrioritization; // ivar: _photoQualityPrioritization
@property (readonly, nonatomic) NSUInteger previewConfiguration; // ivar: _previewConfiguration
@property (readonly, nonatomic) NSArray *previewFilters; // ivar: _previewFilters
@property (readonly, nonatomic) NSInteger previewSampleBufferVideoFormat; // ivar: _previewSampleBufferVideoFormat
@property (readonly, nonatomic) CAMSemanticStyle *previewSemanticStyle; // ivar: _previewSemanticStyle
@property (readonly, nonatomic) NSUInteger semanticStyleSupport; // ivar: _semanticStyleSupport
@property (readonly, nonatomic) BOOL suspendLivePhotoCapture; // ivar: _suspendLivePhotoCapture
@property (readonly, nonatomic) NSInteger videoConfiguration; // ivar: _videoConfiguration
@property (readonly, nonatomic) NSInteger videoEncodingBehavior; // ivar: _videoEncodingBehavior
@property (readonly, nonatomic, getter=isVideoHDRSuspended) BOOL videoHDRSuspended; // ivar: _videoHDRSuspended
@property (readonly, nonatomic) NSInteger videoStabilizationStrength; // ivar: _videoStabilizationStrength
@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration; // ivar: _videoThumbnailOutputConfiguration


-(id)completeDescription;
-(id)description;
-(id)initWithCaptureMode:(NSInteger)arg0 captureDevice:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 audioConfiguration:(NSInteger)arg3 previewConfiguration:(NSUInteger)arg4 previewSampleBufferVideoFormat:(NSInteger)arg5 previewFilters:(id)arg6 videoThumbnailOutputConfiguration:(id)arg7 photoEncodingBehavior:(NSInteger)arg8 videoEncodingBehavior:(NSInteger)arg9 enableAutoFPSVideo:(BOOL)arg10 videoHDRSuspended:(BOOL)arg11 aspectRatioCrop:(NSInteger)arg12 photoQualityPrioritization:(NSInteger)arg13 enableHDR10BitVideoIfSupported:(BOOL)arg14 captureMirrored:(BOOL)arg15 enableRAWCaptureIfSupported:(BOOL)arg16 semanticStyleSupport:(NSUInteger)arg17 previewSemanticStyle:(id)arg18 enableContentAwareDistortionCorrection:(BOOL)arg19 enableResponsiveShutter:(BOOL)arg20 suspendLivePhotoCapture:(BOOL)arg21 videoStabilizationStrength:(NSInteger)arg22 maximumPhotoResolution:(NSInteger)arg23 ;
-(id)shortDescription;


@end


#endif