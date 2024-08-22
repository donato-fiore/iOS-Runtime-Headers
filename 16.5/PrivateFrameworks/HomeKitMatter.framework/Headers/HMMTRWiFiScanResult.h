// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRWIFISCANRESULT_H
#define HMMTRWIFISCANRESULT_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface HMMTRWiFiScanResult : NSObject

@property (readonly, nonatomic) NSNumber *band; // ivar: _band
@property (readonly, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (readonly, nonatomic) NSNumber *security; // ivar: _security
@property (readonly, nonatomic) NSData *ssid; // ivar: _ssid


-(id)initWithMTRNetworkCommissioningClusterWiFiInterfaceScanResult:(id)arg0 ;
-(id)initWithSSID:(id)arg0 rssi:(id)arg1 security:(unsigned char)arg2 band:(unsigned char)arg3 ;


@end


#endif