// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSPAIRINGSESSIONPROXY_H
#define RMSPAIRINGSESSIONPROXY_H

@class NSString;
@protocol RMSPairingSession, RMSPairingSessionDelegate;


#import "RMSSessionProxy.h"
#import "RMSIDSClient.h"

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession>

 {
    RMSIDSClient *_idsClient;
    BOOL _pairing;
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


-(id)init;
-(void)_handleDidPairWithServiceNotification:(id)arg0 ;
-(void)_handlePairingDidFailNotification:(id)arg0 ;
-(void)_handleSessionDidEndNotification:(id)arg0 ;
-(void)_notifyDelegatePairingFailed;
-(void)beginPairing;
-(void)dealloc;
-(void)endPairing;
-(void)heartbeatDidFail;
-(void)unpairService:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif