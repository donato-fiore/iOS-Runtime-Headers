// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPTEST_H
#define WPTEST_H

@class NSMutableDictionary;
@protocol WPTestDelegate;


#import "WPClient.h"

@interface WPTest : WPClient

@property (weak, nonatomic) NSObject<WPTestDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableDictionary *transfers; // ivar: _transfers


+(NSInteger)holdVouchers;
-(id)clientAsString;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)central:(id)arg0 subscribed:(BOOL)arg1 toCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)connectToPeer:(id)arg0 withOptions:(id)arg1 ;
-(void)connectedDevice:(id)arg0 withError:(id)arg1 shouldDiscover:(BOOL)arg2 ;
-(void)connectedDeviceOverLEPipe:(id)arg0 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)disconnectFromPeer:(id)arg0 ;
-(void)disconnectedDevice:(id)arg0 withError:(id)arg1 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg0 withError:(id)arg1 ;
-(void)invalidate;
-(void)receivedData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 ;
-(void)receivedData:(id)arg0 fromEndpoint:(id)arg1 forPeripheral:(id)arg2 ;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)sendData:(id)arg0 toPeer:(id)arg1 ;
-(void)sentData:(id)arg0 toEndpoint:(id)arg1 forPeripheral:(id)arg2 withError:(id)arg3 ;
-(void)startAdvertisingOfType:(unsigned char)arg0 data:(id)arg1 priority:(NSInteger)arg2 mode:(NSInteger)arg3 options:(id)arg4 ;
-(void)startScanningForType:(unsigned char)arg0 data:(id)arg1 mask:(id)arg2 peers:(id)arg3 scanMode:(NSInteger)arg4 rssi:(id)arg5 duplicates:(BOOL)arg6 scanCache:(BOOL)arg7 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertisingOfType:(unsigned char)arg0 ;
-(void)stopScanningForType:(unsigned char)arg0 ;


@end


#endif