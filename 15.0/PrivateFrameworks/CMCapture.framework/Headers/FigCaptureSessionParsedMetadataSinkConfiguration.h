// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESESSIONPARSEDMETADATASINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDMETADATASINKCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration; // ivar: _metadataObjectConnectionConfiguration
@property (readonly, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations; // ivar: _movieFileDetectedObjectMetadataConnectionConfigurations
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration; // ivar: _movieFileVideoConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration; // ivar: _sceneClassifierConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration; // ivar: _videoDataConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration; // ivar: _videoPreviewSinkConnectionConfiguration


-(void)dealloc;


@end


#endif