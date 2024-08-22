// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPLAYERITEM_H
#define IMPLAYERITEM_H

@class NSString, NSURL, MPArtworkCatalog, AVURLAsset, NSArray, MPNowPlayingContentItem, MTEpisode, NSUUID, NSDate, IMAVSecureKeyLoader;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMPlayerManifest.h"

@interface IMPlayerItem : NSObject

@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSURL *alternatePaidURL; // ivar: _alternatePaidURL
@property (nonatomic) BOOL areChaptersLoaded; // ivar: _areChaptersLoaded
@property (nonatomic) BOOL areChaptersLoading; // ivar: _areChaptersLoading
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (copy, nonatomic) NSURL *artworkUrl; // ivar: _artworkUrl
@property (retain, nonatomic) AVURLAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (nonatomic) NSInteger channelStoreId; // ivar: _channelStoreId
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chapterLoadingQueue; // ivar: _chapterLoadingQueue
@property (retain, nonatomic) NSArray *chapters; // ivar: _chapters
@property (retain, nonatomic) MPNowPlayingContentItem *contentItem; // ivar: _contentItem
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL enqueuedByAnotherUser; // ivar: _enqueuedByAnotherUser
@property (nonatomic, getter=isEntitled) BOOL entitled; // ivar: _entitled
@property (readonly, nonatomic) MTEpisode *episode; // ivar: _episode
@property (retain, nonatomic) NSString *episodeGuid; // ivar: _episodeGuid
@property (nonatomic) NSInteger episodeNumber; // ivar: _episodeNumber
@property (nonatomic) NSInteger episodePID; // ivar: _episodePID
@property (retain, nonatomic) NSURL *episodeShareUrl; // ivar: _episodeShareUrl
@property (nonatomic) NSInteger episodeStoreId; // ivar: _episodeStoreId
@property (nonatomic) NSInteger episodeType; // ivar: _episodeType
@property (retain, nonatomic) NSString *episodeUuid; // ivar: _episodeUuid
@property (retain, nonatomic) NSUUID *instanceIdentifier; // ivar: _instanceIdentifier
@property (nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (nonatomic) BOOL isNotSubscribeable; // ivar: _isNotSubscribeable
@property (retain, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (weak, nonatomic) IMPlayerManifest *manifest; // ivar: _manifest
@property (nonatomic) NSUInteger manifestIndex; // ivar: _manifestIndex
@property (readonly, weak, nonatomic) NSArray *metadataChapters;
@property (nonatomic) BOOL paidSubscriptionActive; // ivar: _paidSubscriptionActive
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (nonatomic) CGFloat playhead; // ivar: _playhead
@property (copy, nonatomic) NSString *podcastDisplayType; // ivar: _podcastDisplayType
@property (copy, nonatomic) NSString *podcastFeedUrl; // ivar: _podcastFeedUrl
@property (copy, nonatomic) NSURL *podcastShareUrl; // ivar: _podcastShareUrl
@property (nonatomic) NSInteger podcastStoreId; // ivar: _podcastStoreId
@property (copy, nonatomic) NSString *podcastUuid; // ivar: _podcastUuid
@property (retain, nonatomic) NSString *priceType; // ivar: _priceType
@property (retain, nonatomic) NSDate *pubDate; // ivar: _pubDate
@property (nonatomic) NSInteger seasonNumber; // ivar: _seasonNumber
@property (retain, nonatomic) IMAVSecureKeyLoader *secureKeyLoader; // ivar: _secureKeyLoader
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, weak, nonatomic) NSArray *timeChapters;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic, getter=isVideo, setter=setIsVideo:) BOOL video; // ivar: _video


-(BOOL)_isContentItemLoaded;
-(BOOL)isAssetLoaded;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isShareable;
-(BOOL)isStreamable;
-(BOOL)notifyUserIsNotPlayable;
-(BOOL)supportsArtworkUrl;
-(BOOL)upgradeToAlternatePaidVersionIfNeeded;
-(NSUInteger)hash;
-(id)artworkIdentifier;
-(id)createAssetForUrl:(id)arg0 ;
-(id)externalMetadata;
-(id)init;
-(id)initWithEpisode:(id)arg0 ;
-(id)initWithUrl:(id)arg0 ;
-(id)streamUrl;
-(void)beginLoadingArtworkForAVPlayerItem:(id)arg0 ;
-(void)cleanupAfterError;
-(void)invalidateAsset;
-(void)loadChapters;
-(void)populateContentItem:(id)arg0 ;
-(void)recreateContentItem;
-(void)reset;
// -(void)retrieveArtwork:(id)arg0 withSize:(unk)arg1  ;
// -(void)retrieveArtwork:(id)arg0 withSize:(unk)arg1 atTime:(struct CGSize )arg2  ;
-(void)updateActivity:(id)arg0 ;
-(void)updateContentItem;


@end


#endif