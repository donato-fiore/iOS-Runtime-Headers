// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREVISIONDATASINKPIPELINE_H
#define FIGCAPTUREVISIONDATASINKPIPELINE_H

@class NSString;


#import "FigCaptureRemoteQueueSinkPipeline.h"
#import "BWFigVideoCaptureStream.h"

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureStream *_captureStream;
    NSString *_sourceID;
    int _sourceDeviceType;
}




+(void)initialize;
-(void)dealloc;


@end


#endif