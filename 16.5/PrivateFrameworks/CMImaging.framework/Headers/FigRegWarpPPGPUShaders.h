// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGREGWARPPPGPUSHADERS_H
#define FIGREGWARPPPGPUSHADERS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface FigRegWarpPPGPUShaders : NSObject {
    id<MTLComputePipelineState> *_downscaleImagePipeline;
    id<MTLComputePipelineState> *_copyImagePipeline;
    id<MTLComputePipelineState> *_boxFilterPipeline;
    id<MTLComputePipelineState> *_cornerResponsePipeline;
    id<MTLComputePipelineState> *_cornerDetectionFirstPass4x4Pipeline;
    id<MTLComputePipelineState> *_cornerDetectionFinalPassPipeline;
    id<MTLComputePipelineState> *_cornerMatchingPipeline;
    id<MTLComputePipelineState> *_homographyMinSamplesSolverPipeline;
    id<MTLComputePipelineState> *_affineMinSamplesSolverPipeline;
    id<MTLComputePipelineState> *_rigidMinSamplesSolverPipeline;
    id<MTLComputePipelineState> *_homographySolverUsingInliersPipeline;
    id<MTLComputePipelineState> *_reorderCornersPipeline;
}




-(id)initWithMetalContext:(id)arg0 ;


@end


#endif