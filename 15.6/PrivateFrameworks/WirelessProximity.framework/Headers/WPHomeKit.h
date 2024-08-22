// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPHOMEKIT_H
#define WPHOMEKIT_H

@protocol WPHomeKitDelegate;


#import "WPClient.h"

@interface WPHomeKit : WPClient

@property (weak, nonatomic) NSObject<WPHomeKitDelegate> *delegate; // ivar: _delegate


-(NSInteger)homeKitTypeFromClientType:(unsigned char)arg0 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(struct ? )dutyCycleToScanningRates:(NSInteger)arg0 ;
-(unsigned char)clientTypeFromHomeKitType:(NSInteger)arg0 ;
-(void)checkAllowDuplicate;
-(void)deviceDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startScanningWithData:(id)arg0 forType:(NSInteger)arg1 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopScanningForType:(NSInteger)arg0 ;


@end


#endif