// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUISPRITESPARTICLERENDERER_H
#define ARUISPRITESPARTICLERENDERER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "ARUISpriteParticleRenderState.h"

@interface ARUISpritesParticleRenderer : NSObject {
    id<MTLBuffer> *_spriteVertexBuffer;
    id<MTLBuffer> *_spriteIndexBuffer;
    NSUInteger _numIndicies;
    id<MTLBuffer> *_vertexAttributesBuffer;
    id<MTLBuffer> *_uniformsBuffer;
    ARUISpriteParticleRenderState *_spriteRenderState;
    NSUInteger _bufferSize;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 bufferSize:(NSUInteger)arg2 ;
-(id)initWithDeviceSPI:(id)arg0 librarySPI:(id)arg1 bufferSize:(NSUInteger)arg2 ;
-(void)_sharedInitWithDevice:(id)arg0 bufferSize:(NSUInteger)arg1 ;
-(void)renderSpriteSheet:(id)arg0 intoContext:(id)arg1 withCommandEncoder:(id)arg2 ;


@end


#endif