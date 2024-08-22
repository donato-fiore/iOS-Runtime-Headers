// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESESSIONPARSEDSTILLIMAGESINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDSTILLIMAGESINKCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigPointCloudDataCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration; // ivar: _movieFileVideoConnectionConfiguration
@property (readonly, nonatomic) FigPointCloudDataCaptureConnectionConfiguration *pointCloudDataConnectionConfiguration; // ivar: _pointCloudDataConnectionConfiguration
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration; // ivar: _stillImageConnectionConfiguration


-(void)dealloc;


@end


#endif