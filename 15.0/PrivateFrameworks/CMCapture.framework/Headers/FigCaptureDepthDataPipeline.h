// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREDEPTHDATAPIPELINE_H
#define FIGCAPTUREDEPTHDATAPIPELINE_H

@class NSString;


#import "FigCaptureRemoteQueueSinkPipeline.h"
#import "BWDepthConverterNode.h"
#import "BWPipelineStage.h"
#import "BWNodeOutput.h"

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWDepthConverterNode *_depthDataConverterNode;
}


@property (readonly, nonatomic) BWPipelineStage *pipelineStage; // ivar: _pipelineStage
@property (readonly, nonatomic) int sourceDeviceType; // ivar: _sourceDeviceType
@property (readonly, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (readonly, nonatomic) BWNodeOutput *videoAndConvertedDepthDataOutput; // ivar: _videoAndConvertedDepthDataOutput


+(void)initialize;
-(id)initWithConfiguration:(id)arg0 sourceOutput:(id)arg1 graph:(id)arg2 name:(id)arg3 delegate:(id)arg4 ;
-(void)dealloc;


@end


#endif