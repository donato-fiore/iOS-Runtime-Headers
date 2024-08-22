// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGBASETEXTURE_H
#define PXGBASETEXTURE_H

@class NSMutableIndexSet, NSString, NSIndexSet;
@protocol PXGSpriteTexture, PXGMutableSpriteTexture;

#import <Foundation/Foundation.h>


@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture>

 {
    NSMutableIndexSet *_spriteIndexes;
    os_unfair_lock_s _lock;
    *? _lock_pendingImageRequestInfo;
    NSUInteger _lock_pendingImageRequestInfoCount;
    NSUInteger _lock_pendingImageRequestInfoCapacity;
    BOOL _isDegraded;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedByteSize;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRepresentation;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;


-(BOOL)containsSpriteIndex:(unsigned int)arg0 ;
-(BOOL)hasPendingTextureRequestID:(int)arg0 deliveryOrder:(unsigned int)arg1 ;
-(BOOL)removePendingSpriteWithTextureRequestID:(int)arg0 ifDeliveredBefore:(unsigned int)arg1 ;
-(id)init;
-(void)_addSpriteIndex:(unsigned int)arg0 ;
-(void)_filterPendingTextureRequestIDsWithPredicate:(id)arg0 ;
-(void)_lock_resizeStorageIfNeeded;
-(void)addSpriteIndexRange:(struct _NSRange )arg0 ;
-(void)addSpriteWithTextureRequestID:(int)arg0 deliveryOrder:(unsigned int)arg1 ;
-(void)applyChangeDetails:(id)arg0 ;
-(void)dealloc;
-(void)enumerateSpriteIndexes:(id)arg0 ;
-(void)getSpriteIndexes:(*unsigned int)arg0 maxSpriteCount:(unsigned int)arg1 ;
-(void)processPendingTextureRequestIDsWithHandler:(id)arg0 ;
-(void)removeAllSpriteIndexes;
-(void)removeSpriteIndex:(unsigned int)arg0 ;


@end


#endif