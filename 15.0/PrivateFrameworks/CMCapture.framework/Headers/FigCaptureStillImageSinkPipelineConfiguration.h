// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESTILLIMAGESINKPIPELINECONFIGURATION_H
#define FIGCAPTURESTILLIMAGESINKPIPELINECONFIGURATION_H

@class NSDictionary;


#import "FigCaptureBaseStillImageSinkPipelineConfiguration.h"

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {
    int _clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    BOOL _stillImageISPChromaNoiseReductionEnabled;
    BOOL _stereoFusionSupported;
    BOOL _isIrisSupported;
    BOOL _hdrSupported;
    BOOL _gnrHDRSupported;
}




-(void)dealloc;


@end


#endif