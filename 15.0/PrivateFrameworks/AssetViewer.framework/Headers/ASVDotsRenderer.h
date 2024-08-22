// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVDOTSRENDERER_H
#define ASVDOTSRENDERER_H

@protocol MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ASVDotsRenderer : NSObject {
    NSUInteger _pixelFormat;
    id<MTLRenderPipelineState> *_pipelineState;
}




-(id)init:(id)arg0 pixelFormat:(NSUInteger)arg1 ;
-(void)encode:(id)arg0 renderCommandEncoder:(id)arg1 mvp:(struct ? )arg2 visibility:(float)arg3 time:(CGFloat)arg4 ;


@end


#endif