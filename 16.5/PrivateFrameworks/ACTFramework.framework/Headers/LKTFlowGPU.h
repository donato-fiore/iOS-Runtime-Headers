// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LKTFLOWGPU_H
#define LKTFLOWGPU_H

@class FigMetalContext;
@protocol MTLCommandQueue, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>


@interface LKTFlowGPU : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState>" _computePipelines;
    NSUInteger _maxThreadExecutionWidth;
    CGSize _ref_pyr_size;
    CGSize _aux_pyr_size;
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
    id<MTLBuffer> *_idt_buf;
    *__CVBuffer _w_pxbuf;
    id<MTLTexture>" _w_tex;
    ? _uv_fwd_pxbuf;
    ? _uv_bwd_pxbuf;
    id<MTLTexture>"] _uv_fwd_tex;
    id<MTLTexture>"] _uv_bwd_tex;
    id<MTLTexture>"] _uv_fwd_u32_alias_tex;
    id<MTLTexture>"] _uv_bwd_u32_alias_tex;
    int _current_frame_index;
    id<MTLTexture> *_uv_fwd_tex_user_ref;
    id<MTLTexture> *_uv_bwd_tex_user_ref;
    id<MTLBuffer> *_kpt_buf;
    id<MTLBuffer> *_icp_param_tform_buf;
    id<MTLBuffer> *_icp_param_tform_extra_buf;
    id<MTLBuffer> *_icp_loss_buf;
    id<MTLBuffer> *_icp_reduc_buf;
    float _icp_regularizer_term;
    id<MTLTexture> *_w_icp_tex_user_ref;
    id<MTLTexture> *_icp_derivatives_tg_sum;
    id<MTLTexture> *_icp_active_tg_indices_tex;
}


@property (readonly, nonatomic) CGSize aux_size; // ivar: _aux_size
@property (nonatomic) int decimation_factor_icp; // ivar: _decimation_factor_icp
@property (nonatomic) int flow_upper_most_scale; // ivar: _flow_upper_most_scale
@property (nonatomic) int inputPixelFormat; // ivar: _inputPixelFormat
@property (nonatomic) BOOL isBidirectional; // ivar: _isBidirectional
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSObject<MTLBuffer> *keypoints;
@property (nonatomic) int nlreg_padding; // ivar: _nlreg_padding
@property (nonatomic) int nlreg_radius; // ivar: _nlreg_radius
@property (nonatomic) float nlreg_sigma_c; // ivar: _nlreg_sigma_c
@property (nonatomic) float nlreg_sigma_l; // ivar: _nlreg_sigma_l
@property (nonatomic) float nlreg_sigma_w; // ivar: _nlreg_sigma_w
@property (readonly, nonatomic) int nscales; // ivar: _nscales
@property (readonly, nonatomic) int nscales_icp; // ivar: _nscales_icp
@property (nonatomic) int nwarpings; // ivar: _nwarpings
@property (nonatomic) parametric_transform p; // ivar: _p
@property (readonly, nonatomic) CGSize ref_size; // ivar: _ref_size
@property (readonly, nonatomic) int streamFrameCount; // ivar: _streamFrameCount
@property (nonatomic) BOOL useNonLocalRegularization; // ivar: _useNonLocalRegularization
@property (nonatomic) int warping_scheme_icp; // ivar: _warping_scheme_icp


