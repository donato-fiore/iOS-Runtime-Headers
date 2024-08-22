// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREMOVIEFILESINKPIPELINE_H
#define FIGCAPTUREMOVIEFILESINKPIPELINE_H

@class NSMutableArray;


#import "FigCaptureSinkPipeline.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigCaptureMovieFileSinkHeadPipeline.h"
#import "FigCaptureMovieFileSinkMiddlePipeline.h"

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    NSMutableArray *_movieFileSinkNodes;
    NSMutableArray *_videoCompressorNodes;
    NSMutableArray *_sdofCompressorNodes;
    BOOL _momentCaptureMovieRecordingEnabled;
    BOOL _overCaptureTailPipelineRenderingEnabled;
    BOOL _overCaptureEnabled;
}




+(void)initialize;
-(id)middlePipeline;
-(void)dealloc;


@end


#endif