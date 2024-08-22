// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXDISPARITYASMATTE_H
#define JFXDISPARITYASMATTE_H



#import "JFXMatting.h"

@interface JFXDisparityAsMatte : JFXMatting {
    *__CVPixelBufferPool _fixedPointBufferPool;
    *__CVPixelBufferPool _rotatedFPBufferPool;
    *__CVPixelBufferPool _scaledUpFPBufferPool;
    *__CVPixelBufferPool _alphaMattePool;
}




+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(struct CGSize )mattingDepthInputSize;
-(id)initForFrameSet:(id)arg0 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif