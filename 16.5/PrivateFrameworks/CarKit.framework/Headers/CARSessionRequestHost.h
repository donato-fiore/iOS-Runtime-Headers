// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARSESSIONREQUESTHOST_H
#define CARSESSIONREQUESTHOST_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARSessionRequestHost : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *carplayWiFiUUID; // ivar: _carplayWiFiUUID
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSInteger port; // ivar: _port
@property (copy, nonatomic) NSString *publicKey; // ivar: _publicKey
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (readonly, nonatomic) BOOL supportsMutualAuthentication; // ivar: _supportsMutualAuthentication
@property (nonatomic, getter=isWiredCarPlaySimulator) BOOL wiredCarPlaySimulator; // ivar: _wiredCarPlaySimulator
@property (copy, nonatomic) NSArray *wiredIPv6Addresses; // ivar: _wiredIPv6Addresses
@property (copy, nonatomic) NSArray *wirelessIPv6Addresses; // ivar: _wirelessIPv6Addresses


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 wiredIPv6Addresses:(id)arg1 wirelessIPv6Addresses:(id)arg2 port:(NSInteger)arg3 carplayWiFiUUID:(id)arg4 deviceIdentifier:(id)arg5 publicKey:(id)arg6 sourceVersion:(id)arg7 wiredCarPlaySimulator:(BOOL)arg8 ;
-(id)initWithHostProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif