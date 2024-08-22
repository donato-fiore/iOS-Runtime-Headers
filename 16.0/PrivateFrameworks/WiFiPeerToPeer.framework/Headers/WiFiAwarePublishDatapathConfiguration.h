// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAWAREPUBLISHDATAPATHCONFIGURATION_H
#define WIFIAWAREPUBLISHDATAPATHCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiAwarePublishDatapathSecurityConfiguration.h"
#import "WiFiAwarePublishDatapathServiceSpecificInfo.h"

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) WiFiAwarePublishDatapathSecurityConfiguration *securityConfiguration; // ivar: _securityConfiguration
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // ivar: _serviceSpecificInfo
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)securityConfigurationEqual:(id)arg0 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceType:(NSInteger)arg0 securityConfiguration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif