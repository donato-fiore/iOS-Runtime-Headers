// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERADDORUPDATEWIFINETWORKPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERADDORUPDATEWIFINETWORKPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSData *credentials; // ivar: _credentials
@property (retain, nonatomic) NSData *ssid; // ivar: _ssid
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif