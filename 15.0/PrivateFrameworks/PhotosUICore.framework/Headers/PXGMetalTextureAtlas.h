// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGMETALTEXTUREATLAS_H
#define PXGMETALTEXTUREATLAS_H

@class NSMutableIndexSet, NSIndexSet, NSMutableDictionary, NSString;
@protocol PXGMetalSpriteTexture, MTLDevice, OS_dispatch_queue, MTLTexture, PXGMetalTextureAtlasDelegate;


#import "PXGImageTexture.h"
#import "PXGColorProgram.h"

@interface PXGMetalTextureAtlas : PXGImageTexture <PXGMetalSpriteTexture>

 {
    id<MTLDevice> *_device;
    NSObject<OS_dispatch_queue> *_layoutQueue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSInteger _cols;
    NSMutableIndexSet *_thumbnailIndexesUsedBySprites;
    NSMutableIndexSet *_spriteIndexesUsedBySprites;
    *unsigned int _spriteIndexByThumbnailIndex;
    NSIndexSet *_renderedSpriteIndexes;
    uint8_t _count;
    NSMutableIndexSet *_thumbnailIndexesPendingCheckin;
    NSMutableIndexSet *_thumbnailIndexesBeingCheckedIn;
    uint8_t _isPerformingThumbnailCheckin;
    char * _retainCountByThumbnailIndex;
    *? _guarded_textureInfoByThumbnailIndex;
    NSMutableIndexSet *_syncQueue_availableThumbnailIndexes;
    NSMutableDictionary *_syncQueue_thumbnailsInUseByRenderPass;
    *? _syncQueue_pendingThumbnailRequestInfo;
    NSUInteger _syncQueue_pendingThumbnailRequestInfoCount;
    NSUInteger _syncQueue_pendingThumbnailRequestInfoCapacity;
}


@property (readonly, nonatomic) unsigned int capacity; // ivar: _capacity
@property (readonly, nonatomic) NSObject<MTLTexture> *chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram; // ivar: _colorProgram
@property (readonly, nonatomic) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGMetalTextureAtlasDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedByteSize;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRepresentation;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly) BOOL isUnused;
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (nonatomic) NSInteger renderPipelineIndex; // ivar: _renderPipelineIndex
@property (readonly, nonatomic) NSIndexSet *renderedSpriteIndexes;
@property (readonly, nonatomic) int shaderFlags;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes; // ivar: _skipRenderSpriteIndexes
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture
@property (readonly, copy, nonatomic) NSIndexSet *thumbnailIndexesUsedBySprites;
@property (readonly, nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


+(unsigned int)maxCapacityForThumbnailSize:(struct CGSize )arg0 pixelFormat:(NSUInteger)arg1 ;
-(BOOL)containsSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithThumbnailSize:(struct CGSize )arg0 pixelFormat:(NSUInteger)arg1 capacity:(unsigned int)arg2 colorProgram:(id)arg3 device:(id)arg4 layoutQueue:(id)arg5 ;
-(unsigned int)_syncQueue_checkoutNextThumbnailIndex;
-(void)_checkinPendingThumbnailIndexesIfNeeded;
-(void)_invalidateRenderedSpriteIndexes;
-(void)_syncQueue_checkinThumbnailIndex:(unsigned int)arg0 ;
-(void)_syncQueue_releaseThumbnailAtIndex:(NSInteger)arg0 ;
-(void)_syncQueue_releaseThumbnailsAtIndexes:(id)arg0 ;
-(void)_syncQueue_resizeStorageIfNeeded;
-(void)_syncQueue_retainThumbnailAtIndex:(NSInteger)arg0 ;
-(void)_syncQueue_retainThumbnailsAtIndexes:(id)arg0 ;
-(void)addSpriteWithTextureRequestID:(int)arg0 deliveryOrder:(unsigned int)arg1 ;
-(void)addSpriteWithTextureRequestID:(int)arg0 thumbnailData:(id)arg1 size:(struct CGSize )arg2 bytesPerRow:(NSUInteger)arg3 contentsRect:(struct CGRect )arg4 ;
-(void)applyChangeDetails:(id)arg0 ;
-(void)cleanupAfterRender:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateSpriteIndexes:(id)arg0 ;
-(void)getSpriteIndexes:(*unsigned int)arg0 maxSpriteCount:(unsigned int)arg1 ;
-(void)getTextureInfos:(struct ? *)arg0 forSpriteIndexes:(*unsigned int)arg1 geometries:(struct ? *)arg2 spriteStyles:(struct ? *)arg3 spriteInfos:(struct ? *)arg4 screenScale:(CGFloat)arg5 count:(unsigned int)arg6 ;
-(void)prepareForRender:(NSInteger)arg0 ;
-(void)processPendingTextureRequestIDsWithHandler:(id)arg0 ;
-(void)processPendingThumbnailRequestIDsWithHandler:(id)arg0 ;
-(void)removeSpriteIndex:(unsigned int)arg0 ;
-(void)removeSpriteIndex:(unsigned int)arg0 atThumbnailIndex:(unsigned int)arg1 ;


@end


#endif