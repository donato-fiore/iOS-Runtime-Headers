// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESESSIONPARSEDMICSOURCECONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDMICSOURCECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject

@property (readonly, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture; // ivar: _cameraConfigurationForStereoAudioCapture
@property (readonly, nonatomic) NSArray *micConnectionConfigurations; // ivar: _micConnectionConfigurations
@property (readonly, nonatomic) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfigurationForStereoAudioCapture; // ivar: _movieFileVideoConnectionConfigurationForStereoAudioCapture


-(void)dealloc;


@end


#endif