// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREVIDEODATASINKPIPELINE_H
#define FIGCAPTUREVIDEODATASINKPIPELINE_H

@class NSString;


#import "FigCaptureRemoteQueueSinkPipeline.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigCaptureVISPipeline.h"
#import "BWPixelTransferNode.h"
#import "BWNodeOutput.h"

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
}




+(void)initialize;
-(void)dealloc;


@end


#endif