// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESESSIONPARSEDCAMERASOURCECONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDCAMERASOURCECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigPointCloudDataCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject

@property (readonly, nonatomic) NSArray *cameraCalibrationDataConnectionConfigurations; // ivar: _cameraCalibrationDataConnectionConfigurations
@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration; // ivar: _depthDataConnectionConfiguration
@property (readonly, nonatomic) NSArray *metadataObjectConnectionConfigurations; // ivar: _metadataObjectConnectionConfigurations
@property (readonly, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations; // ivar: _movieFileDetectedObjectMetadataConnectionConfigurations
@property (readonly, nonatomic) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration; // ivar: _pointCloudDataConnectionConfiguration
@property (readonly, nonatomic) NSArray *previewDerivedConnectionConfigurations; // ivar: _previewDerivedConnectionConfigurations
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration; // ivar: _stillImageConnectionConfiguration
@property (readonly, nonatomic) NSArray *videoCaptureConnectionConfigurations; // ivar: _videoCaptureConnectionConfigurations
@property (readonly, nonatomic) NSArray *videoDataConnectionConfigurations; // ivar: _videoDataConnectionConfigurations
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration; // ivar: _videoPreviewSinkConnectionConfiguration
@property (readonly, nonatomic) NSArray *visionDataConnectionConfigurations; // ivar: _visionDataConnectionConfigurations


-(void)dealloc;


@end


#endif