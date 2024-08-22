// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCMULTIGPUDEVICEOPS_H
#define MLCMULTIGPUDEVICEOPS_H

@class NSMutableArray, NSArray;


#import "MLCGPUDeviceOps.h"

@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSMutableArray *allReducedGradientMatrices; // ivar: _allReducedGradientMatrices
@property (retain, nonatomic) NSArray *localGradientMatrices; // ivar: _localGradientMatrices
@property (retain, nonatomic) NSArray *matrixSumKernels; // ivar: _matrixSumKernels
@property (nonatomic) int multiGPUReduction; // ivar: _multiGPUReduction
@property (retain, nonatomic) NSArray *receivedGradientMatrices; // ivar: _receivedGradientMatrices
@property (retain, nonatomic) NSArray *remoteGradientBuffers; // ivar: _remoteGradientBuffers
@property (retain, nonatomic) NSMutableArray *rnnTrainableWeightGradients; // ivar: _rnnTrainableWeightGradients


+(id)multiGPUDeviceOpsWithGPUDeviceOps:(id)arg0 ;
-(id)initWithGPUDevicOps:(id)arg0 ;


@end


#endif