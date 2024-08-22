// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCGPUDROPOUT_H
#define _MLCGPUDROPOUT_H

@class MLCGPULayer;



@interface _MLCGPUDropout : MLCGPULayer



+(id)layerWithDevice:(id)arg0 rate:(float)arg1 seed:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 rate:(float)arg1 seed:(NSUInteger)arg2 ;


@end


#endif