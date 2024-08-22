// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHHAPTICENGINE_H
#define CHHAPTICENGINE_H

@class NSString, AVAudioSession, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AVHapticPlayer.h"
#import "CHMetrics.h"
#import "HapticServerConfig.h"

@interface CHHapticEngine : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    map<unsigned long, std::pair<NSURL *, NSDictionary *>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<NSURL *, NSDictionary *>>>> _publicAudioResources;
    AVHapticPlayer *_player;
    BOOL _autoShutdownEnabled;
    BOOL _running;
    CGFloat _runTimeout;
    CHMetrics *_metrics;
}


@property (nonatomic) BOOL activateAudioSessionOnStart;
@property (readonly) NSString *audioPowerUsage; // ivar: _audioPowerUsage
@property (readonly) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;
@property CGFloat autoShutdownTimeout;
@property (readonly) AVAudioSession *avAudioSession; // ivar: _avAudioSession
@property (readonly) NSArray *availableLocalities;
@property (copy) id *clientFinishedHandler; // ivar: _clientFinishedHandler
@property NSUInteger currentPlayerBehavior; // ivar: _currentPlayerBehavior
@property (readonly) CGFloat currentTime;
@property (nonatomic) BOOL followAudioRoute;
@property (readonly) NSString *hapticPowerUsage; // ivar: _hapticPowerUsage
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL isMutedForAudio;
@property (nonatomic) BOOL isMutedForHaptics;
@property (readonly) NSString *locality;
@property (readonly) CHMetrics *metrics;
@property (nonatomic) BOOL muteHapticsWhileRecordingAudio;
@property (readonly) BOOL needsAudioPowerBudget;
@property (readonly) AVHapticPlayer *player;
@property (nonatomic) BOOL playsAudioOnly;
@property (nonatomic) BOOL playsHapticsOnly;
@property (readonly) NSString *priority; // ivar: _priority
@property (copy) id *resetHandler; // ivar: _resetHandler
@property BOOL running;
@property (readonly) HapticServerConfig *serverConfig; // ivar: _serverConfig
@property (readonly) BOOL sessionIsShared; // ivar: _sessionIsShared
@property (copy) id *stoppedHandler; // ivar: _stoppedHandler
@property (retain) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (readonly) NSString *usageCategory; // ivar: _usageCategory


