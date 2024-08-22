// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESESSIONPARSEDVISIONDATASINKCONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDVISIONDATASINKCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigVisionDataCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject

@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration; // ivar: _videoDataConnectionConfiguration
@property (readonly, nonatomic) FigVisionDataCaptureConnectionConfiguration *visionDataConnectionConfiguration; // ivar: _visionDataConnectionConfiguration


-(void)dealloc;


@end


#endif