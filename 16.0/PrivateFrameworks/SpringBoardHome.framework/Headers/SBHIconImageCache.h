// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONIMAGECACHE_H
#define SBHICONIMAGECACHE_H

@class NSMutableDictionary, NSHashTable, UIImage, NSString, CPMemoryPool;
@protocol SBIconObserver, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding>

 {
    NSMutableDictionary *_images;
    NSMutableDictionary *_unmaskedImages;
    NSHashTable *_failedIcons;
    UIImage *_genericImage;
    UIImage *_overlayImage;
    UIImage *_unmaskedOverlayImage;
    NSHashTable *_observedIcons;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImage *genericImage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (readonly, nonatomic) CPMemoryPool *iconImagesMemoryPool; // ivar: _iconImagesMemoryPool
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfCacheHits;
@property (readonly, nonatomic) NSUInteger numberOfCacheMisses;
@property (readonly, nonatomic) NSUInteger numberOfCachedImages;
@property (readonly, nonatomic) NSUInteger numberOfUnmaskedCacheHits;
@property (readonly, nonatomic) NSUInteger numberOfUnmaskedCacheMisses;
@property (readonly, nonatomic) NSUInteger numberOfUnmaskedCachedImages;
@property (readonly, nonatomic) UIImage *overlayImage;
@property (nonatomic) NSUInteger poolingBypassCount; // ivar: _poolingBypassCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *unmaskedOverlayImage;


+(BOOL)supportsMemoryPooling;
+(id)_backgroundQueue;
+(id)genericImageWithInfo:(struct SBIconImageInfo )arg0 ;
+(id)overlayImageWithInfo:(struct SBIconImageInfo )arg0 ;
+(id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(BOOL)_canPoolImage;
-(id)_cacheKeyForIcon:(id)arg0 ;
-(id)_iconImageOfSize:(struct CGSize )arg0 scale:(CGFloat)arg1 failGracefully:(BOOL)arg2 drawing:(id)arg3 ;
-(id)_pooledIconImageForIconImage:(id)arg0 allowingOptOut:(BOOL)arg1 ;
-(id)cachedImageForIcon:(id)arg0 ;
-(id)cachedUnmaskedImageForIcon:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageForIcon:(id)arg0 ;
-(id)initWithName:(id)arg0 iconImageInfo:(struct SBIconImageInfo )arg1 ;
-(id)memoryMappedIconImageForIconImage:(id)arg0 ;
-(id)memoryMappedIconImageOfSize:(struct CGSize )arg0 scale:(CGFloat)arg1 withDrawing:(id)arg2 ;
-(id)pooledIconImageForMappedIconImage:(id)arg0 ;
-(id)realImageForIcon:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unmaskedImageForIcon:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)beginObservingIconIfNecessary:(id)arg0 ;
-(void)cacheImage:(id)arg0 forIcon:(id)arg1 ;
-(void)cacheImageForIcon:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)cacheImagesForIcons:(id)arg0 ;
-(void)cacheImagesForIcons:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)cacheUnmaskedImagesForIcons:(id)arg0 ;
-(void)endObservingAllIcons;
-(void)endObservingIcon:(id)arg0 ;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)notifyObserversOfUpdateForIcon:(id)arg0 ;
-(void)purgeAllCachedImages;
-(void)purgeCachedImagesForIcons:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif