// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPDOBJECTDISCOVERYCLIENT_H
#define WPDOBJECTDISCOVERYCLIENT_H

@class NSNumber;


#import "WPDClient.h"
#import "WPDObjectDiscoveryData.h"
#import "WPDObjectDiscoveryManager.h"
#import "WPDSearchPartyAgent.h"

@interface WPDObjectDiscoveryClient : WPDClient

@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload; // ivar: _keyAddressAndPayload
@property NSUInteger keyRequestID; // ivar: _keyRequestID
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager; // ivar: _objectDiscoveryManager
@property BOOL pendingSent; // ivar: _pendingSent
@property (retain) WPDSearchPartyAgent *spAgent; // ivar: _spAgent
@property (retain) NSNumber *testBeaconingInterval; // ivar: _testBeaconingInterval
@property NSUInteger tokenRequestID; // ivar: _tokenRequestID


-(id)initWithXPCConnection:(id)arg0 server:(id)arg1 ;
-(void)completeSPBeaconingWithSuccess:(BOOL)arg0 ;
-(void)completeSPNearbyTockensWithSuccess:(BOOL)arg0 ;
-(void)dealloc;
-(void)destroy;
-(void)endTestMode;
-(void)generateStateDump;
-(void)notifyClientObjectDiscoveryStateChange:(NSInteger)arg0 ;
-(void)notifyClientStateChange:(NSInteger)arg0 Restricted:(BOOL)arg1 ;
-(void)registerWithDaemon:(id)arg0 forProcess:(id)arg1 machName:(id)arg2 holdVouchers:(NSInteger)arg3 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg0 ;
-(void)sendTestRequest:(id)arg0 ;
-(void)startAdvertising:(id)arg0 ;
-(void)startSPBeaconing;
-(void)stopAdvertising:(id)arg0 ;
-(void)stopSPBeaconing;
-(void)updateSPBeaconing;
-(void)updateSPNearbyTokens;


@end


#endif