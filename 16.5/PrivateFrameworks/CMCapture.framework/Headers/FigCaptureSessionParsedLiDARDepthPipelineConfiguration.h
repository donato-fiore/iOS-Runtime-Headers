// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESESSIONPARSEDLIDARDEPTHPIPELINECONFIGURATION_H
#define FIGCAPTURESESSIONPARSEDLIDARDEPTHPIPELINECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "FigCaptureSourceConfiguration.h"

@interface FigCaptureSessionParsedLiDARDepthPipelineConfiguration : NSObject

@property (readonly, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration; // ivar: _depthDataConnectionConfiguration
@property (readonly, nonatomic) FigCaptureSourceConfiguration *timeOfFlightCameraConfiguration; // ivar: _timeOfFlightCameraConfiguration


-(id)initWithTimeOfFlightCameraConfiguration:(id)arg0 depthDataConnectionConfiguration:(id)arg1 ;
-(void)dealloc;


@end


#endif