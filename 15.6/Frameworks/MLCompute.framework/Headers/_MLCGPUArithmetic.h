// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGPUARITHMETIC_H
#define _MLCGPUARITHMETIC_H

@class MLCGPULayer;



@interface _MLCGPUArithmetic : MLCGPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 operation:(int)arg1 activationDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg0 operation:(int)arg1 activationDescriptor:(id)arg2 ;


@end


#endif