// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCMEDIAREMOTEPUBLISHER_H
#define _MPCMEDIAREMOTEPUBLISHER_H

@class MPLibraryAddStatusObserver, NSArray, NSString, NSUserDefaults, MPRemoteCommandCenter, MPNowPlayingInfoCenter;
@protocol MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCPlayerPath.h"

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving>

 {
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;
    os_unfair_lock_s _libraryAddStatusObserverLock;
    NSArray *_accounts;
    BOOL _activeAccountAllowsSubscriptionPlayback;
    BOOL _activeAccountRequiresAuthorizationTokensForPlayback;
    NSString *_activeAccountStoreFrontIdentifier;
    NSUserDefaults *_ipodDefaults;
    BOOL _hasBeganFastForward;
    BOOL _hasBeganRewind;
    NSObject<OS_dispatch_source> *_nextPreviousTrackCooldownTimer;
    NSInteger _deferredTrackChangeDelta;
}


@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // ivar: _commandCenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEngineRestoringState) BOOL engineRestoringState; // ivar: _engineRestoringState
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // ivar: _infoCenter
@property (nonatomic, getter=hasInitializedSupportedCommands) BOOL initializedSupportedCommands; // ivar: _initializedSupportedCommands
@property (nonatomic, getter=isMediaServerAvailable) BOOL mediaServerAvailable; // ivar: _mediaServerAvailable
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_canInsertPlaybackContext:(id)arg0 forUser:(id)arg1 ;
-(BOOL)_isRestrictedSubscriptionUser:(id)arg0 ;
-(BOOL)_playbackStateIsIdle:(NSInteger)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_exportableSessionTypes;
-(id)_supportedSessionTypes;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)nowPlayingInfoCenter:(id)arg0 artworkCatalogForContentItem:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 artworkForContentItem:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemForID:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemIDForOffset:(NSInteger)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemIDsFromOffset:(NSInteger)arg1 toOffset:(NSInteger)arg2 nowPlayingIndex:(*NSInteger)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg0 lyricsForContentItem:(id)arg1 completion:(id)arg2 ;
-(id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg0 ;
-(void)_becomeActiveIfNeededWithCompletion:(id)arg0 ;
-(void)_commandEventDidTimeoutNotification:(id)arg0 ;
-(void)_disableQueueModificationsChangedNotification:(id)arg0 ;
-(void)_durationAvailableNotification:(id)arg0 ;
-(void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg0 play:(BOOL)arg1 completion:(id)arg2 ;
-(void)_likedStateChangedNotification:(id)arg0 ;
-(void)_performCommandEvent:(id)arg0 completion:(id)arg1 ;
-(void)_performDebugEvent:(id)arg0 completion:(id)arg1 ;
-(void)_updateLaunchCommands;
-(void)_updateSupportedCommands;
-(void)becomeActive;
-(void)engine:(id)arg0 didChangeAccounts:(id)arg1 ;
-(void)engine:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeCurrentItemVariantID:(id)arg1 ;
-(void)engine:(id)arg0 didChangeQueueWithReason:(id)arg1 ;
-(void)engine:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeToItem:(id)arg1 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engineDidEndStateRestoration:(id)arg0 ;
-(void)engineDidLoseMediaServices:(id)arg0 ;
-(void)engineDidResetMediaServices:(id)arg0 ;
-(void)engineWillBeginStateRestoration:(id)arg0 ;
-(void)getShouldRestoreStateWithCompletion:(id)arg0 ;
-(void)leaveSharedSessionWithCommandID:(id)arg0 completion:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didBeginLyricsEvent:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didEndLyricsEvent:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didEndMigrationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)nowPlayingInfoCenter:(id)arg0 getTransportablePlaybackSessionRepresentationForRequest:(id)arg1 completion:(id)arg2 ;
-(void)nowPlayingInfoCenter:(id)arg0 willBeginSessionMigrationWithIdentifier:(id)arg1 ;
-(void)publishIfNeeded;
-(void)reportUserBackgroundedApplication;


@end


#endif