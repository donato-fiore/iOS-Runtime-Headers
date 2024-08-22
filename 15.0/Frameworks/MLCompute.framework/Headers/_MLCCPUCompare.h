// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCCPUCOMPARE_H
#define _MLCCPUCOMPARE_H

@class MLCCPULayer;



@interface _MLCCPUCompare : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 operation:(int)arg1 ;
-(id)initWithDevice:(id)arg0 operation:(int)arg1 ;


@end


#endif