// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (nonatomic, getter=isWiredCarPlaySimulator) BOOL wiredCarPlaySimulator; // ivar: _wiredCarPlaySimulator
@property (copy, nonatomic) NSArray *wiredIPv6Addresses; // ivar: _wiredIPv6Addresses
@property (copy, nonatomic) NSArray *wirelessIPv6Addresses; // ivar: _wirelessIPv6Addresses


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHostProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif