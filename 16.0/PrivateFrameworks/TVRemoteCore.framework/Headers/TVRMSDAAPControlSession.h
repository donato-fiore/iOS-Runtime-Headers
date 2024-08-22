// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSDAAPCONTROLSESSION_H
#define TVRMSDAAPCONTROLSESSION_H

@class NSString;
@protocol TVRMSDAAPNowPlayingManagerDelegate, TVRMSDAAPRequestManagerDelegate, TVRMSDAAPTouchRemoteManagerDelegate, TVRMSDAAPControlSession, TVRMSDAAPControlSessionDelegate;

#import <Foundation/Foundation.h>

#import "TVRMSDAAPRequestManager.h"
#import "TVRMSDAAPLoginManager.h"
#import "TVRMSDAAPNowPlayingManager.h"
#import "TVRMSDAAPTouchRemoteManager.h"
#import "TVRMSNowPlayingInfo.h"
#import "TVRMSService.h"

@interface TVRMSDAAPControlSession : NSObject <TVRMSDAAPNowPlayingManagerDelegate, TVRMSDAAPRequestManagerDelegate, TVRMSDAAPTouchRemoteManagerDelegate, TVRMSDAAPControlSession>

 {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSDAAPLoginManager *_loginManager;
    TVRMSDAAPNowPlayingManager *_nowPlayingManager;
    TVRMSDAAPTouchRemoteManager *_touchRemoteManager;
    TVRMSNowPlayingInfo *_nowPlayingInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRMSDAAPControlSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TVRMSService *service; // ivar: _service
@property (readonly) Class superclass;


+(id)localControlSession;
+(id)proxyControlSession;
-(id)_stringFromRMSPlaybackCommand:(NSInteger)arg0 ;
-(id)init;
-(void)_initializeManagersWithControlInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)addToWishlist:(NSUInteger)arg0 databaseID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)beginObservingNowPlaying;
-(void)clearKeyboardText;
-(void)connectToService:(id)arg0 pairingGUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)endObservingNowPlaying;
-(void)logout;
-(void)nowPlayingManager:(id)arg0 artworkDataDidBecomeAvailable:(id)arg1 identifier:(id)arg2 ;
-(void)nowPlayingManager:(id)arg0 didUpdateAudioRoutes:(id)arg1 ;
-(void)nowPlayingManager:(id)arg0 didUpdateNowPlayingInfo:(id)arg1 ;
-(void)nowPlayingManager:(id)arg0 didUpdateVolume:(float)arg1 ;
-(void)pickAudioRoute:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestManagerFailedWithUnauthorizedError:(id)arg0 ;
-(void)requestManagerFailedWithUnknownError:(id)arg0 ;
-(void)seekToPlaybackTime:(int)arg0 completionHandler:(id)arg1 ;
-(void)sendKeyboardReturnCommand;
-(void)sendNavigationCommand:(NSInteger)arg0 ;
-(void)sendPlaybackCommand:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 ;
-(void)setKeyboardText:(id)arg0 ;
-(void)setLikedState:(NSInteger)arg0 itemID:(NSUInteger)arg1 databaseID:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)setVolume:(float)arg0 completionHandler:(id)arg1 ;
-(void)touchRemoteManagerDidDisconnect:(id)arg0 ;
-(void)touchRemoteManagerKeyboardEditingSessionDidBegin:(id)arg0 ;
-(void)touchRemoteManagerKeyboardEditingSessionDidEnd:(id)arg0 ;
-(void)touchRemoteManagerKeyboardEditingSessionDidUpdate:(id)arg0 ;


@end


#endif