// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPNEARBY_H
#define WPNEARBY_H

@class NSArray, NSMutableDictionary;
@protocol WPNearbyDelegate;


#import "WPClient.h"

@interface WPNearby : WPClient

@property NSInteger btBandwidthState; // ivar: _btBandwidthState
@property NSInteger connectionUseCase;
@property (weak, nonatomic) NSObject<WPNearbyDelegate> *delegate; // ivar: _delegate
@property (retain) NSArray *leCapablePeers; // ivar: _leCapablePeers
@property NSInteger maxAllowedConnectionDelayMs;
@property (retain) NSMutableDictionary *transfers; // ivar: _transfers


+(NSInteger)holdVouchers;
+(NSInteger)nearbyTypeFromClientType:(unsigned char)arg0 ;
+(unsigned char)clientTypeFromNearbyType:(NSInteger)arg0 ;
-(id)clientAsString;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)bandwidthStateUpdated:(id)arg0 ;
-(void)central:(id)arg0 subscribed:(BOOL)arg1 toCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)connectToPeer:(id)arg0 ;
-(void)connectToPeer:(id)arg0 withOptions:(id)arg1 ;
-(void)connectedDevice:(id)arg0 withError:(id)arg1 shouldDiscover:(BOOL)arg2 ;
-(void)connectedDeviceOverLEPipe:(id)arg0 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)disconnectFromPeer:(id)arg0 ;
-(void)disconnectedDevice:(id)arg0 withError:(id)arg1 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg0 withError:(id)arg1 ;
-(void)discoveredCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)failedToStartTrackingPeer:(id)arg0 error:(id)arg1 ;
-(void)foundPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)invalidate;
-(void)lostPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)populateClientGATT:(id)arg0 ;
-(void)receivedData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 ;
-(void)receivedData:(id)arg0 fromEndpoint:(id)arg1 forPeripheral:(id)arg2 ;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)sendData:(id)arg0 toPeer:(id)arg1 ;
-(void)sentData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)sentData:(id)arg0 toEndpoint:(id)arg1 forPeripheral:(id)arg2 withError:(id)arg3 ;
-(void)startAdvertisingOfType:(NSInteger)arg0 data:(id)arg1 priority:(NSInteger)arg2 mode:(NSInteger)arg3 ;
-(void)startAdvertisingOfType:(NSInteger)arg0 data:(id)arg1 priority:(NSInteger)arg2 mode:(NSInteger)arg3 options:(id)arg4 ;
-(void)startAdvertisingOfType:(NSInteger)arg0 withData:(id)arg1 ;
-(void)startAdvertisingOfType:(NSInteger)arg0 withData:(id)arg1 priority:(NSInteger)arg2 ;
-(void)startScanningForType:(NSInteger)arg0 data:(id)arg1 mask:(id)arg2 peers:(id)arg3 scanMode:(NSInteger)arg4 ;
-(void)startScanningForType:(NSInteger)arg0 data:(id)arg1 mask:(id)arg2 peers:(id)arg3 scanMode:(NSInteger)arg4 rssi:(id)arg5 duplicates:(BOOL)arg6 ;
-(void)startScanningForType:(NSInteger)arg0 data:(id)arg1 mask:(id)arg2 peers:(id)arg3 scanMode:(NSInteger)arg4 rssi:(id)arg5 duplicates:(BOOL)arg6 scanCache:(BOOL)arg7 ;
-(void)startScanningForType:(NSInteger)arg0 data:(id)arg1 mask:(id)arg2 peers:(id)arg3 scanMode:(NSInteger)arg4 rssi:(id)arg5 duplicates:(BOOL)arg6 scanCache:(BOOL)arg7 useCaseList:(id)arg8 ;
-(void)startTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)startedTrackingPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertisingOfType:(NSInteger)arg0 ;
-(void)stopScanningForType:(NSInteger)arg0 ;
-(void)stopTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)stoppedTrackingPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)updateAdvertisingRequest:(id)arg0 withUpdate:(id)arg1 ;
-(void)updatedNotificationState:(BOOL)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 withPeripheral:(id)arg3 ;


@end


#endif