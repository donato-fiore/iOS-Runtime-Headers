// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPNOWPLAYINGINFOCENTER_H
#define MPNOWPLAYINGINFOCENTER_H

@class NSDictionary, NSDate, NSMutableDictionary, NSMutableArray, MSVLRUDictionary, MSVTimer, NSString, MRPlayerPath;
@protocol MPMediaRemoteEntityArtworkGenerator, OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource, MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDelegate;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoCenterArtworkContext.h"
#import "MPNowPlayingContentItem.h"
#import "MPArtworkResizeUtility.h"

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator>

 {
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    _MSVSignedRange _loadedContentItemsRange;
    _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    NSUInteger _playbackState;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    BOOL _isHighPriorityInvalidationTimer;
    id<MPNowPlayingPlaybackQueueDataSource> *_playbackQueueDataSource;
    id<MPNowPlayingInfoLyricsDelegate> *_lyricsDelegate;
    ? _callbacks;
    *void _fallbackActivity;
    BOOL _invalidated;
    NSUInteger _stateHandle;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // ivar: _dataSourceQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MPNowPlayingInfoLyricsDelegate> *lyricsDelegate;
@property (retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (weak, nonatomic) NSObject<MPNowPlayingPlaybackQueueDataSource> *playbackQueueDataSource;
@property (weak, nonatomic) NSObject<MPNowPlayingPlaybackQueueDelegate> *playbackQueueDelegate; // ivar: _playbackQueueDelegate
@property (nonatomic) NSUInteger playbackState;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (copy, nonatomic) NSString *representedApplicationBundleIdentifier; // ivar: _representedApplicationBundleIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsArtworkCatalogLoading;


+(id)defaultCenter;
+(id)infoCenterForPlayerID:(id)arg0 ;
+(id)infoCenterForPlayerPath:(id)arg0 ;
+(id)serviceQueue;
-(*void)_createPlaybackQueueForRequest:(*void)arg0 ;
-(BOOL)isInvalidated;
-(id)_artworkCatalogForContentItem:(id)arg0 ;
-(id)_childContentItemForContentItem:(id)arg0 index:(NSInteger)arg1 ;
-(id)_contentItemForIdentifier:(id)arg0 ;
-(id)_contentItemForIdentifier:(id)arg0 alreadyOnDataSourceQueue:(BOOL)arg1 ;
-(id)_contentItemIDsInRange:(struct ? )arg0 itemsRange:(struct ? *)arg1 ;
-(id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg0 ;
-(id)_onQueue_stateDictionary;
-(id)artworkCatalogBlockForContentItem:(SEL)arg0 ;
-(id)init;
-(id)initWithPlayerID:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 ;
-(void)_becomeActiveIfPossibleWithCompletion:(id)arg0 ;
-(void)_becomeActiveWithCompletion:(id)arg0 ;
-(void)_contentItemChangedNotification:(id)arg0 ;
-(void)_getMetadataForContentItem:(id)arg0 completion:(id)arg1 ;
-(void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg0 preferredSessionType:(id)arg1 completion:(id)arg2 ;
-(void)_initializeNowPlayingInfo;
-(void)_invalidatePlaybackQueueImmediatelyWithCompletion:(id)arg0 ;
-(void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange )arg0 completion:(id)arg1 ;
-(void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
-(void)_onQueue_pushContentItemsUpdate;
-(void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)arg0 ;
-(void)_onQueue_registerLyricsDelegateCallbacks:(id)arg0 ;
-(void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg0 ;
-(void)becomeActive;
-(void)becomeActiveSystemFallback;
-(void)dealloc;
-(void)invalidate;
-(void)invalidatePlaybackQueue;
-(void)invalidatePlaybackQueueWithCompletion:(id)arg0 ;
-(void)resignActiveSystemFallback;


@end


#endif