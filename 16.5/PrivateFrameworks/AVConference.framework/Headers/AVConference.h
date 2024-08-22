// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONFERENCE_H
#define AVCONFERENCE_H

@class NSDictionary, NSMutableDictionary, CALayer, NSTimer;
@protocol OS_dispatch_queue, AVConferenceDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVConference : NSObject {
    AVConferenceXPCClient *connection;
    id *opaqueConf;
    BOOL useServer;
    id *_delegate;
    NSDictionary *serverBag;
    BOOL _isUsingFrontCamera;
    NSMutableDictionary *_stateCacheForCallID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (nonatomic) NSObject<AVConferenceDelegate> *delegate;
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property (readonly) NSInteger inputAudioPowerSpectrumToken; // ivar: _inputAudioPowerSpectrumToken
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (readonly) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly) int localFrameHeight;
@property (readonly) int localFrameWidth;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted; // ivar: _microphoneMuted
@property (readonly) unsigned int natType;
@property (retain) CALayer *networkQualityGraphLayer; // ivar: networkQualityGraphLayer_
@property (retain) NSTimer *networkQualityUpdateTimer; // ivar: networkQualityUpdateTimer_
@property (readonly) NSInteger outputAudioPowerSpectrumToken; // ivar: _outputAudioPowerSpectrumToken
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL requiresWifi;
@property BOOL shouldDisplayNetworkQualityGraph; // ivar: shouldDisplayNetworkQualityGraph_
@property (getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;


+(BOOL)hasActiveAudioSession;
+(id)externalAddressForSelfConnectionBlob:(id)arg0 ;
+(short)addressPointerFromBlob:(id)arg0 ;
+(unsigned int)doBlockingConnectionCheck;
+(unsigned int)doBlockingConnectionCheck:(BOOL)arg0 ;
+(void)refreshLoggingParameters;
+(void)setAudioSessionProperties:(id)arg0 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(id)arg0 ;
+(void)stopAudioSession;
-(*void)remoteVideoBackLayer;
-(*void)remoteVideoLayer;
-(BOOL)getIsAudioPaused:(*BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)getIsSendingAudio:(*BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)getIsVideoPaused:(*BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setActive:(BOOL)arg0 ;
-(BOOL)setAudioInputDevice:(id)arg0 ;
-(BOOL)setAudioOutputDevice:(id)arg0 ;
-(BOOL)setPauseAudio:(BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setSendingAudio:(BOOL)arg0 callID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setServerInfo:(id)arg0 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 inviteData:(id)arg1 isCaller:(BOOL)arg2 capabilities:(id)arg3 destination:(id)arg4 error:(*id)arg5 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 oldCallID:(NSInteger)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 error:(*id)arg7 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 oldCallID:(NSInteger)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 destination:(id)arg8 error:(*id)arg9 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 oldCallID:(NSInteger)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(*id)arg8 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 usingInviteData:(id)arg1 isCaller:(BOOL)arg2 relayResponseDict:(id)arg3 didOriginateRelayRequest:(BOOL)arg4 capabilities:(id)arg5 error:(*id)arg6 ;
-(BOOL)startConnectionWithCallID:(NSInteger)arg0 usingInviteData:(id)arg1 isCaller:(BOOL)arg2 relayResponseDict:(id)arg3 didOriginateRelayRequest:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 error:(*id)arg7 ;
-(BOOL)updateNetworkQualityGraph;
-(CGFloat)localBitrateForCallID:(NSInteger)arg0 ;
-(CGFloat)localFramerateForCallID:(NSInteger)arg0 ;
-(CGFloat)localPacketLossRateForCallID:(NSInteger)arg0 ;
-(CGFloat)networkQualityForCallID:(NSInteger)arg0 ;
-(CGFloat)remoteBitrateForCallID:(NSInteger)arg0 ;
-(CGFloat)remoteFramerateForCallID:(NSInteger)arg0 ;
-(CGFloat)remotePacketLossRateForCallID:(NSInteger)arg0 ;
-(CGFloat)roundTripTimeForCallID:(NSInteger)arg0 ;
-(NSInteger)initializeNewCall;
-(NSInteger)initializeNewCallWithDeviceRole:(int)arg0 ;
-(NSInteger)initializeNewCallWithDeviceRole:(int)arg0 reportingHierarchyToken:(id)arg1 ;
-(NSInteger)lastActiveCallID;
-(NSInteger)videoStreamTokenForCallID:(NSInteger)arg0 ;
-(float)networkQuality;
-(id)callMetadataForCallID:(NSInteger)arg0 ;
-(id)callStateForCallID:(id)arg0 ;
-(id)capabilitiesForCallID:(NSInteger)arg0 ;
-(id)convertBlobtoNewBlob:(id)arg0 ;
-(id)convertBlobtoOldBlob:(id)arg0 ;
-(id)currentAudioInputDevice;
-(id)currentAudioOutputDevice;
-(id)init;
-(id)initWithClientUUID:(id)arg0 ;
-(id)initWithClientUUID:(id)arg0 transportType:(unsigned int)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg0 ;
-(id)newRandomParticipantID;
-(id)statsForCallID:(NSInteger)arg0 ;
-(int)remoteFrameHeightForCallID:(NSInteger)arg0 ;
-(int)remoteFrameWidthForCallID:(NSInteger)arg0 ;
-(unsigned int)doBlockingConnectionCheck;
-(void)addGKSCallEvent:(id)arg0 sessionID:(id)arg1 ;
-(void)cancelCallID:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForVCNotifications;
-(void)handleGKSConnectivitySettingsUpdate:(id)arg0 ;
// -(void)inviteDictionaryForCallID:(NSInteger)arg0 remoteInviteDictionary:(id)arg1 nonCellularCandidateTimeout:(CGFloat)arg2 block:(id)arg3 queue:(unk)arg4  ;
-(void)listenForNotifications;
-(void)processCancelRelayRequest:(NSInteger)arg0 cancelDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRelayRequestResponse:(NSInteger)arg0 responseDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRelayUpdate:(NSInteger)arg0 updateDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRemoteIPChange:(id)arg0 callID:(NSInteger)arg1 ;
-(void)registerBlocksForVCNotifications;
-(void)remoteCancelledCallID:(NSInteger)arg0 ;
-(void)sendARPLData:(id)arg0 toCallID:(NSInteger)arg1 ;
-(void)sendData:(id)arg0 forCallID:(NSInteger)arg1 encrypted:(BOOL)arg2 ;
-(void)sendProtobuf:(id)arg0 withType:(NSInteger)arg1 forCallID:(NSInteger)arg2 ;
-(void)serverDied;
-(void)serverReconnected;
-(void)setCallReport:(NSInteger)arg0 withReport:(id)arg1 ;
-(void)setCallState:(id)arg0 forCallID:(id)arg1 ;
-(void)setConferenceState:(unsigned int)arg0 forCallID:(NSInteger)arg1 ;
-(void)setConferenceVisualRectangle:(struct CGRect )arg0 forCallID:(NSInteger)arg1 ;
-(void)setLastActiveCallID:(NSInteger)arg0 ;
-(void)setLocalScreenAttributes:(id)arg0 ;
-(void)setPeerCN:(id)arg0 callID:(NSInteger)arg1 ;
-(void)setPeerProtocolVersion:(unsigned int)arg0 forCallID:(NSInteger)arg1 ;
-(void)setPeerReportingIdentifier:(id)arg0 sessionIdentifier:(id)arg1 forCallID:(NSInteger)arg2 ;
-(void)setRemoteVideoBackLayer:(*void)arg0 ;
-(void)setRemoteVideoLayer:(*void)arg0 ;
-(void)setSessionID:(id)arg0 callID:(NSInteger)arg1 ;
-(void)setSetSessionID:(id)arg0 forCallID:(NSInteger)arg1 ;
-(void)shouldSendBlackFrames:(BOOL)arg0 callID:(NSInteger)arg1 ;
-(void)startNetworkQualityUpdateTimer;
-(void)stopCallID:(NSInteger)arg0 ;
-(void)stopListeningForNotifications;
-(void)stopNetworkQualityUpdateTimer;
-(void)updateCapabilities:(id)arg0 forCallID:(NSInteger)arg1 ;
-(void)updateGKSConnectivitySettings;
-(void)videoConference:(id)arg0 cancelRelayRequest:(unsigned int)arg1 requestDict:(id)arg2 ;
-(void)videoConference:(id)arg0 closeConnectionForCallID:(NSInteger)arg1 ;
-(void)videoConference:(id)arg0 didChangeLocalVariablesForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 didReceiveARPLData:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didReceiveData:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 didRemoteScreenAttributesChange:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didRemoteVideoAttributesChange:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 withUserInfo:(id)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg0 didStopWithCallID:(unsigned int)arg1 error:(id)arg2 ;
-(void)videoConference:(id)arg0 didStopWithCallID:(unsigned int)arg1 error:(id)arg2 callMetadata:(id)arg3 ;
-(void)videoConference:(id)arg0 inititiateRelayRequest:(unsigned int)arg1 requestDict:(id)arg2 ;
-(void)videoConference:(id)arg0 isRemoteAudioBelowThreshold:(BOOL)arg1 ;
-(void)videoConference:(id)arg0 localAudioEnabled:(BOOL)arg1 forCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 localIPChange:(id)arg1 withCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 reinitializeCallForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 remoteAudioEnabled:(BOOL)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 remoteAudioPaused:(BOOL)arg1 callID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 remoteCallingModeChanged:(unsigned int)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 remoteMediaStalled:(BOOL)arg1 callID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 remoteVideoPaused:(BOOL)arg1 callID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 sendRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 ;
-(void)videoConference:(id)arg0 updateInputFrequencyLevel:(id)arg1 ;
-(void)videoConference:(id)arg0 updateInputMeterLevel:(float)arg1 ;
-(void)videoConference:(id)arg0 updateOutputFrequencyLevel:(id)arg1 ;
-(void)videoConference:(id)arg0 updateOutputMeterLevel:(float)arg1 ;
-(void)videoConference:(id)arg0 videoQualityNotificationForCallID:(unsigned int)arg1 isDegraded:(BOOL)arg2 isRemote:(BOOL)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(NSInteger)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(NSInteger)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(NSInteger)arg1 isSendingAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(unsigned int)arg1 networkHint:(BOOL)arg2 ;
-(void)warmupForCall;


@end


#endif