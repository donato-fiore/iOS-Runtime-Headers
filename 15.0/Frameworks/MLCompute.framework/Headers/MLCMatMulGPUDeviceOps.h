// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCMATMULGPUDEVICEOPS_H
#define MLCMATMULGPUDEVICEOPS_H

@class NSArray, NSMutableArray;


#import "MLCGPUDeviceOps.h"

@interface MLCMatMulGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSArray *broadcastingFlags; // ivar: _broadcastingFlags
@property (retain, nonatomic) NSMutableArray *forwardMatricesOrNDArrays; // ivar: _forwardMatricesOrNDArrays
@property (retain, nonatomic) NSArray *gradientLeftRightMatrixSelectionFlags; // ivar: _gradientLeftRightMatrixSelectionFlags
@property (retain, nonatomic) NSMutableArray *gradientMatricesOrNDArrays; // ivar: _gradientMatricesOrNDArrays
@property (retain, nonatomic) id *matmulKernel; // ivar: _matmulKernel
@property (retain, nonatomic) NSMutableArray *matrixDescs; // ivar: _matrixDescs
@property (retain, nonatomic) id *reduceSumKernel; // ivar: _reduceSumKernel
@property (retain, nonatomic) NSMutableArray *reductionShapes; // ivar: _reductionShapes
@property (retain, nonatomic) NSArray *shapes; // ivar: _shapes
@property (retain, nonatomic) NSArray *transposeLeft; // ivar: _transposeLeft
@property (retain, nonatomic) NSArray *transposeRight; // ivar: _transposeRight


+(id)deviceOps;
+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 secondaryGradientKernel:(id)arg2 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 secondaryGradientKernel:(id)arg2 ;


@end


#endif