// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCCPUREDUCTION_H
#define _MLCCPUREDUCTION_H

@class MLCCPULayer;



@interface _MLCCPUReduction : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 reduceType:(int)arg1 dimensions:(id)arg2 sourceShapeCount:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 reduceType:(int)arg1 dimensions:(id)arg2 ;


@end


#endif