// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREREMOTEQUEUESINKPIPELINE_H
#define FIGCAPTUREREMOTEQUEUESINKPIPELINE_H



#import "FigCaptureSinkPipeline.h"
#import "BWRemoteQueueSinkNode.h"

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline

@property (readonly, nonatomic) BWRemoteQueueSinkNode *sinkNode; // ivar: _sinkNode


-(void)dealloc;


@end


#endif