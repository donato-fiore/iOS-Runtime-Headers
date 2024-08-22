// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUPIXELBUFFERSOURCENODE_H
#define NUPIXELBUFFERSOURCENODE_H



#import "NUVideoFrameSourceNode.h"

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode {
    *__CVBuffer _pixelBuffer;
}




-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 settings:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithSettings:(id)arg0 orientation:(NSInteger)arg1 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif