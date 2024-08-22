// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCHAPTICCLIENTPROXY_H
#define _GCHAPTICCLIENTPROXY_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CHHapticServerInterface, _GCIPCIncomingConnection, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_GCControllerManagerServer.h"
#import "GCControllerSettings.h"

@interface _GCHapticClientProxy : NSObject <CHHapticServerInterface>

 {
    BOOL _playersPlayedHapticsThisSlice;
    _GCControllerManagerServer *_server;
    HapticSharedMemory _sharedMemory;
    GCControllerSettings *_bundleSettings;
    GCControllerSettings *_globalSettings;
    BOOL _dirtyMuteState;
    BOOL _muted;
    BOOL _neverMute;
    int _muteReasons;
    uint8_t _invalid;
    BOOL _running;
    BOOL _stopping;
    id<_GCIPCIncomingConnection> *_connection;
    id *_connectionInvalidationRegistration;
    id *_connectionInterruptedRegistration;
    CGFloat _initializationTime;
}


@property (readonly, nonatomic) CGFloat activeLifetimeInSeconds; // ivar: _activeLifetimeInSeconds
@property (readonly, copy, nonatomic) NSArray *actuators; // ivar: _actuators
@property (nonatomic) unsigned int applicationState; // ivar: _applicationState
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger clientID; // ivar: _clientID
@property (nonatomic) BOOL complete; // ivar: _complete
@property (readonly, copy, nonatomic) NSString *controllerProductCategory; // ivar: _controllerProductCategory
@property (copy, nonatomic) NSMutableDictionary *hapticPlayers; // ivar: _hapticPlayers
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSObject><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy, nonatomic) NSArray *invalidationHandlers; // ivar: _invalidationHandlers
@property (nonatomic, getter=isMockClient) BOOL mockClient; // ivar: _mockClient
@property (readonly, nonatomic) CGFloat totalLifetimeInSeconds;
@property (readonly, nonatomic) int totalPlayers; // ivar: _totalPlayers


+(id)clientProxyWithConnection:(id)arg0 server:(id)arg1 clientID:(NSUInteger)arg2 ;
-(*void)sharedMemory;
-(BOOL)isMuted;
-(BOOL)isMutedForReason:(NSUInteger)arg0 ;
-(BOOL)running;
-(BOOL)stopping;
-(id)_initWithConnection:(id)arg0 server:(id)arg1 clientID:(NSUInteger)arg2 ;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_configureActuatorsLegacyWithOptions:(id)arg0 ;
-(void)addActiveTime:(CGFloat)arg0 ;
-(void)allocateClientResources:(id)arg0 ;
-(void)configureWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)copyCustomAudioEvent:(NSUInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)createCustomAudioEvent:(id)arg0 format:(id)arg1 frames:(NSUInteger)arg2 options:(id)arg3 reply:(id)arg4 ;
-(void)dealloc;
-(void)debugEngineIsRunning:(id)arg0 ;
-(void)debugExpectNotifyOnFinishAfter:(CGFloat)arg0 reply:(id)arg1 ;
-(void)detachSequence:(NSUInteger)arg0 ;
-(void)getHapticLatency:(id)arg0 ;
-(void)invalidate;
-(void)invalidateDueToControllerDisconnect;
-(void)loadHapticEvent:(id)arg0 reply:(id)arg1 ;
-(void)loadHapticSequenceFromData:(id)arg0 reply:(id)arg1 ;
-(void)loadHapticSequenceFromEvents:(id)arg0 reply:(id)arg1 ;
-(void)loadVibePattern:(id)arg0 reply:(id)arg1 ;
-(void)notifyClientCompletedWithError:(id)arg0 ;
-(void)notifyClientOnStopWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareHapticSequence:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)prewarm:(id)arg0 ;
-(void)queryCapabilities:(id)arg0 reply:(id)arg1 ;
-(void)referenceCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)refreshUserSettingForMuteHaptics;
-(void)releaseChannels;
-(void)releaseClientResources;
-(void)releaseCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)removeChannel:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)removeCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)requestChannels:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setChannelEventBehavior:(NSUInteger)arg0 behavior:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)setMute:(BOOL)arg0 forReason:(NSUInteger)arg1 ;
-(void)setPlayerBehavior:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setSequenceEventBehavior:(NSUInteger)arg0 behavior:(NSUInteger)arg1 channelIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)startRunning:(id)arg0 ;
-(void)stopPrewarm;
-(void)stopRunning;
-(void)stopRunning:(id)arg0 ;
-(void)teardownAndReleaseChannels;


@end


#endif