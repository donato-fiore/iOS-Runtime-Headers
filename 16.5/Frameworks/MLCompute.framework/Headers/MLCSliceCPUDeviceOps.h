// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCSLICECPUDEVICEOPS_H
#define MLCSLICECPUDEVICEOPS_H

@class NSArray;


#import "MLCCPUDeviceOps.h"

@interface MLCSliceCPUDeviceOps : MLCCPUDeviceOps

@property (copy, nonatomic) NSArray *begin; // ivar: _begin
@property (nonatomic) NSUInteger beginOffset; // ivar: _beginOffset
@property (copy, nonatomic) NSArray *count; // ivar: _count
@property (copy, nonatomic) NSArray *stride; // ivar: _stride


+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 betaDeltaData:(id)arg8 gammaDeltaData:(id)arg9 betaMomentumData:(id)arg10 gammaMomentumData:(id)arg11 ;


@end


#endif