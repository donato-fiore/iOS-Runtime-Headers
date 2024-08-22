// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAPLAYBACKITEMMETADATA_H
#define MPMEDIAPLAYBACKITEMMETADATA_H

@class NSDictionary, NSString, NSNumber, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPMediaItem.h"
#import "MPModelGenericObject.h"

@interface MPMediaPlaybackItemMetadata : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsCellularNetworking;
}


@property (readonly, copy, nonatomic) NSDictionary *additionalHTTPHeaderFields;
@property (readonly, copy, nonatomic) NSString *albumArtistName; // ivar: _albumArtistName
@property (readonly, nonatomic) NSInteger albumStoreAdamID; // ivar: _albumStoreAdamID
@property (readonly, copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (readonly, nonatomic) BOOL allowsAssetCaching;
@property (readonly, nonatomic) BOOL allowsCellularNetworking;
@property (readonly, nonatomic) BOOL allowsInitiatingPlayWhileDownload; // ivar: _allowsInitiatingPlayWhileDownload
@property (readonly, copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSInteger artistStoreAdamID; // ivar: _artistStoreAdamID
@property (readonly, nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (readonly, nonatomic) NSString *buyParameters; // ivar: _buyParameters
@property (readonly, copy, nonatomic) NSString *composerName; // ivar: _composerName
@property (readonly, copy, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSString *copyrightText; // ivar: _copyrightText
@property (readonly, nonatomic) NSInteger downloadIdentifier; // ivar: _downloadIdentifier
@property (readonly, nonatomic) NSInteger endpointType; // ivar: _endpointType
@property (readonly, nonatomic) CGFloat expectedDuration; // ivar: _expectedDuration
@property (readonly, copy, nonatomic) NSString *genreTitle; // ivar: _genreTitle
@property (readonly, nonatomic) NSDictionary *hlsOfflinePlaybackKeys; // ivar: _hlsOfflinePlaybackKeys
@property (readonly, copy, nonatomic) NSString *hlsPlaylistURLString; // ivar: _hlsPlaylistURLString
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreContentDSID; // ivar: _iTunesStoreContentDSID
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentDownloadParameters;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreContentID; // ivar: _iTunesStoreContentID
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentPurchasedMediaKind;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentType;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentUserAgent;
@property (readonly, nonatomic) BOOL isExplicitTrack; // ivar: _isExplicitTrack
@property (readonly, nonatomic) NSInteger likedState;
@property (readonly, copy, nonatomic) NSURL *localNetworkContentURL; // ivar: _localNetworkContentURL
@property (readonly, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) NSInteger mediaLibraryPersistentID; // ivar: _mediaLibraryPersistentID
@property (readonly, nonatomic) MPModelGenericObject *modelGenericObject; // ivar: _modelGenericObject
@property (readonly, nonatomic, getter=isOfflineHLS) BOOL offlineHLS; // ivar: _offlineHLS
@property (readonly, nonatomic) BOOL prefersStoreContentInfo; // ivar: _prefersStoreContentInfo
@property (readonly, copy, nonatomic) NSURL *protectedContentSupportStorageURL; // ivar: _protectedContentSupportStorageURL
@property (readonly, nonatomic, getter=_rentalIdentifier) NSNumber *rentalIdentifier; // ivar: _rentalIdentifier
@property (readonly, nonatomic) BOOL requiresPlayWhileDownload; // ivar: _requiresPlayWhileDownload
@property (readonly, nonatomic) BOOL shouldRememberBookmarkTime; // ivar: _shouldRememberBookmarkTime
@property (readonly, nonatomic) BOOL shouldReportPlayEventsToStore; // ivar: _shouldReportPlayEventsToStore
@property (readonly, nonatomic) BOOL showComposer; // ivar: _showComposer
@property (readonly, nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (readonly, nonatomic) NSInteger storeAdamID; // ivar: _storeAdamID
@property (readonly, nonatomic) NSUInteger storeSagaID; // ivar: _storeSagaID
@property (readonly, nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID
@property (readonly, copy, nonatomic) NSString *storeUbiquitousIdentifier; // ivar: _storeUbiquitousIdentifier
@property (readonly, nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired; // ivar: _subscriptionRequired
@property (readonly, nonatomic) float volumeNormalization; // ivar: _volumeNormalization


+(BOOL)_shouldRespectMusicCellularDataSetting;
-(BOOL)_calculateAllowsCellularNetworking;
-(BOOL)_requiresPendingItemDownload;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)likedState:(id)arg0 ;
-(id)artworkCatalogForPlaybackTime:(CGFloat)arg0 ;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(*NSUInteger)arg0 protectionType:(*NSUInteger)arg1 usesPurchaseBundle:(*BOOL)arg2 ;
-(id)init;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(NSUInteger)arg0 assetFlavor:(id)arg1 protectionType:(NSUInteger)arg2 pathExtension:(id)arg3 ;
-(id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg0 ;
-(void)_contentTasteControllerDidChangeNotification:(id)arg0 ;
-(void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg0 ;
-(void)_persistURI:(id)arg0 persistentContentKey:(id)arg1 ;
-(void)_setNeedsAllowsCellularNetworkingUpdate;
-(void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg0 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id)arg0 ;
-(void)getNetworkConstraintsForDownloadKind:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadMediaItemWithCompletionHandler:(id)arg0 ;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg0 protectionType:(NSUInteger)arg1 assetQuality:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif