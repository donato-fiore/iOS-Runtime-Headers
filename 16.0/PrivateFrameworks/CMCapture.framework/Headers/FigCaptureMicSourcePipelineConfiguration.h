// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREMICSOURCEPIPELINECONFIGURATION_H
#define FIGCAPTUREMICSOURCEPIPELINECONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "BWZoomCommandHandler.h"

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_micConfiguration;
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
    BOOL _flipStereoAudioCaptureChannels;
    NSString *_sessionPreset;
    BOOL _configuresAppAudioSession;
    BOOL _audioSourceNodeShouldCallEndInterruption;
    BOOL _clientOSVersionSupportsDecoupledIO;
    ? _clientAuditToken;
}




-(void)dealloc;


@end


#endif