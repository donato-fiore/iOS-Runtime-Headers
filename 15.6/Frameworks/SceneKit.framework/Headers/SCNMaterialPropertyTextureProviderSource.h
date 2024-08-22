// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMATERIALPROPERTYTEXTUREPROVIDERSOURCE_H
#define SCNMATERIALPROPERTYTEXTUREPROVIDERSOURCE_H

@class NSString;
@protocol SCNMaterialPropertyTextureProviderHelper, MTLTexture, SCNMaterialPropertyTextureProvider;


#import "SCNTextureSource.h"

@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource <SCNMaterialPropertyTextureProviderHelper>

 {
    id<MTLTexture> *_texture;
    *__C3DEngineContext _engineContext;
    id<SCNMaterialPropertyTextureProvider> *_textureProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SCNMaterialPropertyTextureProvider> *textureProvider;


-(?)cleanup;
-(id)cachedTextureWithURL:(id)arg0 token:(*id)arg1 ;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;
-(void)dealloc;
-(void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;


@end


#endif