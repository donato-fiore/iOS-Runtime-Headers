// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBILATERALSOLVERGPU_H
#define CIBILATERALSOLVERGPU_H

@protocol MTLCommandBuffer, MTLDevice, OS_dispatch_group, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>


@interface CIBilateralSolverGPU : NSObject {
    id<MTLCommandBuffer> *_commandBuffer;
    id<MTLDevice> *_metalDevice;
    id<MTLComputePipelineState>" _computePipelines;
    NSObject<OS_dispatch_group> *_computePipelinesGroup;
    ? _threadGroupInfo;
    ? _params;
    ? _offsets;
    int _width;
    int _height;
    NSUInteger _maxVertices;
    id<MTLBuffer> *_gridHashBuffer;
    id<MTLBuffer> *_gridBlurBuffer;
    id<MTLBuffer> *_gridCoordIndicesBuffer;
    id<MTLBuffer> *_gridCoordTableBuffer;
    id<MTLTexture> *_gridHashMatrix;
    id<MTLBuffer> *_gridInterpIndicesBuffer;
    id<MTLBuffer> *_gridInterpTableBuffer;
    id<MTLBuffer> *_gridInterpPadBuffer;
    id<MTLBuffer> *_A_buf;
    id<MTLBuffer> *_b_buf;
    id<MTLBuffer> *_s_buf;
    id<MTLBuffer> *_q_buf;
    id<MTLBuffer>" _Dn_buf;
    id<MTLBuffer>" _x_buf;
    id<MTLBuffer>" _r_buf;
    id<MTLBuffer>" _d_buf;
    int _idxDnBufIn;
    int _idxSwapBufIn;
}


@property (nonatomic) BOOL useTrilinearInterpolation; // ivar: _useTrilinearInterpolation


-(id)initWithWidth:(int)arg0 height:(int)arg1 maxVertices:(NSUInteger)arg2 commandBuffer:(id)arg3 ;
-(int)_doBistochastizeWithCommandBuffer:(id)arg0 t_tex:(id)arg1 c_tex:(id)arg2 lambda:(float)arg3 nIterations:(int)arg4 ;
-(int)_doPCGWithCommandBuffer:(id)arg0 nIterations:(int)arg1 ;
-(int)_doSliceTrilinearWithCommandBuffer:(id)arg0 ref_tex:(id)arg1 o_tex:(id)arg2 ;
-(int)_doSliceWithCommandBuffer:(id)arg0 o_tex:(id)arg1 ;
-(int)doSolveWithBilateralGridhash:(id)arg0 reference:(id)arg1 disparity:(id)arg2 confidence:(id)arg3 output:(id)arg4 lambda:(float)arg5 maxIterations:(int)arg6 offsets:(struct ? *)arg7 ;
-(void)_prepareResources:(id)arg0 ;
-(void)_setupBuffer;
-(void)_setupMetal;
-(void)_setupPipelineCache;
-(void)_setupPipelinesAsync:(id)arg0 ;


@end


#endif