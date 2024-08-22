// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERADDORUPDATEWIFINETWORKPARAMS_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERADDORUPDATEWIFINETWORKPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSData *credentials; // ivar: _credentials
@property (retain, nonatomic) NSData *ssid; // ivar: _ssid


-(id)init;


@end


#endif