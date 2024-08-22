// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESESSIONPARSEDMOVIEFILESINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDMOVIEFILESINKCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigAudioCaptureConnectionConfiguration.h"
#import "FigMetadataItemCaptureConnectionConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject

@property (readonly, nonatomic) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration; // ivar: _audioConnectionConfiguration
@property (readonly, nonatomic) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration; // ivar: _cameraDebugInfoMetadataConnectionConfiguration
@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration; // ivar: _depthDataConnectionConfiguration
@property (readonly, nonatomic) NSArray *detectedObjectMetadataConnectionConfigurations; // ivar: _detectedObjectMetadataConnectionConfigurations
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration; // ivar: _sceneClassifierConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration; // ivar: _stillImageConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration; // ivar: _videoConnectionConfiguration


-(void)dealloc;


@end


#endif