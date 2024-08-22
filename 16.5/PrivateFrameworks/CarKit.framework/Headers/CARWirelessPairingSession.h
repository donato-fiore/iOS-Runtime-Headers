// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARWIRELESSPAIRINGSESSION_H
#define CARWIRELESSPAIRINGSESSION_H

@class NSXPCConnection, NSString, NSData;
@protocol OS_dispatch_queue, CARWirelessPairingDelegate;

#import <Foundation/Foundation.h>


@interface CARWirelessPairingSession : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<CARWirelessPairingDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) NSUInteger supportedCapabilities; // ivar: _supportedCapabilities
@property (readonly, nonatomic) NSData *vehicleAddress; // ivar: _vehicleAddress


-(id)initWithVehicleAddress:(id)arg0 supportedCapabilites:(NSUInteger)arg1 keyIdentifier:(id)arg2 ;
-(void)_delegate_handleCompletedWithResult:(NSUInteger)arg0 ;
-(void)_delegate_handleRequestedPairingWithDeviceAddress:(id)arg0 forIntent:(NSUInteger)arg1 C192:(id)arg2 R192:(id)arg3 C256:(id)arg4 R256:(id)arg5 ;
-(void)_handleConnectionReset;
-(void)_servicePerform:(id)arg0 ;
-(void)_setupConnection;
-(void)cancelPairing;
-(void)dealloc;
-(void)handleVehicleReportedResult:(BOOL)arg0 ;
-(void)invalidate;
-(void)requestPairing;
-(void)setupVehicleDataC192:(id)arg0 r192:(id)arg1 c256:(id)arg2 r256:(id)arg3 ;


@end


#endif