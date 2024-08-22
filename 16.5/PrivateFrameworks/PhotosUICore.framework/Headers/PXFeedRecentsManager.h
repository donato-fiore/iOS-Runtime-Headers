// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDRECENTSMANAGER_H
#define PXFEEDRECENTSMANAGER_H

@class NSMutableArray, NSOrderedSet, NSArray, PHPhotoLibrary;
@protocol PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXFeedRecentsManagerDelegate;

#import <Foundation/Foundation.h>


@interface PXFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>

 {
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}


@property (copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets; // ivar: __cachedRecentAssets
@property (copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets; // ivar: __cachedRecentPHAssets
@property (nonatomic, setter=_setCount:) NSInteger count; // ivar: _count
@property (weak, nonatomic) NSObject<PXFeedRecentsManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, copy, nonatomic) NSOrderedSet *recentAssets;
@property (readonly, copy, nonatomic) NSArray *recentPHAssets;


-(BOOL)_updateCachedRecentAssets;
-(id)initWithPhotoLibrary:(id)arg0 count:(NSInteger)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg0 ;
-(void)_invalidateCachedRecentAssets;
-(void)assetsDidChange:(id)arg0 ;
-(void)cloudFeedEntriesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)shouldReload:(id)arg0 ;


@end


#endif