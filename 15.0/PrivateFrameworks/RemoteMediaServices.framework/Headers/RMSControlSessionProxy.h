// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSCONTROLSESSIONPROXY_H
#define RMSCONTROLSESSIONPROXY_H

@class NSString;
@protocol RMSControlSession, RMSControlSessionDelegate;


#import "RMSSessionProxy.h"
#import "RMSIDSClient.h"
#import "RMSNowPlayingInfo.h"
#import "RMSService.h"

@interface RMSControlSessionProxy : RMSSessionProxy <RMSControlSession>

 {
    RMSIDSClient *_idsClient;
    RMSNowPlayingInfo *_nowPlayingInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSControlSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RMSService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)init;
-(void)_handleAudioRoutesDidUpdateNotification:(id)arg0 ;
-(void)_handleDidBeginEditingTextNotification:(id)arg0 ;
-(void)_handleDidEndEditingTextNotification:(id)arg0 ;
-(void)_handleDidReceivePairingChallengeRequestNotification:(id)arg0 ;
-(void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg0 ;
-(void)_handleNowPlayingInfoDidUpdateNotification:(id)arg0 ;
-(void)_handleSessionDidEndNotification:(id)arg0 ;
-(void)_handleVolumeDidUpdateNotification:(id)arg0 ;
-(void)_notifyDelegateForArtworkChange;
-(void)addToWishlist:(NSUInteger)arg0 databaseID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)beginObservingNowPlaying;
-(void)connectToService:(id)arg0 pairingGUID:(id)arg1 allowPairing:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)endObservingNowPlaying;
-(void)heartbeatDidFail;
-(void)logout;
-(void)pickAudioRoute:(id)arg0 completionHandler:(id)arg1 ;
-(void)seekToPlaybackTime:(int)arg0 completionHandler:(id)arg1 ;
-(void)sendNavigationCommand:(NSInteger)arg0 ;
-(void)sendPlaybackCommand:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)sendText:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)setLikedState:(NSInteger)arg0 itemID:(NSUInteger)arg1 databaseID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)setVolume:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif