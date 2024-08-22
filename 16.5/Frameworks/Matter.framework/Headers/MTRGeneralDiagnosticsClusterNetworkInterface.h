// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGENERALDIAGNOSTICSCLUSTERNETWORKINTERFACE_H
#define MTRGENERALDIAGNOSTICSCLUSTERNETWORKINTERFACE_H

@class NSData, NSArray, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGeneralDiagnosticsClusterNetworkInterface : NSObject <NSCopying>



@property (copy, nonatomic) NSData *hardwareAddress; // ivar: _hardwareAddress
@property (copy, nonatomic) NSArray *iPv4Addresses; // ivar: _iPv4Addresses
@property (copy, nonatomic) NSArray *iPv6Addresses; // ivar: _iPv6Addresses
@property (copy, nonatomic) NSNumber *isOperational; // ivar: _isOperational
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *offPremiseServicesReachableIPv4; // ivar: _offPremiseServicesReachableIPv4
@property (copy, nonatomic) NSNumber *offPremiseServicesReachableIPv6; // ivar: _offPremiseServicesReachableIPv6
@property (copy, nonatomic) NSNumber *type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif