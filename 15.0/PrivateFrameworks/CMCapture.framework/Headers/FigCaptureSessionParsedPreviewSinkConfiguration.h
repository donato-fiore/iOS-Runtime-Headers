// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESESSIONPARSEDPREVIEWSINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDPREVIEWSINKCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject

@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration; // ivar: _depthDataConnectionConfiguration
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration; // ivar: _metadataObjectConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration; // ivar: _previewTimeMachineConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration; // ivar: _sceneClassifierConnectionConfiguration
@property (readonly, nonatomic) int sourceDeviceType; // ivar: _sourceDeviceType
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration; // ivar: _stillImageConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration; // ivar: _videoDataConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration; // ivar: _videoPreviewSinkConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration; // ivar: _videoThumbnailConnectionConfiguration


-(void)dealloc;


@end


#endif