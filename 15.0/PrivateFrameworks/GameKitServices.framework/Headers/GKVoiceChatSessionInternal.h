// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKVOICECHATSESSIONINTERNAL_H
#define GKVOICECHATSESSIONINTERNAL_H

@class NSString, NSMutableArray, NSMutableDictionary, GKInterfaceListener, NSArray;
@protocol GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate, OS_dispatch_queue, GKVoiceChatSessionDelegate;

#import <Foundation/Foundation.h>

#import "GKSessionInternal.h"
#import "GKRWLock.h"
#import "GKVoiceChatServiceFocus.h"
#import "VoiceChatSessionRoster.h"

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate>

 {
    NSString *_sessionName;
    unsigned int _conferenceID;
    BOOL activeSession;
    float sessionVolume;
    BOOL focusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    BOOL needsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    BOOL isUsingSuppression;
    unsigned int _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    NSObject<OS_dispatch_queue> *_sendQueue;
    id<GKVoiceChatSessionDelegate> *delegate;
    unsigned int congestionState;
    id *_publicWrapper;
    GKInterfaceListener *_wifiListener;
    BOOL _currentWifiState;
}


@property (getter=isActiveSession) BOOL activeSession;
@property (readonly, nonatomic) unsigned int conferenceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property NSObject<GKVoiceChatSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property BOOL isUsingSuppression;
@property (readonly) NSArray *peerList;
@property (readonly, nonatomic) NSString *sessionName;
@property float sessionVolume;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property unsigned int talkingPeersLimit;


+(void)brokenHash:(id)arg0 response:(char *)arg1 ;
-(BOOL)getMuteStateForPeer:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)decodePeerID:(id)arg0 ;
-(id)encodePeerID:(id)arg0 ;
-(id)initWithGKSession:(id)arg0 publicWrapper:(id)arg1 sessionName:(id)arg2 ;
-(id)participantID;
-(int)calculateChannelQualities;
-(int)goodChannels;
-(unsigned int)peerCount;
-(void)addPeerToFocusPausedList:(id)arg0 ;
-(void)calculateConferenceID;
-(void)cleanup;
-(void)cleanupProc:(id)arg0 ;
-(void)dealloc;
-(void)didStartSpeaking:(id)arg0 ;
-(void)didStopSpeaking:(id)arg0 ;
-(void)handlePeerDisconnected:(id)arg0 ;
-(void)informClientVoiceChatConnecting:(id)arg0 ;
-(void)informClientVoiceChatCouldNotConnect:(id)arg0 ;
-(void)informClientVoiceChatDidStart:(id)arg0 ;
-(void)informClientVoiceChatDidStop:(id)arg0 ;
-(void)informClientVoiceChatFocusChange:(id)arg0 ;
-(void)informClientVoiceChatSilent:(id)arg0 ;
-(void)informClientVoiceChatSpeaking:(id)arg0 ;
-(void)interfaceStateDidChangeWithWifiUp:(BOOL)arg0 cellUp:(BOOL)arg1 ;
-(void)lossRate:(float)arg0 forParticipantID:(id)arg1 ;
-(void)networkStateDidChange;
-(void)parseConnectedPeers:(id)arg0 ;
-(void)parseMutedPeers:(id)arg0 forPeer:(id)arg1 ;
-(void)pauseAll;
-(void)pruneBadLinks;
-(void)removeFromFocusPausedList:(id)arg0 ;
-(void)sendConnectedPeers;
-(void)sendMutedPeers;
-(void)session:(id)arg0 didReceiveAudioPacket:(id)arg1 fromPeerID:(id)arg2 ;
-(void)session:(id)arg0 didReceiveOOBAudioPacket:(id)arg1 fromPeerID:(id)arg2 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(unsigned int)arg2 ;
-(void)setMute:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)startSession;
-(void)startSessionInternal;
-(void)stopSession;
-(void)stopSessionInternal;
-(void)unPauseAll;
-(void)updatedConnectedPeers:(id)arg0 ;
-(void)updatedFocusID:(unsigned int)arg0 ;
-(void)updatedFocusPeers:(id)arg0 ;
-(void)updatedMutedPeers:(id)arg0 forPeer:(id)arg1 ;
-(void)updatedSubscribedBeaconList:(id)arg0 ;
-(void)voiceChatService:(id)arg0 didNotStartWithParticipantID:(id)arg1 error:(id)arg2 ;
-(void)voiceChatService:(id)arg0 didReceiveInvitationFromParticipantID:(id)arg1 callID:(unsigned int)arg2 ;
-(void)voiceChatService:(id)arg0 didStartWithParticipantID:(id)arg1 ;
-(void)voiceChatService:(id)arg0 didStopWithParticipantID:(id)arg1 error:(id)arg2 ;
-(void)voiceChatService:(id)arg0 sendData:(id)arg1 toParticipantID:(id)arg2 ;


@end


#endif