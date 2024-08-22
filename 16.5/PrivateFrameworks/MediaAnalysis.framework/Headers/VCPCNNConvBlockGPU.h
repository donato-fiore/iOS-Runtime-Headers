// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNCONVBLOCKGPU_H
#define VCPCNNCONVBLOCKGPU_H

@class MPSCNNConvolution;


#import "VCPCNNConvBlock.h"

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {
    *float _batchNormMean;
    *float _batchNormVar;
    *float _batchNormGamma;
    *float _batchNormBeta;
    MPSCNNConvolution *_mpsConv;
}




-(int)fillConvWeightsGPU;
-(int)forward;
-(int)gpuForward;
-(int)readBatchNormParam:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(void)dealloc;
-(void)releaseBatchNormMemory;


@end


#endif