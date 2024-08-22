// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26AUTHENTICATIONSERVICESCORE13ASCABLECLIENT_H
#define _TTC26AUTHENTICATIONSERVICESCORE13ASCABLECLIENT_H

@class NSURL;
@protocol CBCentralManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC26AuthenticationServicesCore13ASCABLEClient : NSObject <CBCentralManagerDelegate>

 {
    ? qrCodeStruct;
    ? delegate;
    ? bluetoothManager;
    ? cryptographyManager;
    ? currentRelyingPartyIdentifier;
    ? currentOperationType;
    ? clientDataJSON;
    ? webSocket;
    ? authenticatorAdvertisement;
    ? completionHandler;
    ? powerLogger;
    ? testDelegate;
    ? currentState;
}


@property (nonatomic, readonly) NSURL *qrCodeURL;


-(id)init;
-(id)initWithDelegate:(id)arg0 isRegistrationRequest:(BOOL)arg1 ;
-(void)cancelIfNecessary;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)performAuthenticationOperation:(NSInteger)arg0 forRelyingPartyIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif