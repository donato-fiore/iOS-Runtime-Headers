// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPADVERTISING_H
#define WPADVERTISING_H

@protocol WPAdvertisingDelegate;


#import "WPClient.h"

@interface WPAdvertising : WPClient

@property (retain, nonatomic) NSObject<WPAdvertisingDelegate> *delegate; // ivar: _delegate


+(id)puckTypeToString:(unsigned char)arg0 ;
+(unsigned char)puckStringToType:(id)arg0 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)parseCompanyData:(id)arg0 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)deregisterService:(id)arg0 ;
-(void)invalidate;
-(void)registerService:(id)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;


@end


#endif