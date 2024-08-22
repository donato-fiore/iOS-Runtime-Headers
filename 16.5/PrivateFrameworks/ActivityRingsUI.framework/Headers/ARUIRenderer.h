// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRENDERER_H
#define ARUIRENDERER_H

@protocol MTLDeviceSPI, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "ARUIRingsRenderPipelineFactory.h"
#import "ARUIRingsRenderer.h"
#import "ARUISpritesRenderer.h"
#import "ARUICelebrationsRenderer.h"

@interface ARUIRenderer : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;
    ARUIRingsRenderer *_ringsRenderer;
    ARUISpritesRenderer *_spritesRenderer;
    ARUICelebrationsRenderer *_celebrationsRenderer;
}


@property (readonly, nonatomic) NSUInteger renderStyle; // ivar: _renderStyle


-(id)_snapshotRings:(id)arg0 spriteSheet:(id)arg1 withContext:(id)arg2 ;
-(id)init;
-(id)initWithCommandQueue:(id)arg0 ;
-(id)initWithRenderStyle:(NSUInteger)arg0 ;
-(id)initWithRenderStyle:(NSUInteger)arg0 commandQueue:(id)arg1 ;
-(id)renderPipelineFactoryWithDevice:(id)arg0 library:(id)arg1 ;
-(id)renderPipelineFactoryWithDeviceSPI:(id)arg0 librarySPI:(id)arg1 ;
-(id)ringsRenderPipelineConfigurationForRings:(id)arg0 context:(id)arg1 ;
-(id)snapshotRingGroupControllers:(id)arg0 withSize;
-(id)snapshotRings:(id)arg0 spriteSheet:(id)arg1 withContext:(id)arg2 ;
-(id)snapshotRings:(id)arg0 withContext:(id)arg1 ;
-(void)_renderRings:(id)arg0 commandEncoder:(id)arg1 passDescriptor:(id)arg2 commandBuffer:(id)arg3 withContext:(id)arg4 ;
-(void)_renderRings:(id)arg0 passDescriptor:(id)arg1 commandBuffer:(id)arg2 withContext:(id)arg3 ;
-(void)_renderRings:(id)arg0 spriteSheet:(id)arg1 intoTexture:(id)arg2 presentingDrawable:(id)arg3 withContext:(id)arg4 waitUntilCompleted:(BOOL)arg5 completion:(id)arg6 ;
-(void)clearCaches;
// -(void)renderRingGroupControllers:(id)arg0 withSize:(id)arg1 intoTexture:(id)arg2 withDrawable:(BOOL)arg3 waitUntilCompleted:(id)arg4 completionHandler:(unk)arg5  ;
-(void)renderRings:(id)arg0 intoDrawable:(id)arg1 withContext:(id)arg2 ;
-(void)renderRings:(id)arg0 intoDrawable:(id)arg1 withContext:(id)arg2 completion:(id)arg3 ;
-(void)renderRings:(id)arg0 spriteSheet:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 ;
-(void)renderRings:(id)arg0 spriteSheet:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 completion:(id)arg4 ;


@end


#endif