// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXMOBILEASSETMANAGERV2_H
#define FLEXMOBILEASSETMANAGERV2_H

@class NSString, NSMutableOrderedSet, NSMutableSet, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FlexCloudManager.h"

@interface FlexMobileAssetManagerV2 : FlexCloudManager {
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSObject *_mobileAssetCacheLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableSet *_processingDownloadSet;
    NSMapTable *_dowloadOptionsMapping;
    NSMutableOrderedSet *_pendingPurgeSet;
    NSMutableSet *_processingPurgeSet;
    int _assetInstalledNotificationToken;
    int _catalogUpdatedNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}


@property (nonatomic) BOOL XMLPresent; // ivar: _XMLPresent
@property (nonatomic) BOOL includeArtworkInQueries; // ivar: _includeArtworkInQueries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue; // ivar: _purgeQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue; // ivar: _triggerDownloadAndPurgeQueue


+(id)_assetURLForMobileAsset:(id)arg0 ;
+(id)assetWithNewestContentVersionInAssets:(id)arg0 preferInstalled:(BOOL)arg1 ;
+(id)compatibilityFilterPredicate;
-(BOOL)_mobileAssetIsDownloading:(id)arg0 ;
-(BOOL)_mobileAssetIsPurging:(id)arg0 ;
-(NSInteger)_responseForDownloadResult:(NSInteger)arg0 ;
-(NSUInteger)assetStatus:(id)arg0 ;
-(id)_assetIDForMobileAsset:(id)arg0 ;
-(id)_existingSongForUID:(id)arg0 ;
-(id)_metadataMappingForUUIDSet:(id)arg0 ;
-(id)_mobileAssetCancelDownloadResultStringValue:(NSInteger)arg0 ;
-(id)_mobileAssetDownloadOptionsForClientOptions:(id)arg0 ;
-(id)_mobileAssetDownloadResultStringValue:(NSInteger)arg0 ;
-(id)_mobileAssetPurgeResultStringValue:(NSInteger)arg0 ;
-(id)_mobileAssetQueryResultStringValue:(NSInteger)arg0 ;
-(id)_newestContentSetFromAssets:(id)arg0 metadataMapping:(id)arg1 ;
-(id)filterByClientIDForAssets:(id)arg0 forMetadataMapping:(id)arg1 ;
-(id)initWithLibrary:(id)arg0 options:(id)arg1 ;
-(id)loadCachedSongs;
-(id)mobileAssetsForAssetPropertyType:(id)arg0 ;
-(id)mobileAssetsForAssetPropertyType:(id)arg0 songUID:(id)arg1 ;
-(void)_dispatchNextAsyncAssetDownloadAndPurge;
-(void)_loadBundledArtworkForSongID:(id)arg0 ;
-(void)_loadBundledSongForSongID:(id)arg0 ;
-(void)_processResults:(id)arg0 metadataMapping:(id)arg1 ;
-(void)_purgeAsset:(id)arg0 ;
-(void)_registerAndHandleSystemMobileAssetNotifications;
-(void)_requeryForMobileAssetTypes:(NSUInteger)arg0 ;
-(void)_requeryForMobileAssetTypes:(NSUInteger)arg0 forUUIDs:(id)arg1 ;
-(void)_runAsyncAssetDownloadForMobileAsset:(id)arg0 ;
-(void)_runNextAsyncAssetDownloadAndPurge;
-(void)_updateExistingSong:(id)arg0 usingAsset:(id)arg1 metadataAsset:(id)arg2 ;
-(void)_updateExistingSong:(id)arg0 usingAsset:(id)arg1 metadataAsset:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_updateMetadataOnExistingSong:(id)arg0 usingAsset:(id)arg1 metadataAsset:(id)arg2 ;
-(void)cancelDownloadOfAllAssets;
-(void)cancelDownloadOfAsset:(id)arg0 ;
-(void)fetchAllSongsWithCompletion:(id)arg0 ;
-(void)loadAssetWithID:(id)arg0 forSongID:(id)arg1 ;
-(void)requestDownloadOfAsset:(id)arg0 withOptions:(id)arg1 ;
-(void)requestPurgeOfAsset:(id)arg0 ;


@end


#endif