// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPOBJECTDISCOVERY_H
#define WPOBJECTDISCOVERY_H

@protocol WPObjectDiscoveryDelegate, OS_dispatch_queue;


#import "WPClient.h"

@interface WPObjectDiscovery : WPClient

@property (weak, nonatomic) NSObject<WPObjectDiscoveryDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)isScanningEnabled;
-(BOOL)isValidScanOptions:(id)arg0 ;
-(BOOL)isValidScanRequest:(id)arg0 ;
-(id)clientAsString;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)scanRequestFromScanMode:(NSInteger)arg0 UpdateTime:(CGFloat)arg1 ;
-(id)scanRequestFromScanOptions:(id)arg0 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)devicesDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)receivedTestResponse:(id)arg0 ;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningFailedWithError:(id)arg0 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startScanning;
-(void)startScanningWithMode:(NSInteger)arg0 ;
-(void)startScanningWithMode:(NSInteger)arg0 Timeout:(CGFloat)arg1 ;
-(void)startScanningWithOptions:(id)arg0 ;
-(void)startTest;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopScanning;
-(void)stopTest;
-(void)updateBeaconingExtended:(id)arg0 ;
-(void)updateBeaconingInterval:(id)arg0 ;
-(void)updateBeaconingKeys:(id)arg0 ;
-(void)updateBeaconingState:(id)arg0 ;
-(void)updateBeaconingStatus:(id)arg0 ;
-(void)updateNearOwnerTokens:(id)arg0 ;
-(void)updateScanningRequest:(id)arg0 withUpdate:(id)arg1 ;


@end


#endif