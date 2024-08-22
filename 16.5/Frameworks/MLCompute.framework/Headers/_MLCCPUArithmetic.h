// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCCPUARITHMETIC_H
#define _MLCCPUARITHMETIC_H

@class MLCCPULayer;



@interface _MLCCPUArithmetic : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 operation:(int)arg1 ;
+(int)arithmeticOperatorTypeFor:(int)arg0 ;
+(unsigned int)bnnsArithmeticFunctionFor:(int)arg0 ;
-(id)initWithDevice:(id)arg0 operation:(int)arg1 ;


@end


#endif