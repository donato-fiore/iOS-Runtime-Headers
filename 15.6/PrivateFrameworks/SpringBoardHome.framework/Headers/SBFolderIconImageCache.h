// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFOLDERICONIMAGECACHE_H
#define SBFOLDERICONIMAGECACHE_H

@class NSMapTable, UIImage, NSString, CPMemoryPool;
@protocol SBFolderIconObserver, SBFolderObserver, SBHIconImageCacheObserver, SBFolderIconGridCellImageProvider, SBIconListLayout;

#import <Foundation/Foundation.h>

#import "SBHIconImageCache.h"

@interface SBFolderIconImageCache : NSObject <SBFolderIconObserver, SBFolderObserver, SBHIconImageCacheObserver, SBFolderIconGridCellImageProvider>

 {
    NSMapTable *_folderIconObservers;
    NSMapTable *_cachedFolderImages;
    NSMapTable *_cachedMiniGridImages;
    UIImage *_genericMiniGridImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (readonly, nonatomic) CPMemoryPool *miniGridImagePool; // ivar: _miniGridImagePool
@property (readonly, nonatomic) NSUInteger numberOfCacheHits;
@property (readonly, nonatomic) NSUInteger numberOfCacheMisses;
@property (readonly, nonatomic) NSUInteger numberOfCachedImages;
@property (readonly, nonatomic) CPMemoryPool *pool; // ivar: _pool
@property (readonly) Class superclass;


+(BOOL)drawTreatmentForIcon:(id)arg0 inRect:(struct CGRect )arg1 ;
+(BOOL)needsTreatmentForIcon:(id)arg0 ;
+(id)gridCellImageOfSize:(struct CGSize )arg0 forIcon:(id)arg1 iconImageInfo:(struct SBIconImageInfo )arg2 ;
+(id)gridCellImageOfSize:(struct CGSize )arg0 forIconImage:(id)arg1 ;
+(id)imageForPageAtIndex:(NSUInteger)arg0 inFolderIcon:(id)arg1 listLayout:(id)arg2 gridCellImageProvider:(id)arg3 pool:(id)arg4 ;
-(id)genericMiniGridImage;
-(id)gridCellImageForIcon:(id)arg0 ;
-(id)gridCellImageOfSize:(struct CGSize )arg0 forIcon:(id)arg1 iconImageInfo:(struct SBIconImageInfo )arg2 ;
-(id)imageForPageAtIndex:(NSUInteger)arg0 inFolderIcon:(id)arg1 ;
-(id)init;
-(id)initWithListLayout:(id)arg0 ;
-(void)addObserver:(id)arg0 forFolderIcon:(id)arg1 ;
-(void)cacheGridCellImagesForIcons:(id)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)folder:(id)arg0 didMoveList:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)folder:(id)arg0 didRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folderIcon:(id)arg0 containedIconAccessoriesDidUpdate:(id)arg1 ;
-(void)folderIcon:(id)arg0 containedIconImageDidUpdate:(id)arg1 ;
-(void)folderIcon:(id)arg0 containedIconLaunchEnabledDidChange:(id)arg1 ;
-(void)iconImageCache:(id)arg0 didUpdateImageForIcon:(id)arg1 ;
-(void)informObserversOfUpdateForFolderIcon:(id)arg0 ;
-(void)rebuildImagesForFolderIcon:(id)arg0 ;
-(void)removeObserver:(id)arg0 forFolderIcon:(id)arg1 ;
-(void)updateCachedImagesForFolderIcon:(id)arg0 afterChangeToContainedForIcon:(id)arg1 imageUpdated:(BOOL)arg2 treatmentsOnly:(BOOL)arg3 ;


@end


#endif