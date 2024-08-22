// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDIACONTROLLER_H
#define SBMEDIACONTROLLER_H

@class NSDictionary, NSTimer, MRScreenMirroringObserver, MPAVRoutingController, NSNumber, NSDate, SBSStatusBarStyleOverridesAssertion, NSString;
@protocol MPAVRoutingControllerDelegate, FBSDisplayObserving, SBAVSystemControllerCacheObserver;

#import <Foundation/Foundation.h>

#import "SBApplication.h"
#import "SBAVSystemControllerCache.h"
#import "SBVolumeControl.h"
#import "SBDirectToAirPlayController.h"

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate, FBSDisplayObserving, SBAVSystemControllerCacheObserver>

 {
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    BOOL _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    SBApplication *_lastNowPlayingApplication;
    BOOL _lastNowPlayingAppIsPlaying;
    int _lastMediaRemoteAppActivityStatus;
    BOOL _suppressHUD;
    BOOL _screenSharingViaAVSystemController;
    BOOL _screenSharingViaDisplayMonitor;
    BOOL _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
    NSTimer *_videoOutStatusBarOverrideTimer;
    MRScreenMirroringObserver *_screenMirroringObserver;
    MPAVRoutingController *_routingController;
    SBAVSystemControllerCache *_avCache;
    SBVolumeControl *_volumeControl;
    NSNumber *_audioCategoryMusicVolume;
    NSDate *_lastActivityDate;
    SBSStatusBarStyleOverridesAssertion *_screenSharingStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_videoOutStatusBarStyleOverrideAssertion;
    SBDirectToAirPlayController *_directToAirPlayController;
    *IONotificationPort _arubaDisplayPortNotificationPort;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, weak, nonatomic) SBApplication *nowPlayingApplication;
@property (nonatomic) int nowPlayingProcessPID; // ivar: _nowPlayingProcessPID
@property (readonly) Class superclass;
@property BOOL suppressHUD;


+(BOOL)applicationCanBeConsideredNowPlaying:(id)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)sendResetPlaybackTimeoutCommand;
-(BOOL)_displayMonitorHasAConnectedExternalIdentity;
-(BOOL)_sendMediaCommand:(unsigned int)arg0 options:(id)arg1 ;
-(BOOL)addTrackToWishListForEventSource:(NSInteger)arg0 ;
-(BOOL)banTrackForEventSource:(NSInteger)arg0 ;
-(BOOL)beginSeek:(int)arg0 eventSource:(NSInteger)arg1 ;
-(BOOL)changeTrack:(int)arg0 eventSource:(NSInteger)arg1 ;
-(BOOL)endSeek:(int)arg0 eventSource:(NSInteger)arg1 ;
-(BOOL)handsetRouteIsSelected;
-(BOOL)hasTrack;
-(BOOL)isApplicationActivityActive;
-(BOOL)isFirstTrack;
-(BOOL)isLastTrack;
-(BOOL)isPaused;
-(BOOL)isPlaying;
-(BOOL)isScreenSharing;
-(BOOL)likeTrackForEventSource:(NSInteger)arg0 ;
-(BOOL)pauseForEventSource:(NSInteger)arg0 ;
-(BOOL)playForEventSource:(NSInteger)arg0 ;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(BOOL)setPlaybackSpeed:(int)arg0 eventSource:(NSInteger)arg1 ;
-(BOOL)stopForEventSource:(NSInteger)arg0 ;
-(BOOL)togglePlayPauseForEventSource:(NSInteger)arg0 ;
-(BOOL)toggleRepeatForEventSource:(NSInteger)arg0 ;
-(BOOL)toggleShuffleForEventSource:(NSInteger)arg0 ;
-(BOOL)volumeControlIsAvailable;
-(BOOL)wirelessDisplayRouteIsPicked;
-(id)_nowPlayingInfo;
-(id)init;
-(id)nameOfPickedRoute;
-(void)_applicationActivityStatusDidChange:(id)arg0 ;
-(void)_authenticationStateChanged:(id)arg0 ;
-(void)_clearScreenSharingStatusBarStyleOverride;
-(void)_clearVideoOutStatusBarStyleOverride;
-(void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg0 ;
-(void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg0 ;
-(void)_mediaRemoteNowPlayingInfoDidChange:(id)arg0 ;
-(void)_notifyThatScreenSharingChanged;
-(void)_nowPlayingAppDidExit:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_startVideoOutStatusBarStyleOverride;
-(void)_unregisterForNotifications;
-(void)_updateAVRoutes;
-(void)_updateDisplayMonitorState;
-(void)_updateLastRecentActivityDate;
-(void)_updateScreenMirroringObserverWithSuppressionPreferenceFromDefaults:(id)arg0 ;
-(void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg0 ;
-(void)_updateVideoOutStatusBarStyleOverride;
-(void)cache:(id)arg0 didUpdateAirplayDisplayActive:(BOOL)arg1 ;
-(void)cacheDidRebuildAfterServerDeath:(id)arg0 ;
-(void)cancelVolumeEvent;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;
-(void)setNowPlayingInfo:(id)arg0 ;
-(void)updateScreenSharingStatusBarStyleOverride;


@end


#endif