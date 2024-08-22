// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALDIAGNOSTICSCLUSTERNETWORKINTERFACETYPE_H
#define MTRGENERALDIAGNOSTICSCLUSTERNETWORKINTERFACETYPE_H

@class NSData, NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRGeneralDiagnosticsClusterNetworkInterfaceType : NSObject

@property (retain, nonatomic) NSData *hardwareAddress; // ivar: _hardwareAddress
@property (retain, nonatomic) NSArray *iPv4Addresses; // ivar: _iPv4Addresses
@property (retain, nonatomic) NSArray *iPv6Addresses; // ivar: _iPv6Addresses
@property (retain, nonatomic) NSNumber *isOperational; // ivar: _isOperational
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv4; // ivar: _offPremiseServicesReachableIPv4
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv6; // ivar: _offPremiseServicesReachableIPv6
@property (retain, nonatomic) NSNumber *type; // ivar: _type


-(id)description;
-(id)init;


@end


#endif