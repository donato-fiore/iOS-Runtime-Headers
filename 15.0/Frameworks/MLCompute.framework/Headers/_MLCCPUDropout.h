// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCCPUDROPOUT_H
#define _MLCCPUDROPOUT_H

@class MLCCPULayer;



@interface _MLCCPUDropout : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 rate:(float)arg1 seed:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 rate:(float)arg1 seed:(NSUInteger)arg2 ;


@end


#endif