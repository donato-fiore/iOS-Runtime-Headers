// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREDEPTHDATAPIPELINECONFIGURATION_H
#define FIGCAPTUREDEPTHDATAPIPELINECONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "BWPipelineStage.h"
#import "FigCaptureSourceVideoFormat.h"

@interface FigCaptureDepthDataPipelineConfiguration : NSObject {
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    BOOL _depthConvertedUpstream;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoAndConvertedDepthDataOutputEnabled;
    BWPipelineStage *_pipelineStage;
    ? _clientAuditToken;
    int _depthDataBaseRotationDegrees;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureSourceVideoFormat *_requiredFormat;
    int _pearlModuleType;
}




-(void)dealloc;


@end


#endif