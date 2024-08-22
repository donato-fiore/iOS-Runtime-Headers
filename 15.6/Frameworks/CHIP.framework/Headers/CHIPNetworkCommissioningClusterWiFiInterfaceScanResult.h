// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERWIFIINTERFACESCANRESULT_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERWIFIINTERFACESCANRESULT_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject

@property (retain, nonatomic) NSData *bssid; // ivar: _bssid
@property (retain, nonatomic) NSNumber *channel; // ivar: _channel
@property (retain, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (retain, nonatomic) NSNumber *security; // ivar: _security
@property (retain, nonatomic) NSData *ssid; // ivar: _ssid
@property (retain, nonatomic) NSNumber *wiFiBand; // ivar: _wiFiBand


-(id)init;


@end


#endif