// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCMHAGPUDEVICEOPS_H
#define MLCMHAGPUDEVICEOPS_H

@class NSArray, NSMutableArray;


#import "MLCGPUDeviceOps.h"

@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSArray *mhaAttentionBiasTensors; // ivar: _mhaAttentionBiasTensors
@property (retain, nonatomic) id *mhaBiasAddKernel; // ivar: _mhaBiasAddKernel
@property (retain, nonatomic) id *mhaDropoutForwardKernel; // ivar: _mhaDropoutForwardKernel
@property (retain, nonatomic) id *mhaDropoutGradientKernel; // ivar: _mhaDropoutGradientKernel
@property (retain, nonatomic) id *mhaDropoutSource; // ivar: _mhaDropoutSource
@property (retain, nonatomic) id *mhaDropoutState; // ivar: _mhaDropoutState
@property (nonatomic) BOOL mhaHasAttentionMask; // ivar: _mhaHasAttentionMask
@property (nonatomic) BOOL mhaHasAttnBias; // ivar: _mhaHasAttnBias
@property (nonatomic) BOOL mhaHasBias; // ivar: _mhaHasBias
@property (nonatomic) BOOL mhaHasKeyMask; // ivar: _mhaHasKeyMask
@property (nonatomic) BOOL mhaHasZeroAttention; // ivar: _mhaHasZeroAttention
@property (nonatomic) NSUInteger mhaHeadCount; // ivar: _mhaHeadCount
@property (retain, nonatomic) NSMutableArray *mhaInputProjResults; // ivar: _mhaInputProjResults
@property (retain, nonatomic) id *mhaMaskSoftmaxFastForwardKernel; // ivar: _mhaMaskSoftmaxFastForwardKernel
@property (retain, nonatomic) id *mhaMaskSoftmaxForwardKernel; // ivar: _mhaMaskSoftmaxForwardKernel
@property (retain, nonatomic) id *mhaMatMulKernel; // ivar: _mhaMatMulKernel
@property (retain, nonatomic) id *mhaMatMulKernelWithScale; // ivar: _mhaMatMulKernelWithScale
@property (retain, nonatomic) NSMutableArray *mhaMatMulSourcesQKV; // ivar: _mhaMatMulSourcesQKV
@property (retain, nonatomic) NSMutableArray *mhaMatrixDescriptors; // ivar: _mhaMatrixDescriptors
@property (retain, nonatomic) NSMutableArray *mhaMatrixDescriptorsForBias; // ivar: _mhaMatrixDescriptorsForBias
@property (nonatomic) NSUInteger mhaModelDimension; // ivar: _mhaModelDimension
@property (retain, nonatomic) id *mhaMultiGPUChildOps; // ivar: _mhaMultiGPUChildOps
@property (retain, nonatomic) NSMutableArray *mhaNDArrayDescriptors; // ivar: _mhaNDArrayDescriptors
@property (retain, nonatomic) NSMutableArray *mhaNDArrayDescriptorsForBias; // ivar: _mhaNDArrayDescriptorsForBias
@property (retain, nonatomic) id *mhaQKSoftmaxResultMatrix; // ivar: _mhaQKSoftmaxResultMatrix
@property (retain, nonatomic) NSArray *mhaReduceSumKernels; // ivar: _mhaReduceSumKernels
@property (retain, nonatomic) id *mhaSoftmaxGradientKernel; // ivar: _mhaSoftmaxGradientKernel
@property (retain, nonatomic) NSMutableArray *mhaSourcesQKV; // ivar: _mhaSourcesQKV


+(id)deviceOps;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif