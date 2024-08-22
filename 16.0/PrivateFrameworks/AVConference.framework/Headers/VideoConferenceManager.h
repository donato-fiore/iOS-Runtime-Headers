// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOCONFERENCEMANAGER_H
#define VIDEOCONFERENCEMANAGER_H

@class NSMutableArray;
@protocol VideoConferenceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VideoConference.h"
#import "ICEResultWaitQueue.h"

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate>

 {
    unsigned char _clientUUID;
    _opaque_pthread_mutex_t stateLock;
    _opaque_pthread_mutex_t sipLock;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    VideoConference *conferenceWithMic;
    *tagHANDLE hSIP;
    int sipRefCount;
    id *_vtpWrapper;
    BOOL isVTPInitialized;
    id *_networkAgent;
}


@property VideoConference *activeConference; // ivar: activeConference
@property VideoConference *conferenceWithMic;
@property (readonly) ICEResultWaitQueue *resultQueue; // ivar: resultQueue
@property (readonly) NSMutableArray *vcList; // ivar: vcList


+(id)defaultVideoConferenceManager;
+(void)addNSError:(id)arg0 toConferenceXPCArgumentDictionary:(id)arg1 ;
-(BOOL)hasVideoConference:(id)arg0 ;
-(BOOL)isSIPHandleValid:(struct tagHANDLE *)arg0 ;
-(id)conferenceForCallID:(unsigned int)arg0 ;
-(id)conferenceForParticipantID:(id)arg0 ;
-(id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(id)init;
-(struct tagHANDLE *)SIPHandle;
-(void)addVideoConference:(id)arg0 ;
-(void)broadcastCellTechChange:(int)arg0 cellularMaxPktLen:(unsigned short)arg1 ;
-(void)cleanupVTP;
-(void)createSIPWithPacketMultiplexMode:(int)arg0 ;
-(void)getClientUUID:(unsigned char)arg0 ;
-(void)pauseVideoConferences:(BOOL)arg0 ;
-(void)registerBlocksForConference;
-(void)removeVideoConference:(id)arg0 ;
-(void)setupVTPCallback;
-(void)startSIPWithPacketMultiplexMode:(int)arg0 transportType:(unsigned int)arg1 ;
-(void)stopSIPWithTransportType:(unsigned int)arg0 ;
-(void)videoConference:(id)arg0 cancelRelayRequest:(unsigned int)arg1 requestDict:(id)arg2 ;
-(void)videoConference:(id)arg0 closeConnectionForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 didChangeLocalVariablesForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 didReceiveARPLData:(id)arg1 fromCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didReceiveData:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg1 ;
-(void)videoConference:(id)arg0 didRemoteScreenAttributesChange:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didRemoteVideoAttributesChange:(id)arg1 forCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 didStartSession:(BOOL)arg1 withCallID:(unsigned int)arg2 withUserInfo:(id)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg0 didStopWithCallID:(unsigned int)arg1 error:(id)arg2 callMetadata:(id)arg3 ;
-(void)videoConference:(id)arg0 inititiateRelayRequest:(unsigned int)arg1 requestDict:(id)arg2 ;
-(void)videoConference:(id)arg0 isRemoteAudioBelowThreshold:(BOOL)arg1 ;
-(void)videoConference:(id)arg0 localAudioEnabled:(BOOL)arg1 forCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 localIPChange:(id)arg1 withCallID:(unsigned int)arg2 ;
-(void)videoConference:(id)arg0 receivedNoRemotePacketsForTime:(CGFloat)arg1 callID:(unsigned int)arg2 ;
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
-(void)videoConference:(id)arg0 withCallID:(unsigned int)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(unsigned int)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(unsigned int)arg1 isSendingAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg0 withCallID:(unsigned int)arg1 networkHint:(BOOL)arg2 ;


@end


#endif