// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCPADDINGGPUDEVICEOPS_H
#define MLCPADDINGGPUDEVICEOPS_H



#import "MLCGPUDeviceOps.h"

@interface MLCPaddingGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) id *paddingGradientAccumulateKernel; // ivar: _paddingGradientAccumulateKernel
@property (nonatomic) int paddingType; // ivar: _paddingType
@property (nonatomic) float paddingValue; // ivar: _paddingValue


+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif