// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUISPRITESRENDERER_H
#define ARUISPRITESRENDERER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "ARUISpriteRenderState.h"
#import "ARUISpriteUniformsCache.h"

@interface ARUISpritesRenderer : NSObject {
    id<MTLBuffer> *_spriteVertexBuffer;
    id<MTLBuffer> *_spriteIndexBuffer;
    NSUInteger _numIndicies;
    ARUISpriteRenderState *_spriteRenderState;
    ARUISpriteUniformsCache *_cache;
}




+(void)clearCaches;
-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)initWithDeviceSPI:(id)arg0 librarySPI:(id)arg1 ;
-(void)_sharedInitWithDevice:(id)arg0 ;
-(void)renderSpriteSheet:(id)arg0 intoContext:(id)arg1 withCommandEncoder:(id)arg2 ;


@end


#endif