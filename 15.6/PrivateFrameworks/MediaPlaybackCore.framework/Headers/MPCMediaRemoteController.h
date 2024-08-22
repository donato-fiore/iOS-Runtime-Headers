// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMEDIAREMOTECONTROLLER_H
#define MPCMEDIAREMOTECONTROLLER_H

@class NSString, NSMutableArray, MSVLRUDictionary, NSMutableDictionary, NSMapTable;
@protocol _MPArtworkCatalogOverlayDelegate, MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator, OS_dispatch_queue, MPArtworkDataSource;

#import <Foundation/Foundation.h>

#import "MPCFuture.h"
#import "MPCPlayerPath.h"

@interface MPCMediaRemoteController : NSObject <_MPArtworkCatalogOverlayDelegate, MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator>

 {
    MPCFuture *_playbackStateFuture;
    MPCFuture *_supportedCommandsFuture;
    MPCFuture *_playingItemIdentifierFuture;
    NSString *_playingItemIdentifier;
    MPCFuture *_queueIdentifierFuture;
    NSString *_queueIdentifier;
    _MSVSignedRange _loadedContentItemsRange;
    _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    NSMapTable *_contentItemIDsFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    NSUInteger _stateHandle;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *invalidationToken; // ivar: _invalidationToken
@property (readonly, nonatomic) NSObject<MPArtworkDataSource> *mediaRemoteArtworkDataSource; // ivar: _mediaRemoteArtworkDataSource
@property (readonly, nonatomic) MPCFuture *playbackState;
@property (readonly, nonatomic) NSInteger playbackStateCacheState; // ivar: _playbackStateCacheState
@property (readonly, nonatomic) MPCFuture *playingIdentifier;
@property (readonly, nonatomic) NSInteger playingIdentifierCacheState; // ivar: _playingIdentifierCacheState
@property (readonly, nonatomic) MPCFuture *queueIdentifier;
@property (readonly, nonatomic) NSInteger queueIdentifierCacheState; // ivar: _queueIdentifierCacheState
@property (readonly, nonatomic) NSObject<MPArtworkDataSource> *remotePlayerArtworkDataSource;
@property (retain, nonatomic) MPCPlayerPath *resolvedPlayerPath; // ivar: _resolvedPlayerPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPCFuture *supportedCommands;
@property (readonly, nonatomic) NSInteger supportedCommandsCacheState; // ivar: _supportedCommandsCacheState


+(BOOL)_shouldRegisterForNotifications;
+(id)controllerForPlayerPath:(id)arg0 ;
+(id)mediaRemoteReplyQueue;
+(void)_sendCommand:(unsigned int)arg0 options:(id)arg1 appOptions:(unsigned int)arg2 toPlayerPath:(id)arg3 completion:(id)arg4 ;
+(void)_sendLocalCommand:(unsigned int)arg0 playbackIntent:(id)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(id)arg4 ;
+(void)_sendRemoteCommand:(unsigned int)arg0 playbackIntent:(id)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(id)arg4 ;
+(void)sendCommand:(unsigned int)arg0 options:(id)arg1 toPlayerPath:(id)arg2 completion:(id)arg3 ;
-(NSInteger)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg0 size:(struct CGSize )arg1 ;
-(NSInteger)contentItemCacheStateForIdentifier:(id)arg0 ;
-(NSInteger)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange )arg0 ;
-(id)_artworkCatalogBlockForContentItem:(SEL)arg0 ;
-(id)_createExportableArtworkPropertiesForContentItem:(id)arg0 ;
-(id)_init;
-(id)_legacyCommands;
-(id)_onQueue_identifiersForRange:(struct _MSVSignedRange )arg0 ;
-(id)_onQueue_setOptimisticElapsedTimeForContentItem:(SEL)arg0 elapsedTime:(id)arg1 rate:(CGFloat)arg2 ;
-(id)_onQueue_setOptimisticPlaybackState:(SEL)arg0 withOptions:(unsigned int)arg1 ;
-(id)_onQueue_setOptimisticPlayingItemIdentifier:(SEL)arg0 ;
-(id)_onQueue_stateDictionary;
-(id)_onQueue_updateOptimisticStateForCommand:(SEL)arg0 options:(unsigned int)arg1 ;
-(id)artworkCatalogBlockForContentItem:(SEL)arg0 ;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg0 artworkIdentifier:(id)arg1 size:(struct CGSize )arg2 ;
-(id)contentItemForIdentifier:(id)arg0 ;
-(id)overlayVisualIdenticalityForCatalog:(id)arg0 ;
-(id)playQueueIdentifiersForRange:(struct _MSVSignedRange )arg0 ;
-(id)playQueueIdentifiersForRequest:(*void)arg0 ;
-(struct CGSize )overlayScaledFittingSizeForCatalog:(id)arg0 scaledFittingSize:(struct CGSize )arg1 ;
-(void)_contentItemArtworkChangedNotification:(id)arg0 ;
-(void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg0 ;
-(void)_onQueue_mergeContentItems:(id)arg0 queueRange:(struct _MSVSignedRange )arg1 requestRange:(struct _MSVSignedRange )arg2 ;
-(void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg0 ;
-(void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg0 artworkIdentifier:(id)arg1 ;
-(void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg0 afterContentItemIdentifier:(id)arg1 ;
-(void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg0 beforeContentItemIdentifier:(id)arg1 ;
-(void)_playbackQueueChangedNotification:(id)arg0 ;
-(void)_playbackQueueContentItemsChangedNotification:(id)arg0 ;
-(void)_playbackStateDidChangeNotification:(id)arg0 ;
-(void)_supportedCommandsDidChangedNotification:(id)arg0 ;
-(void)artworkCatalog:(id)arg0 didClearFromView:(id)arg1 ;
-(void)artworkCatalog:(id)arg0 didConfigureView:(id)arg1 withRepresentation:(id)arg2 ;
-(void)artworkCatalog:(id)arg0 willConfigureView:(id)arg1 ;
-(void)dealloc;
-(void)dictionary:(id)arg0 willRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidateAllTokens;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif