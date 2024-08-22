// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGDOTSRENDERER_H
#define ARCOACHINGDOTSRENDERER_H

@protocol MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ARCoachingDotsRenderer : NSObject {
    NSUInteger _pixelFormat;
    id<MTLRenderPipelineState> *_pipelineState;
}




-(id)init:(id)arg0 pixelFormat:(NSUInteger)arg1 metalLibrary:(id)arg2 sampleCount:(int)arg3 ;
-(void)encode:(id)arg0 renderCommandEncoder:(id)arg1 mvp:(struct ? )arg2 visibility:(float)arg3 renderParams:(struct ? )arg4 time:(CGFloat)arg5 ;


@end


#endif