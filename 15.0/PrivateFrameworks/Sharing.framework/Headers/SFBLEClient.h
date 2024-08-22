// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBLECLIENT_H
#define SFBLECLIENT_H

@class NSMutableSet, WPAWDL, WPNearby, WPPairing, NSString;
@protocol WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFBLEClient : NSObject <WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_wpAirDropDelegates;
    WPAWDL *_wpAirDrop;
    NSMutableSet *_wpNearbyDelegates;
    WPNearby *_wpNearby;
    NSMutableSet *_wpPairingDelegates;
    WPPairing *_wpPairing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedClient;
-(id)addAirDropDelegate:(id)arg0 ;
-(id)addNearbyDelegate:(id)arg0 ;
-(id)addPairingDelegate:(id)arg0 ;
-(id)init;
-(void)awdl:(id)arg0 failedToStartAdvertisingWithError:(id)arg1 ;
-(void)awdl:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)awdl:(id)arg0 foundDevice:(id)arg1 rssi:(id)arg2 ;
-(void)awdlAdvertisingPending:(id)arg0 ;
-(void)awdlDidUpdateState:(id)arg0 ;
-(void)awdlStartedAdvertising:(id)arg0 ;
-(void)awdlStartedScanning:(id)arg0 ;
-(void)nearby:(id)arg0 didConnectToPeer:(id)arg1 transport:(NSInteger)arg2 error:(id)arg3 ;
-(void)nearby:(id)arg0 didDeferAdvertisingType:(NSInteger)arg1 ;
-(void)nearby:(id)arg0 didDisconnectFromPeer:(id)arg1 error:(id)arg2 ;
-(void)nearby:(id)arg0 didDiscoverType:(NSInteger)arg1 withData:(id)arg2 fromPeer:(id)arg3 peerInfo:(id)arg4 ;
-(void)nearby:(id)arg0 didFailToStartAdvertisingOfType:(NSInteger)arg1 withError:(id)arg2 ;
-(void)nearby:(id)arg0 didFailToStartScanningForType:(NSInteger)arg1 WithError:(id)arg2 ;
-(void)nearby:(id)arg0 didLosePeer:(id)arg1 type:(NSInteger)arg2 ;
-(void)nearby:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 ;
-(void)nearby:(id)arg0 didSendData:(id)arg1 toPeer:(id)arg2 error:(id)arg3 ;
-(void)nearby:(id)arg0 didStartAdvertisingType:(NSInteger)arg1 ;
-(void)nearby:(id)arg0 didStartScanningForType:(NSInteger)arg1 ;
-(void)nearby:(id)arg0 didStopAdvertisingType:(NSInteger)arg1 withError:(id)arg2 ;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg0 ;
-(void)nearbyDidUpdateState:(id)arg0 ;
-(void)pairing:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)pairing:(id)arg0 foundDevice:(id)arg1 payload:(id)arg2 rssi:(id)arg3 peerInfo:(id)arg4 ;
-(void)pairingDidUpdateState:(id)arg0 ;
-(void)pairingStartedScanning:(id)arg0 ;
-(void)pairingStoppedScanning:(id)arg0 ;
-(void)removeAirDropDelegate:(id)arg0 ;
-(void)removeNearbyDelegate:(id)arg0 ;
-(void)removePairingDelegate:(id)arg0 ;


@end


#endif