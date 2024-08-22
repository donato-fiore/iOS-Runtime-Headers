// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMETADATASINKPIPELINECONFIGURATION_H
#define FIGCAPTUREMETADATASINKPIPELINECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    BOOL _mrcLowPowerModeEnabled;
    BOOL _useSceneClassifierToGateMetadataDetectors;
    ? _smartCameraPipelineVersion;
    BOOL _deferredPrepareEnabled;
    BOOL _previewEnabled;
    int _motionAttachmentsSource;
    BOOL _boxedMetadataEnabled;
    int _pearlModuleType;
    NSArray *_detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    int _inputRotationRelativeToSource;
}




-(void)dealloc;


@end


#endif