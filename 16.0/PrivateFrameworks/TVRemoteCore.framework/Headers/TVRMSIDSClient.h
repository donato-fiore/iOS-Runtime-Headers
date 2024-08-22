// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSIDSCLIENT_H
#define TVRMSIDSCLIENT_H

@class NSMutableDictionary, IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TVRMSIDSClient : NSObject <IDSServiceDelegate>

 {
    NSMutableDictionary *_messageRecords;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
}


@property (nonatomic, getter=isCompanionAvailable) BOOL companionAvailable; // ivar: _companionAvailable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedClient;
-(id)init;
-(void)_handleAddToWishlistResponse:(id)arg0 ;
-(void)_handleAudioRoutesDidUpdate:(id)arg0 ;
-(void)_handleAvailableServicesDidUpdate:(id)arg0 ;
-(void)_handleBeginDiscoverySessionResponse:(id)arg0 ;
-(void)_handleBeginObservingNowPlayingResponse:(id)arg0 ;
-(void)_handleBeginPairingSessionResponse:(id)arg0 ;
-(void)_handleConnectToServiceResponse:(id)arg0 ;
-(void)_handleHeartbeatResponse:(id)arg0 ;
-(void)_handleNowPlayingArtworkAvailable:(id)arg0 ;
-(void)_handleNowPlayingArtworkDataResponse:(id)arg0 ;
-(void)_handleNowPlayingInfoDidUpdate:(id)arg0 ;
-(void)_handlePairingDidFail:(id)arg0 ;
-(void)_handlePairingDidSucceed:(id)arg0 ;
-(void)_handlePickAudioRouteResponse:(id)arg0 ;
-(void)_handleResponseCodeMessage:(id)arg0 ;
-(void)_handleSessionDidEnd:(id)arg0 ;
-(void)_handleSetLikedStateResponse:(id)arg0 ;
-(void)_handleTimeoutForMessageWithIdentifier:(id)arg0 ;
-(void)_handleVolumeDidUpdate:(id)arg0 ;
-(void)_handleWifiAvailabilityDidChange:(id)arg0 ;
-(void)_invokeArtworkDataResponseBlock:(id)arg0 artworkData:(id)arg1 ;
-(void)_invokeBeginDiscoveryResponseBlock:(id)arg0 success:(BOOL)arg1 session:(int)arg2 ;
-(void)_invokeBeginPairingResponseBlock:(id)arg0 responseCode:(NSInteger)arg1 session:(int)arg2 ;
-(void)_invokeConnectToServiceResponseBlock:(id)arg0 responseCode:(NSInteger)arg1 controlInterface:(id)arg2 session:(int)arg3 ;
-(void)_invokeResponseCodeResponseBlock:(id)arg0 responseCode:(NSInteger)arg1 ;
-(void)_sendMessage:(id)arg0 type:(unsigned short)arg1 timeout:(int)arg2 queueOneID:(id)arg3 priority:(NSInteger)arg4 responseBlock:(id)arg5 ;
-(void)_updateCompanionAvailability;
-(void)addToWishlist:(NSUInteger)arg0 databaseID:(NSUInteger)arg1 sessionIdentifier:(int)arg2 completionHandler:(id)arg3 ;
-(void)beginDiscoverySessionWithDiscoveryTypes:(int)arg0 pairedNetworkNames:(id)arg1 completionHandler:(id)arg2 ;
-(void)beginObservingNowPlayingWithSessionIdentifier:(int)arg0 completionHandler:(id)arg1 ;
-(void)beginPairingSessionWithPasscode:(id)arg0 appName:(id)arg1 deviceName:(id)arg2 deviceModel:(id)arg3 completionHandler:(id)arg4 ;
-(void)connectToService:(id)arg0 pairingGUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)endDiscoverySession:(int)arg0 ;
-(void)endObservingNowPlayingWithSessionIdentifier:(int)arg0 ;
-(void)endPairingSession:(int)arg0 ;
-(void)logoutWithSessionIdentifier:(int)arg0 ;
-(void)pickAudioRouteWithMacAddress:(NSUInteger)arg0 sessionIdentifier:(int)arg1 completionHandler:(id)arg2 ;
-(void)requestArtworkDataForNowPlayingInfo:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 compressionQuality:(float)arg3 completionHandler:(id)arg4 ;
-(void)seekToPlaybackTime:(int)arg0 sessionIdentifier:(int)arg1 ;
-(void)sendHeartbeatWithSessionIdentifier:(int)arg0 completionHandler:(id)arg1 ;
-(void)sendNavigationCommand:(NSInteger)arg0 sessionIdentifier:(int)arg1 ;
-(void)sendPlaybackCommand:(NSInteger)arg0 sessionIdentifier:(int)arg1 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 sessionIdentifier:(int)arg2 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(unsigned int)arg1 sessionIdentifier:(int)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)setLikedState:(NSInteger)arg0 itemID:(NSUInteger)arg1 databaseID:(NSUInteger)arg2 sessionIdentifier:(int)arg3 completionHandler:(id)arg4 ;
-(void)setVolume:(float)arg0 sessionIdentifier:(int)arg1 ;
-(void)updatePairedNetworkNames:(id)arg0 sessionIdentifier:(int)arg1 ;


@end


#endif