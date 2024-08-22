// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSTVREMOTECORECONTROLSESSION_H
#define RMSTVREMOTECORECONTROLSESSION_H

@class TVRCDevice, NSString;
@protocol TVRCDeviceDelegate, RMSControlSession, OS_dispatch_queue, RMSControlSessionDelegate;

#import <Foundation/Foundation.h>

#import "RMSService.h"

@interface RMSTVRemoteCoreControlSession : NSObject <TVRCDeviceDelegate, RMSControlSession>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _allowPairing;
    TVRCDevice *_device;
    id *_connectionResponseBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSControlSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RMSService *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)deviceShouldAllowConnectionAuthentication:(id)arg0 ;
-(id)init;
-(void)addToWishlist:(NSUInteger)arg0 databaseID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)beginObservingNowPlaying;
-(void)connectToService:(id)arg0 pairingGUID:(id)arg1 allowPairing:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)device:(id)arg0 disconnectedForReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)device:(id)arg0 encounteredAuthenticationChallenge:(id)arg1 ;
-(void)deviceConnected:(id)arg0 ;
-(void)endObservingNowPlaying;
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