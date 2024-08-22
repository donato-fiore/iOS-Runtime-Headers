// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYBACKENGINE_H
#define MPCPLAYBACKENGINE_H

@class NSString, MPProtocolProxy<MPCPlaybackEngineEventObserving>, NSXPCListenerEndpoint;
@protocol MPCExplicitContentAuthorizationDelegate, MPCPlaybackEngineDelegate, MPCPlaybackEngineImplementation, MPCPlaybackEngineInitializationParameters, MPCVideoOutput;

#import <Foundation/Foundation.h>

#import "_MPCPlaybackAccountManager.h"
#import "MPCAudioSpectrumAnalyzer.h"
#import "MPCPlaybackEngineEventStream.h"
#import "_MPCFairPlayPerformanceController.h"
#import "MPCPlaybackIntent.h"
#import "_MPCLeaseManager.h"
#import "_MPCMediaRemotePublisher.h"
#import "_MPCMusicPlayerControllerServer.h"
#import "MPCPlayerPath.h"
#import "_MPCReportingController.h"
#import "_MPCPlaybackEngineSessionManager.h"

@interface MPCPlaybackEngine : NSObject <MPCExplicitContentAuthorizationDelegate>



@property (readonly, nonatomic) _MPCPlaybackAccountManager *accountManager; // ivar: _accountManager
@property (readonly, nonatomic) MPCAudioSpectrumAnalyzer *audioAnalyzer; // ivar: _audioAnalyzer
@property (nonatomic, getter=isAudioAnalyzerEnabled) BOOL audioAnalyzerEnabled; // ivar: _audioAnalyzerEnabled
@property (copy, nonatomic) NSString *audioSessionCategory; // ivar: _audioSessionCategory
@property (nonatomic) NSUInteger audioSessionOptions; // ivar: _audioSessionOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPCPlaybackEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *engineID; // ivar: _engineID
@property (readonly, nonatomic) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver; // ivar: _eventObserver
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // ivar: _eventStream
@property (readonly, nonatomic) _MPCFairPlayPerformanceController *fairPlayPerformanceController; // ivar: _fairPlayPerformanceController
@property (retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent; // ivar: _fallbackPlaybackIntent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineImplementation> *implementation; // ivar: _implementation
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineInitializationParameters> *initializationParameters; // ivar: _initializationParameters
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager; // ivar: _leaseManager
@property (readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher; // ivar: _mediaRemotePublisher
@property (readonly, nonatomic) _MPCMusicPlayerControllerServer *musicPlayerControllerServer; // ivar: _musicPlayerControllerServer
@property (nonatomic) BOOL needsUISnapshot; // ivar: _needsUISnapshot
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported; // ivar: _pictureInPictureSupported
@property (readonly, copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (nonatomic, getter=isQueueHandoffSupported) BOOL queueHandoffSupported; // ivar: _queueHandoffSupported
@property (readonly, nonatomic) _MPCReportingController *reportingController; // ivar: _reportingController
@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) BOOL scheduledPlaybackStatePreservation; // ivar: _scheduledPlaybackStatePreservation
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly, nonatomic) _MPCPlaybackEngineSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported; // ivar: _stateRestorationSupported
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemMusicApplication) BOOL systemMusicApplication; // ivar: _systemMusicApplication
@property (readonly, nonatomic) NSObject<MPCVideoOutput> *videoOutput; // ivar: _videoOutput
@property (nonatomic, getter=isVideoSupported) BOOL videoSupported; // ivar: _videoSupported


+(BOOL)requiresMainThread;
+(BOOL)usesNewPlaybackImplementation;
+(void)preheatPlayback;
-(BOOL)_shouldIgnorePlaybackSessionError:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithPlayerID:(id)arg0 ;
-(void)_detectCrashLoopForSessionIdentifier:(id)arg0 block:(id)arg1 ;
-(void)_initializePlaybackStack;
-(void)_screenBrightnessDidChangeNotification:(id)arg0 ;
-(void)_updateUISnapshotIfNeeded;
-(void)addEngineObserver:(id)arg0 ;
-(void)becomeActive;
-(void)dealloc;
-(void)invalidate;
-(void)removeEngineObserver:(id)arg0 ;
-(void)reportUserBackgroundedApplication;
-(void)reportUserSeekFromTime:(CGFloat)arg0 toTime:(CGFloat)arg1 ;
-(void)requestAuthorizationForExplicitItem:(id)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)restoreStateWithCompletion:(id)arg0 ;
-(void)schedulePlaybackStatePreservation;
-(void)start;


@end


#endif