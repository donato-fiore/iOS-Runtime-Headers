// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCRESIZEGPUDEVICEOPS_H
#define MLCRESIZEGPUDEVICEOPS_H



#import "MLCGPUDeviceOps.h"

@interface MLCResizeGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) BOOL alignCorners; // ivar: _alignCorners
@property (nonatomic) BOOL isSpecialCasedNearestForwardKernel; // ivar: _isSpecialCasedNearestForwardKernel
@property (nonatomic) float scaleFactorX; // ivar: _scaleFactorX
@property (nonatomic) float scaleFactorY; // ivar: _scaleFactorY


+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif