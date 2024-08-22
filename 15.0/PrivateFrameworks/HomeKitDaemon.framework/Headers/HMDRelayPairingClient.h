// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYPAIRINGCLIENT_H
#define HMDRELAYPAIRINGCLIENT_H

@class HAPRelayPairingClient, NSString;
@protocol HMDRelayManagerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDRelayManager.h"

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDRelayManager *relayManager; // ivar: _relayManager
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithRelayManager:(id)arg0 accessory:(id)arg1 ;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg0 ;
-(void)close;
-(void)open;
-(void)relayManager:(id)arg0 didUpdateControllerIdentifier:(id)arg1 ;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg0 pairingToken:(id)arg1 ;
-(void)requestControllerIdentifier;


@end


#endif