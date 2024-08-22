// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESESSIONPARSEDVIDEODATASINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDVIDEODATASINKCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration; // ivar: _metadataObjectConnectionConfiguration
@property (readonly, nonatomic) int sourceDeviceType; // ivar: _sourceDeviceType
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration; // ivar: _videoDataConnectionConfiguration


-(void)dealloc;


@end


#endif