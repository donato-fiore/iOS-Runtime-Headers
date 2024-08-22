// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LKTOPTICALFLOWGPU_H
#define LKTOPTICALFLOWGPU_H

@protocol MTLCommandQueue, MTLTexture;


#import "LKTOpticalFlow.h"
#import "LKTMetalContext.h"

@interface LKTOpticalFlowGPU : LKTOpticalFlow {
    LKTMetalContext *_mtlContext;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState>" _computePipelines;
    NSUInteger _maxThreadExecutionWidth;
    CGSize _pyramid_size;
    id<MTLTexture>"] _I_tex;
    id<MTLTexture>"] _I_u32_alias_tex;
    *__CVBuffer _G0_pxbuf;
    *__CVBuffer _G1_pxbuf;
    id<MTLTexture>" _G0_tex;
    id<MTLTexture>" _G1_tex;
    *__CVBuffer _C0_pxbuf;
    *__CVBuffer _C1_pxbuf;
    id<MTLTexture>" _C0_tex;
    id<MTLTexture>" _C1_tex;
    id<MTLBuffer>" _Adiagb_buf;
    id<MTLBuffer>" _Ixy_buf;
    *__CVBuffer _w_pxbuf;
    id<MTLTexture>" _w_tex;
    ? _uv_pxbuf;
    id<MTLTexture>"] _uv_tex;
    id<MTLTexture>"] _uv_u32_alias_tex;
    int _current_frame_index;
    id<MTLTexture> *_uv_tex_user_ref;
}




-(BOOL)_createImagePyramidWithCommandBuffer:(id)arg0 in_pixelbuf:(struct __CVBuffer *)arg1 I_idx:(int)arg2 error:(*id)arg3 ;
-(BOOL)_setupBufferAndReturnError:(*id)arg0 ;
-(BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg0 target:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(BOOL)estimateFlowStream:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)setOutputUV:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithMetalContext:(id)arg0 width:(int)arg1 height:(int)arg2 numScales:(int)arg3 ;
-(void)_computeFeaturesDerivativesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(void)_computeFeaturesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(void)_computeOpticalFlow;
-(void)_doNLRegularizationWithCommandBuffer:(id)arg0 in_uv_tex:(id)arg1 join_tex:(id)arg2 w_tex:(id)arg3 out_uv_tex:(id)arg4 ;
-(void)_doSolverWithCommandBuffer:(id)arg0 scale:(int)arg1 scale_xy_inv:(id)arg2 coeff:(id)arg3 in_uv_tex:(id)arg4 out_uv_texout_w_tex;
-(void)_downscale2XWithCommandBuffer:(id)arg0 in_u32_alias_tex:(id)arg1 out_u32_alias_tex:(id)arg2 ;
-(void)_initMemory:(int)arg0 height:(int)arg1 numScales:(int)arg2 ;
-(void)_setupPipelines;
-(void)_zeroFlowWithCommandBuffer:(id)arg0 uv_tex:(id)arg1 ;
-(void)dealloc;
-(void)waitUntilCompleted;


@end


#endif