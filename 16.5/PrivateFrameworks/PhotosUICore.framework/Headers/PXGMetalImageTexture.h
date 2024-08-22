// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGMETALIMAGETEXTURE_H
#define PXGMETALIMAGETEXTURE_H

@class NSString, NSIndexSet;
@protocol PXGMetalSpriteTexture, MTLTexture;


#import "PXGImageTexture.h"
#import "PXGColorProgram.h"
#import "PXGMetalTextureCache.h"

@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture>

 {
    ? _orientationTransform;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *chromaTexture; // ivar: _chromaTexture
@property (readonly, nonatomic) PXGColorProgram *colorProgram; // ivar: _colorProgram
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedByteSize;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRepresentation;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isOpaque; // ivar: _isOpaque
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (nonatomic) NSInteger renderPipelineIndex; // ivar: _renderPipelineIndex
@property (readonly, nonatomic) int shaderFlags; // ivar: _shaderFlags
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture
@property (weak, nonatomic) PXGMetalTextureCache *textureCache; // ivar: _textureCache


-(id)init;
-(id)initWithTexture:(id)arg0 chromaTexture:(id)arg1 colorProgram:(id)arg2 isOpaque:(BOOL)arg3 shaderFlags:(int)arg4 orientationTransform;
-(id)initWithTexture:(id)arg0 colorProgram:(id)arg1 isOpaque:(BOOL)arg2 shaderFlags:(int)arg3 orientationTransform;
-(id)orientationTransform;
-(void)cleanupAfterRender:(NSInteger)arg0 ;
-(void)dealloc;
-(void)prepareForRender:(NSInteger)arg0 ;


@end


#endif