// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMETALCAPTURESPRITETEXTURE_H
#define PXGMETALCAPTURESPRITETEXTURE_H

@class NSString, NSIndexSet;
@protocol PXGMetalSpriteTexture, MTLTexture;


#import "PXGPayloadTexture.h"
#import "PXGColorProgram.h"
#import "PXGCaptureSpritePayload.h"

@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture <PXGMetalSpriteTexture>



@property (nonatomic) CGRect captureRect; // ivar: _captureRect
@property (readonly, nonatomic) NSObject<MTLTexture> *chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat drawingScale; // ivar: _drawingScale
@property (readonly, nonatomic) NSInteger estimatedByteSize;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRepresentation;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, copy, nonatomic) PXGCaptureSpritePayload *payload;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (nonatomic) NSInteger renderPipelineIndex; // ivar: _renderPipelineIndex
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (nonatomic) *? spriteGeometries; // ivar: _spriteGeometries
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture


-(id)initWithPayload:(id)arg0 presentationType:(int)arg1 ;
-(void)cleanupAfterRender:(NSInteger)arg0 ;
-(void)getTextureInfos:(struct ? *)arg0 forSpriteIndexes:(*unsigned int)arg1 geometries:(struct ? *)arg2 spriteStyles:(struct ? *)arg3 spriteInfos:(struct ? *)arg4 screenScale:(CGFloat)arg5 count:(unsigned int)arg6 ;
-(void)prepareForRender:(NSInteger)arg0 ;


@end


#endif