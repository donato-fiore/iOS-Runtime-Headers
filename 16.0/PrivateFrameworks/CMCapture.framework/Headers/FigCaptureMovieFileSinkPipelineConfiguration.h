// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREMOVIEFILESINKPIPELINECONFIGURATION_H
#define FIGCAPTUREMOVIEFILESINKPIPELINECONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigAudioCaptureConnectionConfiguration.h"
#import "FigMetadataItemCaptureConnectionConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    ? _depthOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigCaptureVideoTransform _videoSourceCaptureTransform;
    ? _visOutputDimensions;
    int _videoStabilizationType;
    BOOL _boxedMetadataPostVISEnabled;
    int _motionAttachmentsSource;
    ? _smartCameraPipelineVersion;
    BOOL _offlineVISEnabled;
    BOOL _vitalityScoringEnabled;
    BOOL _captureDeviceHasOverCaptureEnabled;
    BOOL _overCaptureEnabled;
    BOOL _frameReconstructionEnabled;
    BOOL _semanticStyleRenderingEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoSTFEnabled;
    BOOL _videoGreenGhostMitigationEnabled;
    float _videoStabilizationOverscanOverride;
    int _videoStabilizationStrength;
    NSString *_clientApplicationID;
    NSInteger _maximumAllowedInFlightCompressedBytes;
}




-(void)dealloc;


@end


#endif