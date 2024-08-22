// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYBACKENGINE_H
#define MPCPLAYBACKENGINE_H

@class NSString, MPProtocolProxy<_MPCPlaybackEngineEventObserving>, MPAVRoute, MPAVRoutingController, NSXPCListenerEndpoint;
@protocol MPCQueueControllerDelegate, MPCQueueControllerBehaviorMusicDelegate, MPCQueueControllerBehaviorMusicSharePlayDelegate, MPCExplicitContentAuthorizationDelegate, MPAVRoutingControllerDelegate, MPCPlaybackEngineActiveItem, MPCPlaybackEngineDelegate, MPCPlaybackEngineInitializationParameters, MPCVideoOutput;

#import <Foundation/Foundation.h>

#import "MPCAudioSpectrumAnalyzer.h"
#import "MPCPlaybackEngineEventStream.h"
#import "MPCPlaybackIntent.h"
#import "_MPCLeaseManager.h"
#import "_MPCMediaRemotePublisher.h"
#import "_MPCMusicPlayerControllerServer.h"
#import "_MPCPlaybackEnginePlayer.h"
#import "MPCQueueController.h"
#import "_MPCReportingController.h"
#import "_MPCPlaybackEngineSessionManager.h"
#import "MPCWhiskyController.h"

@interface MPCPlaybackEngine : NSObject <MPCQueueControllerDelegate, MPCQueueControllerBehaviorMusicDelegate, MPCQueueControllerBehaviorMusicSharePlayDelegate, MPCExplicitContentAuthorizationDelegate, MPAVRoutingControllerDelegate>



@property (readonly, copy, nonatomic) NSObject<MPCPlaybackEngineActiveItem> *activeItem; // ivar: _activeItem
@property (readonly, nonatomic) MPCAudioSpectrumAnalyzer *audioAnalyzer; // ivar: _audioAnalyzer
@property (nonatomic, getter=isAudioAnalyzerEnabled) BOOL audioAnalyzerEnabled; // ivar: _audioAnalyzerEnabled
@property (copy, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (nonatomic) NSUInteger audioSessionOptions; // ivar: _audioSessionOptions
@property (readonly, nonatomic) CGFloat currentAudioProcessingDelay;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPCPlaybackEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAutoPlay; // ivar: _disableAutoPlay
@property (nonatomic) BOOL disableRepeat; // ivar: _disableRepeat
@property (nonatomic) BOOL disableShuffle; // ivar: _disableShuffle
@property (readonly, copy, nonatomic) NSString *engineID; // ivar: _engineID
@property (readonly, nonatomic) MPProtocolProxy<_MPCPlaybackEngineEventObserving> *eventObserver; // ivar: _eventObserver
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent; // ivar: _fallbackPlaybackIntent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineInitializationParameters> *initializationParameters; // ivar: _initializationParameters
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager; // ivar: _leaseManager
@property (readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher; // ivar: _mediaRemotePublisher
@property (readonly, nonatomic) _MPCMusicPlayerControllerServer *musicPlayerControllerServer; // ivar: _musicPlayerControllerServer
@property (nonatomic) BOOL needsUISnapshot; // ivar: _needsUISnapshot
@property (readonly, nonatomic) MPAVRoute *pickedRoute; // ivar: _pickedRoute
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported; // ivar: _pictureInPictureSupported
@property (readonly, nonatomic) _MPCPlaybackEnginePlayer *player; // ivar: _player
@property (readonly, copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (retain, nonatomic) MPCQueueController *queueController; // ivar: _queueController
@property (nonatomic, getter=isQueueHandoffSupported) BOOL queueHandoffSupported; // ivar: _queueHandoffSupported
@property (readonly, nonatomic) _MPCReportingController *reportingController; // ivar: _reportingController
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) BOOL scheduledPlaybackStatePreservation; // ivar: _scheduledPlaybackStatePreservation
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly, nonatomic) _MPCPlaybackEngineSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *swiftStorage; // ivar: _swiftStorage
@property (nonatomic, getter=isSystemMusicApplication) BOOL systemMusicApplication; // ivar: _systemMusicApplication
@property (nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication; // ivar: _systemPodcastsApplication
@property (readonly, copy, nonatomic) NSString *targetContentItemID; // ivar: _targetContentItemID
@property (readonly, nonatomic) NSObject<MPCVideoOutput> *videoOutput; // ivar: _videoOutput
@property (nonatomic, getter=isVideoSupported) BOOL videoSupported; // ivar: _videoSupported
@property (readonly, nonatomic, getter=isVocalAttenuationAvailable) BOOL vocalAttenuationAvailable;
@property (readonly, nonatomic) MPCWhiskyController *vocalAttenuationController; // ivar: _vocalAttenuationController
@property (nonatomic, getter=isVocalAttenuationEnabled) BOOL vocalAttenuationEnabled; // ivar: _vocalAttenuationEnabled
@property (nonatomic) float vocalLevel;


+(void)preheatPlayback;
-(?)beginScanningWithDirection:(?)arg0 identifiercompletion;
-(?)loadSessionWithIdentifiercompletion;
-(?)reloadQueueForReasoncompletion;
-(BOOL)_shouldIgnorePlaybackSessionError:(id)arg0 ;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(NSInteger)arg0 ;
-(CGFloat)mapPlaybackTimeToUserTime:(CGFloat)arg0 ;
-(CGFloat)mapUserTimeToPlaybackTime:(CGFloat)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithPlayerID:(id)arg0 ;
-(void)_detectCrashLoopForSessionIdentifier:(id)arg0 block:(id)arg1 ;
-(void)_initializePlaybackStack;
-(void)_screenBrightnessDidChangeNotification:(id)arg0 ;
-(void)_updateUISnapshotIfNeeded;
-(void)addEngineObserver:(id)arg0 ;
-(void)becomeActive;
-(void)behavior:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)behavior:(id)arg0 didChangeExplicitContentState:(NSInteger)arg1 ;
-(void)behavior:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)behavior:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)behavior:(id)arg0 didEndSharePlaySessionWithReason:(NSInteger)arg1 ;
-(void)behavior:(id)arg0 didReceiveSharedListeningEvent:(id)arg1 ;
-(void)dealloc;
-(void)initializeSwiftStack;
-(void)invalidate;
-(void)queueController:(id)arg0 didChangeTargetContentItemID:(id)arg1 ;
-(void)queueController:(id)arg0 didDetectMismatchForActiveContentItemID:(id)arg1 targetContentItemID:(id)arg2 ;
-(void)queueController:(id)arg0 didIncrementVersionForSegment:(id)arg1 ;
-(void)queueControllerDidChangeContents:(id)arg0 ;
-(void)queueControllerDidReachUnexpectedEndOfQueue:(id)arg0 ;
-(void)removeEngineObserver:(id)arg0 ;
-(void)reportUserBackgroundedApplication;
-(void)reportUserSeekFromTime:(CGFloat)arg0 toTime:(CGFloat)arg1 ;
-(void)requestAuthorizationForExplicitItem:(id)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)restoreStateWithCompletion:(id)arg0 ;
-(void)routingController:(id)arg0 pickedRouteDidChange:(id)arg1 ;
-(void)schedulePlaybackStatePreservation;
-(void)start;


@end


#endif