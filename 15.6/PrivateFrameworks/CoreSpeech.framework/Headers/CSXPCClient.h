// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSXPCCLIENT_H
#define CSXPCCLIENT_H

@class NSString, NSMutableSet, NSHashTable;
@protocol CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding, CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSMutableSet *activationAssertions; // ivar: _activationAssertions
@property (weak, nonatomic) NSObject<CSAudioAlertProvidingDelegate> *audioAlertProvidingDelegate; // ivar: _audioAlertProvidingDelegate
@property (retain, nonatomic) NSHashTable *audioSessionInfoObservers; // ivar: _audioSessionInfoObservers
@property (weak, nonatomic) NSObject<CSAudioSessionProvidingDelegate> *audioSessionProvidingDelegate; // ivar: _audioSessionProvidingDelegate
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (weak, nonatomic) NSObject<CSAudioStreamProvidingDelegate> *audioStreamProvidingDelegate; // ivar: _audioStreamProvidingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSXPCClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // ivar: _xpcClientQueue
@property (nonatomic) NSUInteger xpcClientType; // ivar: _xpcClientType
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcReplyQueue; // ivar: _xpcReplyQueue


+(id)createAudioStreamMessageWithRequest:(id)arg0 ;
+(id)createPrepareAudioStreamMessageWithRequest:(id)arg0 ;
+(id)createStartAudioStreamMessageWithOption:(id)arg0 ;
+(id)createStopAudioStreamMessage;
-(BOOL)activateAudioSessionWithReason:(NSUInteger)arg0 dynamicAttribute:(NSUInteger)arg1 bundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)deactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)duckOthersOption;
-(BOOL)fallbackDeactivateAudioSession:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isConnected;
-(BOOL)isNarrowBand;
-(BOOL)isRecording;
-(BOOL)playAlertSoundForType:(NSInteger)arg0 ;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)prepareAudioProviderWithContext:(id)arg0 clientType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)prepareAudioStreamSync:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)prewarmAudioSessionWithError:(*id)arg0 ;
-(BOOL)sendMessageAndReplySync:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAlertSoundFromURL:(id)arg0 forType:(NSInteger)arg1 ;
-(BOOL)setCurrentContext:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)alertStartTime;
-(NSUInteger)hostTimeFromSampleCount:(NSUInteger)arg0 ;
-(NSUInteger)sampleCountFromHostTime:(NSUInteger)arg0 ;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(id)_decodeError:(id)arg0 ;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(id)audioChunkFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 channelIdx:(NSUInteger)arg2 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 ;
-(id)audioChunkToEndFrom:(NSUInteger)arg0 channelIdx:(NSUInteger)arg1 ;
-(id)audioDeviceInfo;
-(id)audioMetric;
-(id)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 error:(*id)arg2 ;
-(id)holdAudioStreamWithDescription:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)playbackRoute;
-(id)recordDeviceInfo;
-(id)recordRoute;
-(id)recordSettings;
-(unsigned int)audioSessionIdForDeviceId:(id)arg0 ;
-(void)_disconnect;
-(void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg0 ;
-(void)_handleAlertProvidingDelegateMessageBody:(id)arg0 ;
-(void)_handleListenerDisconnectedError:(id)arg0 ;
-(void)_handleListenerError:(id)arg0 ;
-(void)_handleListenerEvent:(id)arg0 ;
-(void)_handleListenerMessage:(id)arg0 ;
-(void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg0 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg0 ;
-(void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg0 ;
-(void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg0 ;
-(void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg0 ;
-(void)_handleSessionProvidingDelegateBeginInterruption:(id)arg0 ;
-(void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg0 ;
-(void)_handleSessionProvidingDelegateDidChangeContext:(id)arg0 ;
-(void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg0 ;
-(void)_handleSessionProvidingDelegateEndInterruption:(id)arg0 ;
-(void)_handleSessionProvidingDelegateMessageBody:(id)arg0 ;
-(void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg0 ;
-(void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg0 ;
-(void)_handleStreamProvidingDelegateChunkAvailable:(id)arg0 ;
-(void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg0 ;
-(void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg0 ;
-(void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg0 ;
-(void)_handleStreamProvidingDelegateMessageBody:(id)arg0 ;
-(void)_sendMessageAsync:(id)arg0 completion:(id)arg1 ;
-(void)_sendXPCClientType;
-(void)acousticSLResultForContext:(id)arg0 completion:(id)arg1 ;
-(void)attachTandemStream:(id)arg0 toPrimaryStream:(id)arg1 completion:(id)arg2 ;
-(void)audioStreamWithRequest:(id)arg0 streamName:(id)arg1 completion:(id)arg2 ;
-(void)cancelAudioStreamHold:(id)arg0 ;
-(void)configureAlertBehavior:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)enableMiniDucking:(BOOL)arg0 ;
-(void)enableSmartRoutingConsideration:(BOOL)arg0 ;
-(void)pingpong:(id)arg0 ;
-(void)prepareAudioStream:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)registerObserver:(id)arg0 ;
-(void)reportsDynamicActivityAttribute:(NSUInteger)arg0 bundleId:(id)arg1 ;
-(void)saveRecordingBufferFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 toURL:(id)arg2 ;
-(void)saveRecordingBufferToEndFrom:(NSUInteger)arg0 toURL:(id)arg1 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;
-(void)setAnnounceCallsEnabled:(BOOL)arg0 withStreamHandleID:(NSUInteger)arg1 ;
-(void)setAudioAlertDelegate:(id)arg0 ;
-(void)setAudioSessionDelegate:(id)arg0 ;
-(void)setDuckOthersOption:(BOOL)arg0 ;
-(void)setMeteringEnabled:(BOOL)arg0 ;
-(void)startAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)stopAudioStream:(id)arg0 option:(id)arg1 completion:(id)arg2 ;
-(void)triggerInfoForContext:(id)arg0 completion:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateMeters;


@end


#endif