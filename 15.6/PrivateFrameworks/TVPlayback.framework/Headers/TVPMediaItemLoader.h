// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPMEDIAITEMLOADER_H
#define TVPMEDIAITEMLOADER_H

@class AVURLAsset, NSString, NSTimer, NSError, NSNotification;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue, TVPMediaItem;

#import <Foundation/Foundation.h>

#import "TVPContentKeySession.h"
#import "TVPStateMachine.h"
#import "TVPMediaItemTimingData.h"

@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate>



@property (retain, nonatomic) AVURLAsset *AVAsset; // ivar: _AVAsset
@property (retain, nonatomic) AVURLAsset *AVAssetInternal; // ivar: _AVAssetInternal
@property (nonatomic) BOOL AVAudioSessionConfiguredAfterMediaServicesReset; // ivar: _AVAudioSessionConfiguredAfterMediaServicesReset
@property (nonatomic) BOOL allowsCellularUsage; // ivar: _allowsCellularUsage
@property (nonatomic) BOOL allowsConstrainedNetworkUsage; // ivar: _allowsConstrainedNetworkUsage
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetInternalAccessQueue; // ivar: _assetInternalAccessQueue
@property (nonatomic) NSUInteger assetLoadContext; // ivar: _assetLoadContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue; // ivar: _assetLoadContextAccessQueue
@property (nonatomic) BOOL cleanedUp; // ivar: _cleanedUp
@property (readonly, nonatomic) BOOL containsStreamingAVAsset;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession; // ivar: _contentKeySession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *diskSpaceMonitorTimer; // ivar: _diskSpaceMonitorTimer
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) AVURLAsset *existingAVAsset; // ivar: _existingAVAsset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (copy, nonatomic) NSString *mediaItemLoaderGUID; // ivar: _mediaItemLoaderGUID
@property (nonatomic) NSUInteger refCount; // ivar: _refCount
@property (retain, nonatomic) id *reportingHierarchyToken; // ivar: _reportingHierarchyToken
@property (retain, nonatomic) NSNotification *savedMediaServerResetUserNotification; // ivar: _savedMediaServerResetUserNotification
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) TVPMediaItemTimingData *timingData; // ivar: _timingData


+(id)loaderForMediaItem:(id)arg0 ;
+(id)tempDirURL;
+(void)initialize;
+(void)removeTemporaryDownloadDirectory;
-(BOOL)_needToLoadBlockingMetadataKeys;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForRenewalOfRequestedResource:(id)arg1 ;
-(NSUInteger)_rollTypeFromMetadataItemKey:(id)arg0 ;
-(NSUInteger)_skipTypeFromMetadataItemKey:(id)arg0 ;
-(id)_advisoryInfoFromMetadata:(id)arg0 keyIdentifierMap:(id)arg1 withTotalCount:(NSUInteger)arg2 ;
-(id)_advisoryKeyNamesWithCount:(NSUInteger)arg0 ;
-(id)_avAssetOptions;
-(id)_contentKeyRequestParamsFromBase64String:(id)arg0 ;
-(id)_metadataKeysToLoad;
-(id)_numberValueForKey:(id)arg0 fromMetadata:(id)arg1 andKeyIdentifierMap:(id)arg2 ;
-(id)_productPlacementInfoFromMetadata:(id)arg0 keyIdentifierMap:(id)arg1 ;
-(id)_rollInfoFromMetadata:(id)arg0 keyIdentifierMap:(id)arg1 forType:(NSUInteger)arg2 withTotalCount:(NSUInteger)arg3 ;
-(id)_rollKeyNameFromType:(NSUInteger)arg0 ;
-(id)_rollKeyNamesForType:(NSUInteger)arg0 withCount:(NSUInteger)arg1 ;
-(id)_skipInfoFromMetadata:(id)arg0 keyIdentifierMap:(id)arg1 forType:(NSUInteger)arg2 withTotalCount:(NSUInteger)arg3 ;
-(id)_skipKeyNameFromType:(NSUInteger)arg0 ;
-(id)_skipKeyNamesForType:(NSUInteger)arg0 withCount:(NSUInteger)arg1 ;
-(id)_stringValueForKey:(id)arg0 fromMetadata:(id)arg1 andKeyIdentifierMap:(id)arg2 ;
-(id)_tomatoFreshnessFromString:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 ;
-(id)newPlayerItem;
-(void)_avAssetMediaServicesReset:(id)arg0 ;
-(void)_avAudioSessionConfiguredAfterMediaServicesReset;
-(void)_avAudioSessionMediaServicesReset:(id)arg0 ;
-(void)_cleanUp;
-(void)_loadMediaItemMetadataAsynchronously;
-(void)_mediaItemPlaybackErrorDidOccur:(id)arg0 ;
-(void)_mediaItemStopPlayback:(id)arg0 ;
-(void)_postMediaServicesResetFailureWithNotification:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)_stopBackgroundCaching:(id)arg0 ;
-(void)cleanupIfNecessary;
-(void)dealloc;
-(void)loadIfNecessary;
-(void)loadSHA1DigestWithCompletion:(id)arg0 ;
-(void)prepareForPlaybackInitiation;


@end


#endif