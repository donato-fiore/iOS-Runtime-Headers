// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPHEYSIRI_H
#define WPHEYSIRI_H

@protocol WPHeySiriProtocol;


#import "WPClient.h"

@interface WPHeySiri : WPClient

@property (weak, nonatomic) NSObject<WPHeySiriProtocol> *delegate; // ivar: _delegate
@property BOOL isScanning; // ivar: _isScanning


+(NSInteger)holdVouchers;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startAdvertisingWithData:(id)arg0 ;
-(void)startScanning;
-(void)startScanningAndAdvertisingWithData:(id)arg0 ;
-(void)startScanningAndAdvertisingWithOptions:(id)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertising;
-(void)stopScanning;
-(void)stopScanningAndAdvertising;
-(void)updateAdvertisingRequest:(id)arg0 withUpdate:(id)arg1 ;
-(void)updateScanningRequest:(id)arg0 withUpdate:(id)arg1 ;


@end


#endif