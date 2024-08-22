// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERTHREADINTERFACESCANRESULT_H
#define MTRNETWORKCOMMISSIONINGCLUSTERTHREADINTERFACESCANRESULT_H

@class NSNumber, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterThreadInterfaceScanResult : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *channel; // ivar: _channel
@property (copy, nonatomic) NSData *extendedAddress; // ivar: _extendedAddress
@property (copy, nonatomic) NSNumber *extendedPanId; // ivar: _extendedPanId
@property (copy, nonatomic) NSNumber *lqi; // ivar: _lqi
@property (copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (copy, nonatomic) NSNumber *panId; // ivar: _panId
@property (copy, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (copy, nonatomic) NSNumber *version; // ivar: _version


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif