// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYPLAYBACKITEMMETADATA_H
#define MPMEDIALIBRARYPLAYBACKITEMMETADATA_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "MPMediaPlaybackItemMetadata.h"
#import "MPMediaItem.h"

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasValidMediaItemValuesForProperties;
    BOOL _hasEvaluatedOfflineHLS;
    BOOL _isOfflineHLS;
    MPMediaItem *_mediaItem;
    NSDictionary *_mediaItemValuesForProperties;
    NSDictionary *_playbackKeys;
}


@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic, getter=_writeQueue) NSObject<OS_dispatch_queue> *writeQueue; // ivar: _writeQueue


+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(NSInteger)arg0 storeAdamID:(NSInteger)arg1 storeSagaID:(NSUInteger)arg2 assetQuality:(NSUInteger)arg3 assetFlavor:(id)arg4 protectionType:(NSUInteger)arg5 pathExtension:(id)arg6 ;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExplicitTrack;
-(BOOL)isOfflineHLS;
-(BOOL)isSubscriptionRequired;
-(BOOL)prefersStoreContentInfo;
-(BOOL)shouldRememberBookmarkTime;
-(BOOL)shouldReportPlayEventsToStore;
-(BOOL)showComposer;
-(CGFloat)bookmarkTime;
-(CGFloat)expectedDuration;
-(NSInteger)albumStoreAdamID;
-(NSInteger)artistStoreAdamID;
-(NSInteger)downloadIdentifier;
-(NSInteger)endpointType;
-(NSInteger)mediaLibraryPersistentID;
-(NSInteger)storeAdamID;
-(NSInteger)storeSubscriptionAdamID;
-(NSUInteger)contentType;
-(NSUInteger)hash;
-(NSUInteger)storeAccountID;
-(NSUInteger)storeSagaID;
-(float)volumeNormalization;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg0 returningAssetQuality:(*NSUInteger)arg1 protectionType:(*NSUInteger)arg2 usesPurchaseBundle:(*BOOL)arg3 ;
-(id)albumArtistName;
-(id)albumTitle;
-(id)artistName;
-(id)artworkCatalogForPlaybackTime:(CGFloat)arg0 ;
-(id)buyParameters;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(*NSUInteger)arg0 protectionType:(*NSUInteger)arg1 usesPurchaseBundle:(*BOOL)arg2 ;
-(id)composerName;
-(id)contentTitle;
-(id)copyrightText;
-(id)hlsOfflinePlaybackKeys;
-(id)hlsPlaylistURLString;
-(id)iTunesStoreContentDSID;
-(id)iTunesStoreContentID;
-(id)init;
-(id)initWithMediaItem:(id)arg0 ;
-(id)localNetworkContentURL;
-(id)modelGenericObject;
-(id)protectedContentSupportStorageURL;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(NSUInteger)arg0 assetFlavor:(id)arg1 protectionType:(NSUInteger)arg2 pathExtension:(id)arg3 ;
-(void)_invalidateMediaItemProperties;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_persistURI:(id)arg0 persistentContentKey:(id)arg1 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg0 protectionType:(NSUInteger)arg1 assetQuality:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif