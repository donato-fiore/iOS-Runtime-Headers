// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCGPUREDUCTION_H
#define _MLCGPUREDUCTION_H

@class MLCGPULayer;



@interface _MLCGPUReduction : MLCGPULayer



+(id)layerWithDevice:(id)arg0 reduceType:(int)arg1 dimensions:(id)arg2 sourceShapeCount:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 reduceType:(int)arg1 dimensions:(id)arg2 sourceShapeCount:(NSUInteger)arg3 ;


@end


#endif