// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCGPUGROUPNORMALIZATION_H
#define _MLCGPUGROUPNORMALIZATION_H

@class MLCGPULayer;



@interface _MLCGPUGroupNormalization : MLCGPULayer



+(id)layerWithDevice:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 groupCount:(NSUInteger)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)initWithDevice:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 groupCount:(NSUInteger)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;


@end


#endif