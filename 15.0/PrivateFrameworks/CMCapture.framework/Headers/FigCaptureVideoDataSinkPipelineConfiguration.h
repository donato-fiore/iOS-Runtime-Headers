// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREVIDEODATASINKPIPELINECONFIGURATION_H
#define FIGCAPTUREVIDEODATASINKPIPELINECONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {
    FigCaptureVideoTransform _sourceVideoTransform;
    BOOL _sourceHasAppliedAllZoom;
    int _videoStabilizationType;
    int _motionAttachmentsSource;
    BOOL _faceTrackingEnabled;
    BOOL _offlineVISMotionDataEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _sourceNodeColorSpaceProperties;
    int _maxLossyCompressionLevel;
    BOOL _videoSTFEnabled;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    int _sourceDeviceType;
    ? _visOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    ? _clientAuditToken;
    NSDictionary *_colorInfo;
}




-(void)dealloc;


@end


#endif