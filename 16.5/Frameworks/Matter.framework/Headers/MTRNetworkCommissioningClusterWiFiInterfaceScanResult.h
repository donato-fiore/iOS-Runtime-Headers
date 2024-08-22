// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERWIFIINTERFACESCANRESULT_H
#define MTRNETWORKCOMMISSIONINGCLUSTERWIFIINTERFACESCANRESULT_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject <NSCopying>



@property (copy, nonatomic) NSData *bssid; // ivar: _bssid
@property (copy, nonatomic) NSNumber *channel; // ivar: _channel
@property (copy, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (copy, nonatomic) NSNumber *security; // ivar: _security
@property (copy, nonatomic) NSData *ssid; // ivar: _ssid
@property (copy, nonatomic) NSNumber *wiFiBand; // ivar: _wiFiBand


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif