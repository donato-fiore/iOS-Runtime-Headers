// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYACCESSORY_H
#define HAPRELAYACCESSORY_H

@class NSString;
@protocol HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate;


#import "HAPAccessory.h"
#import "HAPRelayActivationClient.h"
#import "HAPCharacteristic.h"
#import "HAPRelayPairingClient.h"

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *relayAccessoryIdentifier; // ivar: _relayAccessoryIdentifier
@property (readonly, nonatomic) HAPRelayActivationClient *relayActivationClient; // ivar: _relayActivationClient
@property (retain, nonatomic) HAPCharacteristic *relayControlPointCharacteristic; // ivar: _relayControlPointCharacteristic
@property (nonatomic, getter=isRelayEnabled) BOOL relayEnabled; // ivar: _relayEnabled
@property (retain, nonatomic) HAPCharacteristic *relayEnabledCharacteristic; // ivar: _relayEnabledCharacteristic
@property (readonly, nonatomic) HAPRelayPairingClient *relayPairingClient; // ivar: _relayPairingClient
@property (readonly, nonatomic) NSUInteger relayState; // ivar: _relayState
@property (readonly) Class superclass;


+(id)requiredRelayServiceCharacteristics;
-(BOOL)_parseRelayService:(id)arg0 ;
-(BOOL)_parseServices;
-(BOOL)supportsRelay;
-(id)initWithServer:(id)arg0 instanceID:(id)arg1 parsedServices:(id)arg2 ;
-(void)_handleRelayActivationCertificate:(id)arg0 ;
-(void)_handleRelayActivationChallenge:(id)arg0 ;
-(void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg0 accessoryIdentifier:(id)arg1 ;
-(void)_handleRelayPairingIdentifierRequest;
-(void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg0 ;
-(void)_stopRelayActivationWithError:(id)arg0 ;
-(void)_stopRelayPairingWithError:(id)arg0 ;
-(void)_updateRelayEnabled:(BOOL)arg0 ;
-(void)accessoryServer:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 ;
-(void)addRelayPairingWithIdentifier:(id)arg0 accessToken:(id)arg1 admin:(BOOL)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)relayActivationClient:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)relayActivationClient:(id)arg0 didReceiveChallenge:(id)arg1 ;
-(void)relayActivationClient:(id)arg0 didReceiveRelayCertificate:(id)arg1 ;
-(void)relayPairingClient:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)relayPairingClient:(id)arg0 didReceiveAccessToken:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(void)relayPairingClient:(id)arg0 didReceiveControllerIdentifier:(id)arg1 ;
-(void)removeRelayPairingWithIdentifier:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startRelayActivationWithActivationClient:(id)arg0 ;
-(void)startRelayPairingWithPairingClient:(id)arg0 ;


@end


#endif