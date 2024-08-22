// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCMEDIAREMOTEPUBLISHER_H
#define _MPCMEDIAREMOTEPUBLISHER_H

@class MPLibraryAddStatusObserver, NSArray, NSString, NSUserDefaults, MSVBlockGuard, MPRemoteCommandCenter, MPNowPlayingInfoCenter, NSDictionary;
@protocol MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving, MPCPlaybackAccountManagerObserver, MPCQueueControllerPublisher, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "_MPCMediaRemotePublisher_Swift.h"

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving, MPCPlaybackAccountManagerObserver, MPCQueueControllerPublisher>

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
    NSArray *_lastCommandDescriptions;
    MSVBlockGuard *_setPlaybackQueueExtendedTimeGuard;
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
@property (retain, nonatomic) NSDictionary *lastPerformanceMetrics; // ivar: _lastPerformanceMetrics
@property (nonatomic, getter=isMediaServerAvailable) BOOL mediaServerAvailable; // ivar: _mediaServerAvailable
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _MPCMediaRemotePublisher_Swift *swift; // ivar: _swift


-(id)_exportableSessionTypes;
-(id)_supportedSessionTypes;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)nowPlayingInfoCenter:(id)arg0 artworkCatalogForContentItem:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 artworkForContentItem:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemForID:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemIDForOffset:(NSInteger)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg0 contentItemIDsFromOffset:(NSInteger)arg1 toOffset:(NSInteger)arg2 nowPlayingIndex:(*NSInteger)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg0 infoForContentItem:(id)arg1 completion:(id)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg0 lyricsForContentItem:(id)arg1 completion:(id)arg2 ;
-(id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg0 ;
-(void)_beginBackgroundTaskUntilPlayCommandWithCommand:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_commandEventDidTimeoutNotification:(id)arg0 ;
-(void)_durationAvailableNotification:(id)arg0 ;
-(void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg0 play:(BOOL)arg1 completion:(id)arg2 ;
-(void)_likedStateChangedNotification:(id)arg0 ;
-(void)_performCommandEvent:(id)arg0 completion:(id)arg1 ;
-(void)_performDebugEvent:(id)arg0 completion:(id)arg1 ;
-(void)_updateLaunchCommands;
-(void)_updateSupportedCommands;
-(void)accountManager:(id)arg0 didChangeAccounts:(id)arg1 ;
-(void)becomeActive;
-(void)becomeActiveIfNeededWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeCurrentItemVariantID:(id)arg1 ;
-(void)engine:(id)arg0 didChangeQueueController:(id)arg1 ;
-(void)engine:(id)arg0 didChangeQueueWithReason:(id)arg1 ;
-(void)engine:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeToItem:(id)arg1 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 didReceivePickedRouteChange:(id)arg1 ;
-(void)engineDidBlockVocalAttenuation:(id)arg0 ;
-(void)engineDidChangeVocalAttenuationLevel:(id)arg0 ;
-(void)engineDidChangeVocalAttenuationState:(id)arg0 ;
-(void)engineDidEndStateRestoration:(id)arg0 ;
-(void)engineDidLoseMediaServices:(id)arg0 ;
-(void)engineDidResetMediaServices:(id)arg0 ;
-(void)engineDidUnblockVocalAttenuation:(id)arg0 ;
-(void)engineWillBeginStateRestoration:(id)arg0 ;
-(void)getShouldRestoreStateWithCompletion:(id)arg0 ;
-(void)invalidateQueueTypesWithReason:(id)arg0 ;
-(void)invalidateSessionTypesWithReason:(id)arg0 ;
-(void)leaveSharedSessionWithCommandID:(id)arg0 completion:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didBeginLyricsEvent:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didEndLyricsEvent:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg0 didEndMigrationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)nowPlayingInfoCenter:(id)arg0 getTransportablePlaybackSessionRepresentationForRequest:(id)arg1 completion:(id)arg2 ;
-(void)nowPlayingInfoCenter:(id)arg0 willBeginSessionMigrationWithIdentifier:(id)arg1 ;
-(void)performSetQueue:(id)arg0 completion:(id)arg1 ;
-(void)performSetQueueWithIntent:(id)arg0 completion:(id)arg1 ;
-(void)publishIfNeeded;
-(void)reportUserBackgroundedApplication;
-(void)updatePlaybackMetrics:(id)arg0 ;


@end


#endif