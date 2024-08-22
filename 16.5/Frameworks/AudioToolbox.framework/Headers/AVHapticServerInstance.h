// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVHAPTICSERVERINSTANCE_H
#define AVHAPTICSERVERINSTANCE_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, CHHapticServerInterface;

#import <Foundation/Foundation.h>

#import "AVServerWrapper.h"
#import "AVHapticServer.h"

@interface AVHapticServerInstance : NSObject <NSXPCListenerDelegate, CHHapticServerInterface>

 {
    NSXPCConnection *_connection;
    shared_ptr<HapticSession> _hapticSession;
    shared_ptr<opaqueCMSession> _clientSession;
    AVServerWrapper *_listenerWrapper;
    BOOL _routeUsesReceiver;
}


@property (readonly) NSUInteger clientID; // ivar: _clientID
@property BOOL clientInterrupted; // ivar: _clientInterrupted
@property BOOL clientSuspended; // ivar: _clientSuspended
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) AVHapticServer *master; // ivar: _master
@property BOOL prewarmIncludesAudio; // ivar: _prewarmIncludesAudio
@property BOOL prewarmIncludesHaptics; // ivar: _prewarmIncludesHaptics
@property BOOL runIncludesAudio; // ivar: _runIncludesAudio
@property BOOL runIncludesHaptics; // ivar: _runIncludesHaptics
@property BOOL runningInBackground; // ivar: _runningInBackground
@property (readonly) Class superclass;
@property BOOL wasPrewarmedAndSuspended; // ivar: _wasPrewarmedAndSuspended
@property BOOL wasRunningAndSuspended; // ivar: _wasRunningAndSuspended


-(BOOL)setupAudioSessionFromID:(unsigned int)arg0 isShared:(BOOL)arg1 error:(*id)arg2 ;
-(id)getAsyncDelegateForMethod:(SEL)arg0 errorHandler:(id)arg1 ;
-(id)getSyncDelegateForMethod:(SEL)arg0 errorHandler:(id)arg1 ;
-(id)initWithMaster:(id)arg0 id:(NSUInteger)arg1 connection:(id)arg2 outError:(*id)arg3 ;
-(void)allocateClientResources:(id)arg0 ;
-(void)configureWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)copyCustomAudioEvent:(NSUInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)createCustomAudioEvent:(id)arg0 format:(id)arg1 frames:(NSUInteger)arg2 options:(id)arg3 reply:(id)arg4 ;
-(void)dealloc;
-(void)debugExpectNotifyOnFinishAfter:(CGFloat)arg0 reply:(id)arg1 ;
-(void)detachSequence:(NSUInteger)arg0 ;
-(void)fadeClientForSessionInterruption:(BOOL)arg0 affectHaptics:(BOOL)arg1 fadeTime:(float)arg2 fadeLevel:(float)arg3 stopAfterFade:(BOOL)arg4 ;
-(void)getHapticLatency:(id)arg0 ;
-(void)handleClientApplicationStateChange:(id)arg0 ;
-(void)handleClientApplicationStateChangeUsingAppState:(NSUInteger)arg0 ;
-(void)handleClientRouteChange:(id)arg0 ;
-(void)handleClientSessionInterruptionCommand:(unsigned int)arg0 dictionary:(id)arg1 ;
-(void)handleConnectionError;
-(void)loadHapticEvent:(id)arg0 reply:(id)arg1 ;
-(void)loadHapticSequenceFromData:(id)arg0 reply:(id)arg1 ;
-(void)loadHapticSequenceFromEvents:(id)arg0 reply:(id)arg1 ;
-(void)loadVibePattern:(id)arg0 reply:(id)arg1 ;
-(void)muteClientForRingerSwitch:(BOOL)arg0 ;
-(void)notifyClientOnStopWithReason:(NSInteger)arg0 error:(id)arg1 ;
-(void)prepareHapticSequence:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)prewarm:(id)arg0 ;
-(void)queryCapabilities:(id)arg0 reply:(id)arg1 ;
-(void)referenceCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)releaseChannels;
-(void)releaseClientResources;
-(void)releaseCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)removeChannel:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)removeSessionListeners;
-(void)requestChannels:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setChannelEventBehavior:(NSUInteger)arg0 behavior:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)setPlayerBehavior:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)setSequenceEventBehavior:(NSUInteger)arg0 behavior:(NSUInteger)arg1 channelIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)startRunning:(id)arg0 ;
-(void)stopPrewarm;
-(void)stopRunning;
-(void)stopRunning:(id)arg0 ;
-(void)unmuteClientAfterSessionInterruption:(float)arg0 ;


@end


#endif