+(void)_computeScalingFactor:(id)arg0 dst_tex:(id)arg1 scale_xy_inv:(**float)arg2 coeff;
-(id)initWithMetalContext:(id)arg0 ICPtransform:(NSInteger)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4 flowUpperMostScale:(int)arg5 ;
-(id)initWithMetalContext:(id)arg0 width:(int)arg1 height:(int)arg2 nscales:(int)arg3 ;
-(int)_computeActiveThreadgroupsWithCommandBuffer:(id)arg0 ;
-(int)_computeFeaturesAndTGSumWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_computeFeaturesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_computeHomographyWithCommandBuffer:(id)arg0 in_tex0:(id)arg1 in_tex1:(id)arg2 in_tex2:(id)arg3 weight_tex:(id)arg4 regularizer_term:(float)arg5 decimation_factor:(NSUInteger)arg6 scale:(NSUInteger)arg7 nwarp:(NSUInteger)arg8 ;
-(int)_computeICPResiduals:(id)arg0 flow:(id)arg1 ;
-(int)_computeICPWeights:(id)arg0 weights:(id)arg1 flow:(id)arg2 ;
-(int)_createImagePyramidWithCommandBuffer:(id)arg0 in_pixelbuf:(struct __CVBuffer *)arg1 I_idx:(int)arg2 ;
-(int)_doNLRegularizationWithCommandBuffer:(id)arg0 in_uv_tex:(id)arg1 join_tex:(id)arg2 w_tex:(id)arg3 out_uv_tex:(id)arg4 ;
-(int)_doSolverWithCommandBuffer:(id)arg0 scale:(int)arg1 in_uv_tex:(id)arg2 in_G0_tex:(id)arg3 in_G1_tex:(id)arg4 in_C0_tex:(id)arg5 in_C1_tex:(id)arg6 out_uv_tex:(id)arg7 out_w_tex:(id)arg8 ;
-(int)_downscale2XWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_enqueueFlowConsistencyWithCommandBuffer:(id)arg0 in_uv0_tex:(id)arg1 in_uv1_tex:(id)arg2 out_uv_tex:(id)arg3 ;
-(int)_enqueueKeypointsFromFlowWithCommandBuffer:(id)arg0 in_uv_fwd_tex:(id)arg1 in_uv_bwd_tex:(id)arg2 out_kpt_buf:(id)arg3 block_size:(int)arg4 bidirectional_error:(float)arg5 out_num_keypoints:(*unsigned short)arg6 ;
-(int)_getICPNWarp:(int)arg0 scale:(int)arg1 ;
-(int)_initICPWeightsWithCommandBuffer:(id)arg0 ;
-(int)_initMemory:(int)arg0 height:(int)arg1 nscales:(int)arg2 ;
-(int)_initMemoryICP:(int)arg0 ;
-(int)_panoRegistration:(struct ? )arg0 metadata:(id)arg1 ;
-(int)_resampleTransformWithCommandBuffer:(id)arg0 from:(id)arg1 to:(id)arg2 ;
-(int)_zeroFlowWithCommandBuffer:(id)arg0 uv_tex:(id)arg1 ;
-(int)computeKeypointsFromForwardFlow:(struct __CVBuffer *)arg0 backwardFlow:(struct __CVBuffer *)arg1 bidirectionalError:(float)arg2 blockSize:(int)arg3 outNumKeypoints:(*unsigned short)arg4 ;
-(int)estimateFlowFromReference:(struct __CVBuffer *)arg0 target:(struct __CVBuffer *)arg1 ;
-(int)estimateFlowStream:(struct __CVBuffer *)arg0 ;
-(int)estimatePanoRegistration:(struct __CVBuffer *)arg0 metadata:(id)arg1 initTForm:(struct ? )arg2 ;
-(int)getMaxNumberOfScales;
-(int)resetCurrentFrameIndex;
-(int)setICPWeights:(id)arg0 ;
-(int)setOutputUV:(struct __CVBuffer *)arg0 ;
-(int)setOutputUVForward:(struct __CVBuffer *)arg0 backward:(struct __CVBuffer *)arg1 ;
-(struct ? )getParametricTransform;
-(void)_computeICPThreadgroupsForActivation:(struct ? *)arg0 ;
-(void)_computeICPThreadgroupsForDecimation:(NSUInteger)arg0 threadsPerThreadgroupForUniform:(struct ? *)arg1 threadsPerThreadgroupForPass1:(struct ? *)arg2 threadgroupsPerGridForPass1:(struct ? *)arg3 ;
-(void)_computeICPThreadgroupsWithSize:(struct ? )arg0 computePipeline:(id)arg1 threadsPerThreadgroup:(struct ? *)arg2 threadgroupsPerGrid:(struct ? *)arg3 debug_string:(char *)arg4 ;
-(void)_computeICPThreadgroupsWithSize:(struct CGSize )arg0 threadsPerThreadgroupForPass1:(struct ? *)arg1 threadgroupsPerGridForPass1:(struct ? *)arg2 threadsPerThreadgroupForPass2:(struct ? *)arg3 threadgroupsPerGridForPass2:(struct ? *)arg4 threadsPerThreadgroupForPass3:(struct ? *)arg5 threadgroupsPerGridForPass3:(struct ? *)arg6 ;
-(void)_matrix3x3ToParametricTransform:(struct ? )arg0 ;
-(void)_resampleHomography:(id)arg0 to:(id)arg1 ;
-(void)_resampleTransform:(id)arg0 to:(id)arg1 ;
-(void)_resetLoss;
-(void)_setDefaultParameters;
-(void)_setDefaultParametersICP;
-(void)_setICPRegularizerTerms:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif