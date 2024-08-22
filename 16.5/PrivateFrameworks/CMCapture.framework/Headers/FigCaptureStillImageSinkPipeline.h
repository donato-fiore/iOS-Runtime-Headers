// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESTILLIMAGESINKPIPELINE_H
#define FIGCAPTURESTILLIMAGESINKPIPELINE_H

@class NSString, NSArray;
@protocol FigCaptureStillImageSinkPipeline;


#import "FigCaptureSinkPipeline.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWStillImageCoordinatorNode.h"
#import "BWStillImageSampleBufferSinkNode.h"
#import "BWStillImageBravoDisparityNode.h"
#import "BWDepthConverterNode.h"
#import "BWPortraitHDRStagingNode.h"
#import "BWSISNode.h"
#import "BWCompressedShotBufferNode.h"

@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline>

 {
    BWFigVideoCaptureDevice *_captureDevice;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
    BWSISNode *_legacySISNode;
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
-(id)initWithConfiguration:(id)arg0 captureDevice:(id)arg1 sourceOutputsByPortType:(id)arg2 captureStatusDelegate:(id)arg3 inferenceScheduler:(id)arg4 graph:(id)arg5 name:(id)arg6 ;
-(void)dealloc;
-(void)enablePrepareTimeAllocationsForDeferredPrepare;


@end


#endif