+(BOOL)doUnregisterAudioResource:(NSUInteger)arg0 fromPattern:(BOOL)arg1 player:(id)arg2 error:(*id)arg3 ;
+(BOOL)resourceIsRegistered:(NSUInteger)arg0 ;
+(BOOL)supports1stPartyHaptics;
+(BOOL)supportsHapticServer;
+(NSUInteger)doRegisterAudioResource:(id)arg0 options:(id)arg1 fromPattern:(BOOL)arg2 player:(id)arg3 error:(*id)arg4 ;
+(id)capabilitiesForHardware;
+(void)clearResourceMap;
+(void)dispatchOnGlobal:(id)arg0 ;
+(void)initialize;
+(void)lazyInitResourceMap;
-(BOOL)checkEngineRunning:(*id)arg0 ;
-(BOOL)checkEngineStateOnStart:(*id)arg0 ;
-(BOOL)doInit:(unsigned int)arg0 sessionIsShared:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)doInitWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)doPlayPattern:(id)arg0 error:(*id)arg1 ;
-(BOOL)doReferenceAudioResourceByID:(NSUInteger)arg0 ;
-(BOOL)doStartEngineAndWait:(*id)arg0 ;
-(BOOL)doStopEngineAndWait:(*id)arg0 ;
-(BOOL)finishInit:(*id)arg0 ;
-(BOOL)hasPublicAudioResourceID:(NSUInteger)arg0 ;
-(BOOL)isBehaviorSet:(NSUInteger)arg0 ;
-(BOOL)isResourceLoopEnabled:(NSUInteger)arg0 ;
-(BOOL)notifyPlayerStarted:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)playPatternFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)playPatternFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)resourceIsRegistered:(NSUInteger)arg0 ;
-(BOOL)setupEngineWithCategory:(id)arg0 session:(id)arg1 needsAudioPowerBudget:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)setupSystemSoundAudioSession:(id)arg0 needsAudioPowerBudget:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setupUnsharedAudioSession:(id)arg0 isConstantVolume:(BOOL)arg1 needsAudioPowerBudget:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(BOOL)unregisterAudioResource:(NSUInteger)arg0 error:(*id)arg1 ;
-(CGFloat)getDurationForResource:(NSUInteger)arg0 ;
-(NSInteger)getReporterIDFromAVAudioSession:(id)arg0 ;
-(NSUInteger)idForPublicAudioResourceURL:(id)arg0 withOptions:(id)arg1 ;
-(NSUInteger)registerAudioResource:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)createAdvancedPlayerWithPattern:(id)arg0 error:(*id)arg1 ;
-(id)createAdvancedPlayerWithRingtoneData:(id)arg0 error:(*id)arg1 ;
-(id)createAdvancedPlayerWithRingtonePattern:(id)arg0 error:(*id)arg1 ;
-(id)createAdvancedPlayerWithVibePatternDictionary:(id)arg0 error:(*id)arg1 ;
-(id)createHapticPlayerWithOptions:(id)arg0 ;
-(id)createOptionsFromAudioSessionID:(unsigned int)arg0 shared:(BOOL)arg1 ;
-(id)createPlayerWithPattern:(id)arg0 error:(*id)arg1 ;
-(id)createPrivilegedPlayerWithPlayable:(id)arg0 error:(*id)arg1 ;
-(id)getAvailableChannel:(*id)arg0 ;
-(id)getMetricsForPlayer:(id)arg0 ;
-(id)getUsageCategory:(id)arg0 ;
-(id)init;
-(id)initAndReturnError:(*id)arg0 ;
-(id)initWithAudioSession:(id)arg0 error:(*id)arg1 ;
-(id)initWithAudioSession:(id)arg0 sessionIsShared:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithAudioSession:(id)arg0 sessionIsShared:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithAudioSessionID:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(struct __map_iterator<std::__tree_iterator<std::__value_type<unsigned long, std::pair<NSURL *, NSDictionary *>>, std::__tree_node<std::__value_type<unsigned long, std::pair<NSURL *, NSDictionary *>>, void *> *, long>> )doFindPublicAudioResourceID:(NSUInteger)arg0 ;
-(unsigned int)getSessionIDFromAVAudioSession:(id)arg0 ;
-(void)addPublicAudioResourceID:(NSUInteger)arg0 withURL:(id)arg1 options:(id)arg2 ;
-(void)beginIdleTimer;
-(void)cancelIdleTimer;
-(void)connectAudioSession:(id)arg0 ;
-(void)dealloc;
-(void)disconnectAudioSession:(id)arg0 ;
-(void)dispatchOnLocal:(id)arg0 ;
-(void)dispatchSyncOnLocal:(id)arg0 ;
-(void)doStartWithCompletionHandler:(id)arg0 ;
-(void)doStopWithCompletionHandler:(id)arg0 ;
-(void)doUnregisterAllPublicAudioResources;
-(void)handleConnectionError;
-(void)handleFinish:(id)arg0 ;
-(void)handleMediaServerDeath:(id)arg0 ;
-(void)handleMediaServerRecovery:(id)arg0 ;
-(void)notifyPlayerStopped:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)notifyWhenPlayersFinished:(id)arg0 ;
-(void)prewarmWithCompletionHandler:(id)arg0 ;
-(void)reconfigureAudioSession;
-(void)releaseChannel:(id)arg0 ;
-(void)removePublicAudioResourceID:(NSUInteger)arg0 ;
-(void)startIdleTimerWithHandler:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopAndWait;
-(void)stopPrewarm;
-(void)stopWithCompletionHandler:(id)arg0 ;
-(void)storeOptions:(id)arg0 ;
-(void)toggleBehavior:(NSUInteger)arg0 set:(BOOL)arg1 ;
-(void)updateAudioConfigurations:(id)arg0 session:(id)arg1 ;
-(void)updateEngineBehavior;
-(void)updateEngineBehaviorWithError:(*id)arg0 ;


@end


#endif