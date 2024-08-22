// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSDAAPCONTROLSESSIONPROXY_H
#define TVRMSDAAPCONTROLSESSIONPROXY_H

@class NSString;
@protocol TVRMSDAAPControlSession, TVRMSDAAPControlSessionDelegate;


#import "TVRMSSessionProxy.h"
#import "TVRMSIDSClient.h"
#import "TVRMSNowPlayingInfo.h"
#import "TVRMSService.h"

@interface TVRMSDAAPControlSessionProxy : TVRMSSessionProxy <TVRMSDAAPControlSession>

 {
    TVRMSIDSClient *_idsClient;
    TVRMSNowPlayingInfo *_nowPlayingInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRMSDAAPControlSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TVRMSService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)init;
-(void)_handleAudioRoutesDidUpdateNotification:(id)arg0 ;
-(void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg0 ;
-(void)_handleNowPlayingInfoDidUpdateNotification:(id)arg0 ;
-(void)_handleSessionDidEndNotification:(id)arg0 ;
-(void)_handleVolumeDidUpdateNotification:(id)arg0 ;
-(void)_notifyDelegateForArtworkChange;
-(void)addToWishlist:(NSUInteger)arg0 databaseID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)beginObservingNowPlaying;
-(void)clearKeyboardText;
-(void)connectToService:(id)arg0 pairingGUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)endObservingNowPlaying;
-(void)heartbeatDidFail;
-(void)logout;
-(void)pickAudioRoute:(id)arg0 completionHandler:(id)arg1 ;
-(void)seekToPlaybackTime:(int)arg0 completionHandler:(id)arg1 ;
-(void)sendKeyboardReturnCommand;
-(void)sendNavigationCommand:(NSInteger)arg0 ;
-(void)sendPlaybackCommand:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)setKeyboardText:(id)arg0 ;
-(void)setLikedState:(NSInteger)arg0 itemID:(NSUInteger)arg1 databaseID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)setVolume:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif