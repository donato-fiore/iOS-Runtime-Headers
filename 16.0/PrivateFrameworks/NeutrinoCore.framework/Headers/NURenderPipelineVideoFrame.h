// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINEVIDEOFRAME_H
#define NURENDERPIPELINEVIDEOFRAME_H


#import <Foundation/Foundation.h>


@interface NURenderPipelineVideoFrame : NSObject

@property (readonly) ? frameTime; // ivar: _frameTime
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


-(id)initWithFrameTime:(struct ? )arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif