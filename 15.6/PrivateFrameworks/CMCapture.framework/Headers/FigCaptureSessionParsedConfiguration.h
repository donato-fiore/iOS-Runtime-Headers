// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONPARSEDCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureSessionParsedMicSourceConfiguration.h"

@interface FigCaptureSessionParsedConfiguration : NSObject

@property (readonly, nonatomic) NSArray *audioDataSinkConnectionConfigurations; // ivar: _audioDataSinkConnectionConfigurations
@property (readonly, nonatomic) NSArray *audioFileSinkConnectionConfigurations; // ivar: _audioFileSinkConnectionConfigurations
@property (readonly, nonatomic) NSArray *cameraCalibrationDataSinkConnectionConfigurations; // ivar: _cameraCalibrationDataSinkConnectionConfigurations
@property (readonly, nonatomic) BOOL empty; // ivar: _empty
@property (readonly, nonatomic) NSArray *metadataSourceConfigurations; // ivar: _metadataSourceConfigurations
@property (readonly, nonatomic, getter=isMultiCamSession) BOOL multiCamSession; // ivar: _isMultiCamSession
@property (readonly, nonatomic) NSArray *parsedCameraSourceConfigurations; // ivar: _parsedCameraSourceConfigurations
@property (readonly, nonatomic) NSArray *parsedCinematographyConfigurations; // ivar: _parsedCinematographyConfigurations
@property (readonly, nonatomic) NSArray *parsedDepthDataSinkConfigurations; // ivar: _parsedDepthDataSinkConfigurations
@property (readonly, nonatomic) NSArray *parsedLiDARDepthPipelineConfigurations; // ivar: _parsedLiDARDepthPipelineConfigurations
@property (readonly, nonatomic) NSArray *parsedMetadataSinkConfigurations; // ivar: _parsedMetadataSinkConfigurations
@property (readonly, nonatomic) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration; // ivar: _parsedMicSourceConfiguration
@property (readonly, nonatomic) NSArray *parsedMovieFileSinkConfigurations; // ivar: _parsedMovieFileSinkConfigurations
@property (readonly, nonatomic) NSArray *parsedPreviewSinkConfigurations; // ivar: _parsedPreviewSinkConfigurations
@property (readonly, nonatomic) NSArray *parsedStillImageSinkConfigurations; // ivar: _parsedStillImageSinkConfigurations
@property (readonly, nonatomic) NSArray *parsedVideoDataSinkConfigurations; // ivar: _parsedVideoDataSinkConfigurations
@property (readonly, nonatomic) NSArray *parsedVisionDataSinkConfigurations; // ivar: _parsedVisionDataSinkConfigurations
@property (readonly, nonatomic) NSArray *pointCloudDataSinkConnectionConfigurations; // ivar: _pointCloudDataSinkConnectionConfigurations
@property (readonly, nonatomic) NSArray *videoThumbnailSinkConfigurations; // ivar: _videoThumbnailSinkConfigurations


+(void)initialize;
-(id)initWithSessionConfiguration:(id)arg0 clientSetsUserInitiatedCaptureRequestTime:(BOOL)arg1 restrictions:(id)arg2 ;
-(void)dealloc;


@end


#endif