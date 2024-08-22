// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGEFFECTWRAPPINGTEXTURE_H
#define PXGEFFECTWRAPPINGTEXTURE_H

@class NSString, NSIndexSet;
@protocol PXGMetalSpriteTexture, MTLTexture;


#import "PXGImageTexture.h"
#import "PXGColorProgram.h"

@interface PXGEffectWrappingTexture : PXGImageTexture <PXGMetalSpriteTexture>



@property (readonly, nonatomic) NSObject<MTLTexture> *chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedByteSize;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRepresentation;
@property (readonly, nonatomic) PXGImageTexture *imageTextureParent; // ivar: _imageTextureParent
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isOpaque;
@property (retain, nonatomic) NSObject<PXGMetalSpriteTexture> *parent; // ivar: _parent
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (nonatomic) NSInteger renderPipelineIndex;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture;


+(id)_dequeueTexture;
+(id)_reusableTextures;
+(id)createTexture;
+(void)_reuseTexture:(id)arg0 ;
-(id)orientationTransform;
-(struct CGImage *)sourceCGImage;
-(struct __CVBuffer *)sourceCVPixelBuffer;
-(void)cleanupAfterRender:(NSInteger)arg0 ;
-(void)getTextureInfos:(struct ? *)arg0 forSpriteIndexes:(*unsigned int)arg1 geometries:(struct ? *)arg2 spriteStyles:(struct ? *)arg3 spriteInfos:(struct ? *)arg4 screenScale:(CGFloat)arg5 count:(unsigned int)arg6 ;
-(void)prepareForRender:(NSInteger)arg0 ;


@end


#endif