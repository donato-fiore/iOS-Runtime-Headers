// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAPLAYBACKENGINE_H
#define HFCAMERAPLAYBACKENGINE_H

@class NSArray, HMCameraProfile, HMCameraClipManager, HMCameraClip, NSString, HMHome, NSDate, HMCameraSource, NSUUID, NADelegateDispatcher, NSMapTable, NSError, AVPlayer;
@protocol HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate, HFCameraClipPlaying, HFCameraClipScrubbing, HFCameraLiveStreamControlling;

#import <Foundation/Foundation.h>

#import "HFCameraPlaybackEngineCache.h"
#import "HFCameraPlaybackPosition.h"
#import "HFCameraAnalyticsCameraClipPlaybackSessionEvent.h"

@interface HFCameraPlaybackEngine : NSObject <HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>



@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (weak, nonatomic) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly, nonatomic) NSObject<HFCameraClipPlaying> *clipPlayer; // ivar: _clipPlayer
@property (readonly, nonatomic) NSObject<HFCameraClipScrubbing> *clipScrubber; // ivar: _clipScrubber
@property (readonly, nonatomic) HMCameraClip *currentClip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger engineMode; // ivar: _engineMode
@property (retain, nonatomic) HFCameraPlaybackEngineCache *eventCache; // ivar: _eventCache
@property (readonly, nonatomic) BOOL hasRecordingEvents;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) BOOL isCameraPortraitMode;
@property (nonatomic) NSInteger lastPlayerTimeControlStatus; // ivar: _lastPlayerTimeControlStatus
@property (copy, nonatomic) NSDate *lastRequestedClipPlaybackDate; // ivar: _lastRequestedClipPlaybackDate
@property (retain, nonatomic) HMCameraSource *liveCameraSource; // ivar: _liveCameraSource
@property (readonly, nonatomic) NSObject<HFCameraLiveStreamControlling> *liveStreamController; // ivar: _liveStreamController
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // ivar: _microphoneEnabled
@property (retain, nonatomic) NSUUID *notificationCenterClipUUID; // ivar: _notificationCenterClipUUID
@property (readonly, nonatomic) NADelegateDispatcher *observerDispatcher; // ivar: _observerDispatcher
@property (readonly, nonatomic) NSMapTable *observerStates; // ivar: _observerStates
@property (readonly, copy, nonatomic) NSArray *observers;
@property (nonatomic, getter=isPictureInPictureModeActive) BOOL pictureInPictureModeActive; // ivar: _pictureInPictureModeActive
@property (nonatomic) NSUInteger playbackContentType; // ivar: _playbackContentType
@property (retain, nonatomic) NSError *playbackError; // ivar: _playbackError
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (nonatomic) NSUInteger playbackRetryAttempts; // ivar: _playbackRetryAttempts
@property (retain, nonatomic) HFCameraAnalyticsCameraClipPlaybackSessionEvent *playbackSessionEvent; // ivar: _playbackSessionEvent
@property (readonly, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL prefersAudioEnabled; // ivar: _prefersAudioEnabled
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) NSUInteger scrubbingInProgressCount; // ivar: _scrubbingInProgressCount
@property (nonatomic) NSUInteger scrubbingSpeed; // ivar: _scrubbingSpeed
@property (nonatomic) BOOL shouldBypassHighQualityScrubbing; // ivar: _shouldBypassHighQualityScrubbing
@property (nonatomic) BOOL shouldBypassVideoFetchRequest; // ivar: _shouldBypassVideoFetchRequest
@property (readonly, nonatomic) BOOL shouldDisplayVolumeControls;
@property (nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled; // ivar: _streamAudioEnabled
@property (nonatomic) float streamAudioVolume; // ivar: _streamAudioVolume
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timeControlStatus; // ivar: _timeControlStatus
@property (nonatomic) NSUInteger timelineState; // ivar: _timelineState
@property (nonatomic, getter=isUserScrubbing) BOOL userScrubbing; // ivar: _userScrubbing
@property (nonatomic) BOOL wantsToPlay; // ivar: _wantsToPlay


+(NSUInteger)hf_indexOfClipForDate:(id)arg0 inEvents:(id)arg1 enumerationOptions:(NSUInteger)arg2 searchOptions:(NSUInteger)arg3 ;
+(id)findClipPositionForDate:(id)arg0 inEvents:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isFirstEventOfTheDay:(id)arg0 ;
-(BOOL)isLiveStreamPlaying;
-(BOOL)isLiveStreaming;
-(NSUInteger)_derivedTimeControlStatus;
-(id)_derivedPlaybackError;
-(id)findClipPositionForDate:(id)arg0 ;
-(id)findClipPositionForDate:(id)arg0 options:(NSUInteger)arg1 ;
-(id)firstOfTheDayClipForDate:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)shortDebugDescription;
-(void)_setupClipPlayerWithClipManager:(id)arg0 ;
-(void)_setupLiveStreamController:(id)arg0 ;
-(void)_setupTimeObservationForObserver:(id)arg0 ;
-(void)_updatePlaybackStateNotifyingObservers:(BOOL)arg0 ;
-(void)_updatePlaybackStateNotifyingObservers:(BOOL)arg0 rebuildClipPlayerIfNeeded:(BOOL)arg1 ;
-(void)_updateStateForRequestedPlaybackPosition:(id)arg0 notifyObservers:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 withOptions:(id)arg1 ;
-(void)beginScrubbing;
-(void)clipPlayer:(id)arg0 didUpdateError:(id)arg1 isFatal:(BOOL)arg2 ;
-(void)clipPlayer:(id)arg0 didUpdateMuted:(BOOL)arg1 ;
-(void)clipPlayer:(id)arg0 didUpdateTimeControlStatus:(NSInteger)arg1 ;
-(void)clipPlayerDidPlayToEndTime:(id)arg0 ;
-(void)dealloc;
-(void)endScrubbing;
-(void)fetchCameraClipForNotificationUUID:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchCameraClipForUUID:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchCameraEventsWithCompletion:(id)arg0 ;
-(void)modifyPlaybackFromSender:(id)arg0 usingBlock:(id)arg1 ;
-(void)pause;
-(void)play;
-(void)recordingEventManager:(id)arg0 didRemoveRecordingEventsWithUUIDs:(id)arg1 ;
-(void)recordingEventManager:(id)arg0 didUpdateRecordingEvents:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)startPlaybackAtDate:(id)arg0 withClip:(id)arg1 ;
-(void)startPlaybackForCurrentClip;
-(void)streamControllerStateDidUpdate:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 ;
-(void)updateLiveStreamForCameraProfile:(id)arg0 ;
-(void)updatePlaybackPositionToDate:(id)arg0 usingClip:(id)arg1 ;


@end


#endif