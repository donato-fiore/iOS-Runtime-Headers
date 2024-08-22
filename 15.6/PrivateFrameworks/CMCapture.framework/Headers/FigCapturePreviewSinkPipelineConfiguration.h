// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREPREVIEWSINKPIPELINECONFIGURATION_H
#define FIGCAPTUREPREVIEWSINKPIPELINECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigMetadataObjectCaptureConnectionConfiguration.h"

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    ? _sceneClassifierPipelineVersion;
    int _sourceColorSpaceProperties;
    BOOL _sourcePixelFormatIsFullRange;
    BOOL _sourceIsBravoDevice;
    BOOL _clientIsCameraOrDerivative;
    BOOL _vitalityScoringEnabled;
    BOOL _displayPipeRequiresPacked10BitPixelFormatForP3Input;
    BOOL _deferredPrepareEnabled;
    BOOL _remoteVideoPreview;
    BOOL _overCaptureEnabled;
    BOOL _primaryCaptureRectModificationEnabled;
    CGFloat _videoStabilizationOverscan;
    BOOL _focusBlurMapForDepthFiltersEnabled;
    BOOL _depthFromMonocularNetworkEnabled;
    BOOL _smartCameraMotionDetectionEnabled;
    BOOL _generatesHistogram;
    BOOL _cinematicVideoEnabled;
    int _maxLossyCompressionLevel;
    BOOL _ispPreviewJitterCompensationEnabled;
}




-(void)dealloc;


@end


#endif