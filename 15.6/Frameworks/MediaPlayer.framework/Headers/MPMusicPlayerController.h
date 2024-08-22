// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERCONTROLLER_H
#define MPMUSICPLAYERCONTROLLER_H

@class NSString, NSXPCConnection, NSArray;
@protocol MPArtworkDataSource, MPVolumeControllerDelegate, MPMusicPlayerControllerClient, MPMediaPlayback, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPMusicPlayerControllerNowPlaying.h"
#import "MPMusicPlayerControllerNowPlayingTimeSnapshot.h"
#import "MPMediaItem.h"
#import "MPMusicPlayerQueueDescriptor.h"
#import "MPVolumeController.h"

@interface MPMusicPlayerController : NSObject <MPArtworkDataSource, MPVolumeControllerDelegate, MPMusicPlayerControllerClient, MPMediaPlayback>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) NSUInteger currentChapterIndex;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) CGFloat currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfNowPlayingItem;
@property (readonly, nonatomic) BOOL isNowPlayingItemFromGeniusMix;
@property (readonly, nonatomic) BOOL isPreparedToPlay; // ivar: _isPreparedToPlay
@property (readonly, nonatomic) NSArray *lastContentItemIDs; // ivar: _lastContentItemIDs
@property (readonly, nonatomic) MPMusicPlayerControllerNowPlaying *lastServerNowPlaying; // ivar: _lastServerNowPlaying
@property (readonly, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *lastServerTimeSnapshot; // ivar: _lastServerTimeSnapshot
@property (readonly, nonatomic) NSInteger notificationsCounter; // ivar: _notificationsCounter
@property (copy, nonatomic) MPMediaItem *nowPlayingItem;
@property (nonatomic) NSInteger playbackSpeed;
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger repeatMode;
@property (readonly, nonatomic) MPMusicPlayerControllerNowPlaying *serverNowPlaying; // ivar: _serverNowPlaying
@property (readonly, nonatomic) MPMusicPlayerQueueDescriptor *serverQueueDescriptor; // ivar: _serverQueueDescriptor
@property (readonly, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *serverTimeSnapshot; // ivar: _serverTimeSnapshot
@property (nonatomic) NSInteger shuffleMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPMusicPlayerQueueDescriptor *targetQueueDescriptor; // ivar: _targetQueueDescriptor
@property (nonatomic) float volume;
@property (readonly, nonatomic) MPVolumeController *volumeController; // ivar: _volumeController


+(id)alloc;
+(id)applicationMusicPlayer;
+(id)applicationQueuePlayer;
+(id)iPodMusicPlayer;
+(id)systemMusicPlayer;
+(void)setRunLoopForNotifications:(id)arg0 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)isGeniusAvailable;
-(BOOL)isGeniusAvailableForSeedItems:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)userQueueModificationsDisabled;
-(NSUInteger)numberOfItems;
-(id)_mediaItemFromNowPlaying:(id)arg0 ;
-(id)_nowPlaying;
-(id)_snapshot;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 queue:(id)arg1 ;
-(id)nowPlayingAtIndex:(NSInteger)arg0 ;
-(id)nowPlayingItemAtIndex:(NSUInteger)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_clearConnection;
-(void)_establishConnectionIfNeeded;
-(void)_onQueue_applyServerStateUpdateRecord:(id)arg0 ;
-(void)_postPrivateQueueDidChangeNotificationWithContentItemIDs:(id)arg0 ;
-(void)adjustLoadedQueueRangeToReverseCount:(NSInteger)arg0 forwardCount:(NSInteger)arg1 ;
-(void)appendQueueDescriptor:(id)arg0 ;
-(void)applyServerStateUpdateRecord:(id)arg0 ;
-(void)beginGeneratingPlaybackNotifications;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)dealloc;
-(void)endGeneratingPlaybackNotifications;
-(void)endSeeking;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)onServer:(id)arg0 ;
// -(void)onServerAsync:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)onServerAsync:(id)arg0 errorHandler:(unk)arg1 timeout:(id)arg2 retryEnabled:(unk)arg3  ;
-(void)pause;
-(void)pauseWithFadeoutDuration:(CGFloat)arg0 ;
-(void)play;
-(void)prepareQueueForPlayback;
-(void)prepareToPlay;
-(void)prepareToPlayWithCompletionHandler:(id)arg0 ;
-(void)prependQueueDescriptor:(id)arg0 ;
-(void)serverItemDidEnd;
-(void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)arg0 ;
-(void)serverQueueDidEnd;
-(void)setUserQueueModificationsDisabled:(BOOL)arg0 ;
-(void)shuffle;
-(void)skipToBeginning;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)stop;
-(void)volumeController:(id)arg0 mutedStateDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif