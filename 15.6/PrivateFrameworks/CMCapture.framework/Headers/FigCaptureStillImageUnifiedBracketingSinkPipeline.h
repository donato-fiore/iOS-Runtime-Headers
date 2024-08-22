// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINE_H
#define FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINE_H

@class NSString, NSArray;
@protocol FigCaptureStillImageSinkPipeline;


#import "FigCaptureSinkPipeline.h"
#import "BWStillImageCoordinatorNode.h"
#import "BWStillImageSampleBufferSinkNode.h"
#import "BWStillImageBravoDisparityNode.h"
#import "BWDepthConverterNode.h"
#import "BWPortraitHDRStagingNode.h"

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline>

 {
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
}


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
-(void)dealloc;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;


@end


#endif