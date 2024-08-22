// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGMETALTEXTUREATLASMANAGER_H
#define PXGMETALTEXTUREATLASMANAGER_H

@class NSArray, NSString, NSIndexSet;
@protocol PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager, OS_dispatch_queue, PXGTextureAtlasManagerDelegate, PXGTextureConverter;

#import <Foundation/Foundation.h>

#import "PXGMetalRenderContext.h"
#import "PXGColorProgram.h"

@interface PXGMetalTextureAtlasManager : NSObject <PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager>

 {
    PXGMetalRenderContext *_metalRenderContext;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
}


@property (copy) NSArray *atlasTextures; // ivar: _atlasTextures
@property (readonly, nonatomic) unsigned int capacityPerAtlas; // ivar: _capacityPerAtlas
@property (readonly, nonatomic) PXGColorProgram *colorProgram; // ivar: _colorProgram
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGTextureAtlasManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes; // ivar: _skipRenderSpriteIndexes
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXGTextureConverter> *textureConverter; // ivar: _textureConverter
@property (readonly, copy, nonatomic) NSArray *textures;
@property (readonly, nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


-(id)init;
-(id)initWithThumbnailSize:(struct CGSize )arg0 pixelFormat:(NSUInteger)arg1 capacityPerAtlas:(unsigned int)arg2 requestQueue:(id)arg3 layoutQueue:(id)arg4 colorProgram:(id)arg5 context:(id)arg6 ;
-(void)_getAtlas:(*id)arg0 localThumbnailIndex:(*unsigned int)arg1 forGlobalThumbnailIndex:(unsigned int)arg2 ;
-(void)_requestQueue_getNextAvailableAtlas:(*id)arg0 thumbnailOffset:(*unsigned int)arg1 ;
-(void)_updateAtlasSpriteIndexSkips;
-(void)addSpriteWithTextureRequestID:(int)arg0 thumbnailData:(id)arg1 size:(struct CGSize )arg2 bytesPerRow:(NSUInteger)arg3 contentsRect:(struct CGRect )arg4 ;
-(void)applyChangeDetails:(id)arg0 ;
-(void)processPendingThumbnailRequestIDsWithHandler:(id)arg0 ;
-(void)pruneUnusedTextures;
-(void)removeSpriteIndex:(unsigned int)arg0 atThumbnailIndex:(unsigned int)arg1 ;
-(void)textureAtlasDidBecomeUnused:(id)arg0 ;


@end


#endif