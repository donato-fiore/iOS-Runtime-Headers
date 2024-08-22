// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUICELEBRATIONSRENDERER_H
#define ARUICELEBRATIONSRENDERER_H

@class _TtC3VFX11VFXRenderer;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface ARUICelebrationsRenderer : NSObject {
    id<MTLDevice> *_device;
    _TtC3VFX11VFXRenderer *_renderer;
}




-(BOOL)_needsCelebrationRenderPassOn:(id)arg0 ;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(void)renderCelebrationsForRings:(id)arg0 withCommandBuffer:(id)arg1 intoTexture:(id)arg2 withContext:(id)arg3 ;


@end


#endif