// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERTHREADINTERFACESCANRESULT_H
#define MTRNETWORKCOMMISSIONINGCLUSTERTHREADINTERFACESCANRESULT_H

@class NSNumber, NSData, NSString;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterThreadInterfaceScanResult : NSObject

@property (retain, nonatomic) NSNumber *channel; // ivar: _channel
@property (retain, nonatomic) NSData *extendedAddress; // ivar: _extendedAddress
@property (retain, nonatomic) NSNumber *extendedPanId; // ivar: _extendedPanId
@property (retain, nonatomic) NSNumber *lqi; // ivar: _lqi
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (retain, nonatomic) NSNumber *panId; // ivar: _panId
@property (retain, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (retain, nonatomic) NSNumber *version; // ivar: _version


-(id)description;
-(id)init;


@end


#endif