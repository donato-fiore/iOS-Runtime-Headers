// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICOREWIFIMANAGERCLIENT_H
#define SIRICOREWIFIMANAGERCLIENT_H


#import <Foundation/Foundation.h>


@interface SiriCoreWiFiManagerClient : NSObject {
    int _type;
    *__WiFiManagerClient _primitiveWiFiManagerClient;
    NSInteger _rssi;
    NSInteger _snr;
}




-(BOOL)hasAssociatedNetworkWithRSSI:(*NSInteger)arg0 andSNR:(*NSInteger)arg1 andPhyMode:(*id)arg2 andChannelInfo:(*id)arg3 isCaptive:(*BOOL)arg4 ;
-(BOOL)isWifiEnabled;
-(id)init;
-(struct __WiFiManagerClient *)_primitiveWiFiManagerClient;
-(void)_setWiFiManagerClientType:(int)arg0 ;
-(void)acquireWiFiAssertion:(NSInteger)arg0 ;
-(void)dealloc;
-(void)registerOneShotEnabledHandler:(id)arg0 ;
-(void)releaseWiFiAssertion;


@end


#endif