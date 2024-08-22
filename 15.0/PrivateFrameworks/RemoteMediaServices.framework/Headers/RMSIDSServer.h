// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSIDSSERVER_H
#define RMSIDSSERVER_H

@class NSMutableDictionary, IDSService, NSString;
@protocol IDSServiceDelegate, RMSSessionManagerDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSControlSessionDelegate;

#import <Foundation/Foundation.h>

#import "RMSSessionManager.h"

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSSessionManagerDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSControlSessionDelegate>

 {
    RMSSessionManager *_sessionManager;
    NSMutableDictionary *_nowPlayingSessions;
    NSMutableDictionary *_pairingSessions;
    NSMutableDictionary *_touchRemoteSessions;
    IDSService *_idsService;
    NSMutableDictionary *_pairingCompletionHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)server;
-(id)init;
-(void)_cleanupStaleSessions:(id)arg0 ;
-(void)_handleAddToWishlist:(id)arg0 ;
-(void)_handleBeginDiscovery:(id)arg0 ;
-(void)_handleBeginObservingNowPlaying:(id)arg0 ;
-(void)_handleBeginPairing:(id)arg0 ;
-(void)_handleConnectToService:(id)arg0 ;
-(void)_handleEndDiscovery:(id)arg0 ;
-(void)_handleEndObservingNowPlaying:(id)arg0 ;
-(void)_handleEndPairing:(id)arg0 ;
-(void)_handleLogout:(id)arg0 ;
-(void)_handleNavigationCommand:(id)arg0 ;
-(void)_handleNowPlayingArtworkRequest:(id)arg0 ;
-(void)_handlePairingChallengeResponse:(id)arg0 ;
-(void)_handlePickAudioRoute:(id)arg0 ;
-(void)_handlePlaybackCommand:(id)arg0 ;
-(void)_handleSeekToPlaybackTime:(id)arg0 ;
-(void)_handleSendText:(id)arg0 ;
-(void)_handleSessionHeartbeat:(id)arg0 ;
-(void)_handleSetLikeState:(id)arg0 ;
-(void)_handleSetVolume:(id)arg0 ;
-(void)_handleTouchEnd:(id)arg0 ;
-(void)_handleTouchMove:(id)arg0 ;
-(void)_handleUnpairService:(id)arg0 ;
-(void)_handleUpdatePairedNetworkNames:(id)arg0 ;
-(void)_sendData:(id)arg0 type:(unsigned short)arg1 priority:(NSInteger)arg2 timeout:(int)arg3 queueOneID:(id)arg4 inResponseTo:(id)arg5 ;
-(void)_sendData:(id)arg0 type:(unsigned short)arg1 timeout:(int)arg2 queueOneID:(id)arg3 inResponseTo:(id)arg4 ;
-(void)controlSession:(id)arg0 artworkDataDidBecomeAvailable:(id)arg1 identifier:(id)arg2 ;
-(void)controlSession:(id)arg0 didReceivePairingChallengeRequestWithCredentials:(id)arg1 completionHandler:(id)arg2 ;
-(void)controlSession:(id)arg0 didUpdateAudioRoutes:(id)arg1 ;
-(void)controlSession:(id)arg0 didUpdateNowPlayingInfo:(id)arg1 ;
-(void)controlSession:(id)arg0 didUpdateVolume:(float)arg1 ;
-(void)controlSessionDidBeginEditingText:(id)arg0 ;
-(void)controlSessionDidEnd:(id)arg0 ;
-(void)controlSessionDidEndEditingText:(id)arg0 ;
-(void)discoverySessionDidUpdateAvailableServices:(id)arg0 ;
-(void)discoverySessionNetworkAvailabilityDidChange:(id)arg0 ;
-(void)pairingSession:(id)arg0 didPairWithServiceNetworkName:(id)arg1 pairingGUID:(id)arg2 ;
-(void)pairingSessionDidFail:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)sessionManager:(id)arg0 sessionDidTimeout:(id)arg1 withIdentifier:(int)arg2 ;


@end


#endif