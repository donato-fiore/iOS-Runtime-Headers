// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSLOCALPAIRINGSESSION_H
#define RMSLOCALPAIRINGSESSION_H

@class NSString;
@protocol NSNetServiceDelegate, RMSPairingServerDelegate, RMSPairingSession, RMSPairingSessionDelegate;

#import <Foundation/Foundation.h>

#import "RMSPairingServer.h"

@interface RMSLocalPairingSession : NSObject <NSNetServiceDelegate, RMSPairingServerDelegate, RMSPairingSession>

 {
    RMSPairingServer *_pairingServer;
}


@property (retain, nonatomic) NSString *advertisedAppName; // ivar: _advertisedAppName
@property (retain, nonatomic) NSString *advertisedDeviceModel; // ivar: _advertisedDeviceModel
@property (retain, nonatomic) NSString *advertisedDeviceName; // ivar: _advertisedDeviceName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSPairingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *passcode; // ivar: _passcode
@property (readonly) Class superclass;


-(id)_expectedPasscodeHashForPasscode:(id)arg0 publicKey:(id)arg1 ;
-(id)_generatePublicKey;
-(id)_pairingNetServiceName;
-(id)init;
-(void)_startBonjourAdvertisingWithPublicKey:(id)arg0 httpServerPort:(unsigned short)arg1 ;
-(void)beginPairing;
-(void)dealloc;
-(void)endPairing;
-(void)netService:(id)arg0 didNotPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg0 ;
-(void)netServiceDidStop:(id)arg0 ;
-(void)pairingServer:(id)arg0 didPairWithService:(id)arg1 pairingGUID:(id)arg2 ;
-(void)pairingServerDidFail:(id)arg0 ;
-(void)unpairService:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif