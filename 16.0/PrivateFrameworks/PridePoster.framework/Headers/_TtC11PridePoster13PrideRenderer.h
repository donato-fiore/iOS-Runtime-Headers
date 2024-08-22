// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11PRIDEPOSTER13PRIDERENDERER_H
#define _TTC11PRIDEPOSTER13PRIDERENDERER_H

@protocol MTKViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11PridePoster13PrideRenderer : NSObject <MTKViewDelegate>

 {
    ? view;
    ? device;
    ? commandQueue;
    ? ribbonRenderPipeline;
    ? ribbonDepthState;
    ? ribbonShadowRenderPipeline;
    ? shadowTextures;
    ? blurFilter;
    ? vertexBuffer;
    ? indexBuffer;
    ? stripeUniformsBuffer;
    ? uniformsBufferIndex;
    ? appearance;
    ? appearanceLock;
    ? stripeCount;
    ? inSynchronousRender;
    ? startTime;
}




-(id)init;
-(void)drawInMTKView:(id)arg0 ;
-(void)mtkView:(id)arg0 drawableSizeWillChange:(struct CGSize )arg1 ;


@end


#endif