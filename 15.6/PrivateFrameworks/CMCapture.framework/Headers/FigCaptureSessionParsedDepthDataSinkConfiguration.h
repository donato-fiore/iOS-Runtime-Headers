// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESESSIONPARSEDDEPTHDATASINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDDEPTHDATASINKCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigMetadataObjectCaptureConnectionConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration; // ivar: _depthDataConnectionConfiguration
@property (readonly, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration; // ivar: _metadataObjectConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration; // ivar: _videoDataConnectionConfiguration


-(void)dealloc;


@end


#endif