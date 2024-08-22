// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLURMAPSMOOTHING_H
#define BLURMAPSMOOTHING_H

@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTUtil.h"

@interface BlurMapSmoothing : NSObject {
    PTUtil *_portraitUtil;
    BOOL _shadersLoaded;
    CGSize _disparitySize;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState> *_smoothing_x_kernel;
    id<MTLComputePipelineState> *_smoothing_y_kernel;
    blurmap_smoothing_params _config_params;
    id<MTLTexture> *_intermediateTexture;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 disparitySize:(struct CGSize )arg2 debugRendering:(NSInteger)arg3 verbose:(BOOL)arg4 gpuProfiling:(BOOL)arg5 config:(id)arg6 ;
-(int)enqueueSmoothingPassWithCommandBuffer:(id)arg0 inputBlurMap:(id)arg1 referenceBlurMap:(id)arg2 intermediateTex:(id)arg3 outputBlurMap:(id)arg4 iterationIndex:(int)arg5 ;
-(int)enqueueSmoothingUsingForBlurMap:(id)arg0 outputBlurMap:(id)arg1 commandBuffer:(id)arg2 ;
-(int)loadShadersWithLibrary:(id)arg0 ;
-(void)dealloc;


@end


#endif