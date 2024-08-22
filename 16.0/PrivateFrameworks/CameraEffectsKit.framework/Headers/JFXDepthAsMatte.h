// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXDEPTHASMATTE_H
#define JFXDEPTHASMATTE_H



#import "JFXMatting.h"

@interface JFXDepthAsMatte : JFXMatting {
    *__CVPixelBufferPool _rotatedFBufferPool;
    *__CVPixelBufferPool _scaledUpFBufferPool;
    *__CVPixelBufferPool _alphaPool;
}




+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(struct CGSize )mattingDepthInputSize;
-(id)initForFrameSet:(id)arg0 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif