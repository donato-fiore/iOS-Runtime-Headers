// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKTFLOWGPU_H
#define LKTFLOWGPU_H

@protocol MTLDevice, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>


@interface LKTFlowGPU : NSObject {
    id<MTLDevice> *_device;
    id<MTLComputePipelineState>" _computePipelines;
    NSUInteger _maxThreadExecutionWidth;
    CGSize _ref_pyr_size;
    CGSize _aux_pyr_size;
    id<MTLTexture>"] _I_tex;
    id<MTLTexture>"] _I_u32_alias_tex;
    id<MTLTexture>" _G0_tex;
    id<MTLTexture>" _G1_tex;
    id<MTLTexture>" _C0_tex;
    id<MTLTexture>" _C1_tex;
    id<MTLBuffer>" _Adiagb_buf;
    id<MTLBuffer>" _Ixy_buf;
    id<MTLBuffer> *_idt_buf;
    id<MTLTexture>" _w_tex;
    id<MTLTexture>"] _uv_fwd_tex;
    id<MTLTexture>"] _uv_bwd_tex;
    id<MTLTexture>"] _uv_fwd_u32_alias_tex;
    id<MTLTexture>"] _uv_bwd_u32_alias_tex;
    int _current_frame_index;
    BOOL _indexUpdated;
    id<MTLTexture> *_uv_fwd_tex_user_ref;
    id<MTLTexture> *_uv_bwd_tex_user_ref;
    id<MTLBuffer> *_kpt_buf;
}


@property (readonly, nonatomic) CGSize aux_size; // ivar: _aux_size
@property (nonatomic) BOOL isBidirectional; // ivar: _isBidirectional
@property (nonatomic) BOOL isInverse; // ivar: _isInverse
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) NSObject<MTLBuffer> *keypoints;
@property (nonatomic) BOOL needConversionBGRA2YUVA; // ivar: _needConversionBGRA2YUVA
@property (nonatomic) int nlreg_padding; // ivar: _nlreg_padding
@property (nonatomic) int nlreg_radius; // ivar: _nlreg_radius
@property (nonatomic) float nlreg_sigma_c; // ivar: _nlreg_sigma_c
@property (nonatomic) float nlreg_sigma_l; // ivar: _nlreg_sigma_l
@property (nonatomic) float nlreg_sigma_w; // ivar: _nlreg_sigma_w
@property (readonly, nonatomic) int nscales; // ivar: _nscales
@property (nonatomic) int nwarpings; // ivar: _nwarpings
@property (readonly, nonatomic) CGSize ref_size; // ivar: _ref_size
@property (readonly, nonatomic) int streamFrameCount; // ivar: _streamFrameCount
@property (nonatomic) BOOL useNonLocalRegularization; // ivar: _useNonLocalRegularization


+(void)_computeScalingFactor:(id)arg0 dst_tex:(id)arg1 scale_xy_inv:(**float)arg2 coeff;
-(id)initWithDevice:(id)arg0 width:(int)arg1 height:(int)arg2 nscales:(int)arg3 ;
-(id)newBufferWithPixelFormat:(NSUInteger)arg0 width:(int)arg1 data:(*void)arg2 ;
-(int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_computeFeaturesWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_computeOpticalFlow:(id)arg0 computeFeatureI0:(BOOL)arg1 computeFeatureI1:(BOOL)arg2 ;
-(int)_computeOpticalFlowBidirectional:(id)arg0 ;
-(int)_createImagePyramidWithCommandBuffer:(id)arg0 in_tex:(id)arg1 I_idx:(int)arg2 ;
-(int)_doNLRegularizationWithCommandBuffer:(id)arg0 in_uv_tex:(id)arg1 join_tex:(id)arg2 w_tex:(id)arg3 out_uv_tex:(id)arg4 ;
-(int)_doSolverWithCommandBuffer:(id)arg0 scale:(int)arg1 in_uv_tex:(id)arg2 in_G0_tex:(id)arg3 in_G1_tex:(id)arg4 in_C0_tex:(id)arg5 in_C1_tex:(id)arg6 out_uv_tex:(id)arg7 out_w_tex:(id)arg8 ;
-(int)_downscale2XWithCommandBuffer:(id)arg0 in_tex:(id)arg1 out_tex:(id)arg2 ;
-(int)_enqueueFlowConsistencyWithCommandBuffer:(id)arg0 in_uv0_tex:(id)arg1 in_uv1_tex:(id)arg2 out_uv_tex:(id)arg3 ;
-(int)_enqueueKeypointsFromFlowWithCommandBuffer:(id)arg0 in_uv_fwd_tex:(id)arg1 in_uv_bwd_tex:(id)arg2 out_kpt_buf:(id)arg3 block_size:(int)arg4 bidirectional_error:(float)arg5 out_num_keypoints:(*unsigned short)arg6 ;
-(int)_setupBuffer;
-(int)_zeroFlowWithCommandBuffer:(id)arg0 uv_tex:(id)arg1 ;
-(int)computeKeypointsFromTexForwardFlow:(id)arg0 backwardFlow:(id)arg1 bidirectionalError:(float)arg2 blockSize:(int)arg3 outNumKeypoints:(*unsigned short)arg4 commandBuffer:(id)arg5 ;
-(int)estimateFlowFromTexReference:(id)arg0 target:(id)arg1 commandBuffer:(id)arg2 ;
-(int)estimateFlowStreamTex:(id)arg0 commandBuffer:(id)arg1 ;
-(int)estimateFlowStreamTex:(id)arg0 index:(int)arg1 doOpticalFlow:(BOOL)arg2 commandBuffer:(id)arg3 ;
-(int)setOutputTexUV:(id)arg0 ;
-(int)setOutputTexUVForward:(id)arg0 backward:(id)arg1 ;
-(void)_initMemory:(int)arg0 height:(int)arg1 nscales:(int)arg2 ;
-(void)_setDefaultParameters;
-(void)_setupPipelines;
-(void)reset;
-(void)setPreset:(NSInteger)arg0 ;


@end


#endif