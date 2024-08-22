// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIAWAREDATAPATHCONFIGURATION_H
#define WIFIAWAREDATAPATHCONFIGURATION_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiAwareDiscoveryResult.h"
#import "WiFiAwareInternetSharingConfiguration.h"
#import "WiFiAwarePublishDatapathServiceSpecificInfo.h"

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // ivar: _discoveryResult
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration; // ivar: _internetSharingConfiguration
@property (readonly, nonatomic) NSString *passphrase; // ivar: _passphrase
@property (readonly, nonatomic) NSData *pmk; // ivar: _pmk
@property (readonly, nonatomic) NSData *pmkID; // ivar: _pmkID
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // ivar: _serviceSpecificInfo
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType


+(BOOL)supportsSecureCoding;
-(BOOL)internetSharingEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)passphraseEqual:(id)arg0 ;
-(BOOL)pmkEqual:(id)arg0 ;
-(BOOL)pmkIDEqual:(id)arg0 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiscoveryResult:(id)arg0 serviceType:(NSInteger)arg1 passphrase:(id)arg2 pmk:(id)arg3 pmkID:(id)arg4 serviceSpecificInfo:(id)arg5 internetSharingConfiguration:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif