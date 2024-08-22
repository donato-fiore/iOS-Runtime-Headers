// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINE_H
#define FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINE_H

@class NSString, NSArray;
@protocol FigCaptureStillImageSinkPipeline;


#import "FigCaptureSinkPipeline.h"
#import "BWStillImageCoordinatorNode.h"
#import "BWCompressedShotBufferNode.h"
#import "BWStillImageSampleBufferSinkNode.h"
#import "BWStillImageBravoDisparityNode.h"
#import "BWDepthConverterNode.h"
#import "BWPortraitHDRStagingNode.h"

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline>

 {
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWCompressedShotBufferNode *_compressedShotBufferNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
}


@property (readonly, nonatomic) BWCompressedShotBufferNode *compressedShotBufferNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (readonly, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (readonly, nonatomic) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithConfiguration:(id)arg0 captureDevice:(id)arg1 sourceOutputsByPortType:(id)arg2 sourceSensorRawOutputsByPortType:(id)arg3 highResStillImageDimensions:(id)arg4 supplementalPointCloudCaptureDevice:(id)arg5 supplementalPointCloudSourceOutput:(id)arg6 captureStatusDelegate:(id)arg7 inferenceScheduler:(id)arg8 graph:(id)arg9 name:(id)arg10 ;
-(void)dealloc;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;


@end


#endif