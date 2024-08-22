// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCGPUINSTANCENORMALIZATION_H
#define _MLCGPUINSTANCENORMALIZATION_H

@class MLCGPULayer;



@interface _MLCGPUInstanceNormalization : MLCGPULayer



+(id)layerWithDevice:(id)arg0 fusedWithNeuronDescriptor:(id)arg1 numOfFeatureChannels:(NSUInteger)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
+(id)layerWithDevice:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(id)initWithDevice:(id)arg0 fusedWithNeuronDescriptor:(id)arg1 numOfFeatureChannels:(NSUInteger)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;


@end


#endif