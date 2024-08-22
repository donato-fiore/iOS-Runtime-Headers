// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELOBJECTPLAYBACKITEMMETADATA_H
#define MPMODELOBJECTPLAYBACKITEMMETADATA_H

@protocol OS_dispatch_queue, MPModelObjectPlaybackItemMetadataDelegate;


#import "MPMediaPlaybackItemMetadata.h"
#import "MPModelHomeSharingAsset.h"
#import "MPModelFileAsset.h"
#import "MPModelPlaybackPosition.h"
#import "MPModelStoreAsset.h"

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> *_writeQueue;
}


@property (readonly, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (readonly, nonatomic) MPModelFileAsset *localFileAsset;
@property (weak, nonatomic) NSObject<MPModelObjectPlaybackItemMetadataDelegate> *modelObjectDelegate; // ivar: _modelObjectDelegate
@property (readonly, nonatomic) MPModelPlaybackPosition *playbackPosition; // ivar: _playbackPosition
@property (readonly, nonatomic) MPModelStoreAsset *storeAsset;


+(BOOL)_shouldRespectMusicCellularDataSetting;
+(id)requiredHomeSharingAssetProperties;
+(id)requiredLocalFileAssetProperties;
+(id)requiredPlaybackPositionProperties;
+(id)requiredProperties;
+(id)requiredStoreAssetProperties;
-(BOOL)allowsAssetCaching;
-(BOOL)isSubscriptionRequired;
-(BOOL)shouldRememberBookmarkTime;
-(BOOL)shouldReportPlayEventsToStore;
-(CGFloat)bookmarkTime;
-(NSInteger)downloadIdentifier;
-(NSInteger)endpointType;
-(NSInteger)mediaLibraryPersistentID;
-(NSUInteger)storeAccountID;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg0 returningAssetQuality:(*NSUInteger)arg1 protectionType:(*NSUInteger)arg2 usesPurchaseBundle:(*BOOL)arg3 ;
-(id)buyParameters;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(*NSUInteger)arg0 protectionType:(*NSUInteger)arg1 usesPurchaseBundle:(*BOOL)arg2 ;
-(id)iTunesStoreContentDSID;
-(id)iTunesStoreContentID;
-(id)init;
-(id)localNetworkContentURL;
-(id)protectedContentSupportStorageURL;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(NSUInteger)arg0 assetFlavor:(id)arg1 protectionType:(NSUInteger)arg2 pathExtension:(id)arg3 ;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)loadMediaItemWithCompletionHandler:(id)arg0 ;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg0 protectionType:(NSUInteger)arg1 assetQuality:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif