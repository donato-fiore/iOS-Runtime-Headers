// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURELIDARDEPTHPIPELINE_H
#define FIGCAPTURELIDARDEPTHPIPELINE_H

@class NSDictionary, NSString;


#import "FigCapturePipeline.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"
#import "BWVideoPointCloudSynchronizerNode.h"
#import "BWPointCloudDensificationNode.h"
#import "BWDepthRotatorNode.h"
#import "BWNodeOutput.h"

@interface FigCaptureLiDARDepthPipeline : FigCapturePipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_sensorIDStringsByPortType;
    FigDepthDataCaptureConnectionConfiguration *_depthDataCaptureConnectionConfiguration;
    int _rgbCameraHorizontalSensorBinningFactor;
    int _rgbCameraVerticalSensorBinningFactor;
    unsigned int _depthPixelFormat;
    BOOL _depthDataFilteringEnabled;
    ? _depthOutputDimensions;
    BWVideoPointCloudSynchronizerNode *_synchronizerNode;
    BWPointCloudDensificationNode *_pointCloudDensificationNode;
    BWDepthRotatorNode *_depthRotatorNode;
}


@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSString *rgbCameraSourceID; // ivar: _rgbCameraSourceID


+(void)initialize;
-(id)initWithCaptureDevice:(id)arg0 cameraInfoByPortType:(id)arg1 sensorIDStringsByPortType:(id)arg2 depthDataCaptureConnectionConfiguration:(id)arg3 videoSourceCaptureOutput:(id)arg4 pointCloudOutput:(id)arg5 graph:(id)arg6 name:(id)arg7 rgbCameraSourceID:(id)arg8 errorOut:(*int)arg9 ;
-(int)_buildLiDARDepthPipelineWithVideoSourceCaptureOutput:(id)arg0 pointCloudOutput:(id)arg1 graph:(id)arg2 ;
-(void)dealloc;


@end


#endif