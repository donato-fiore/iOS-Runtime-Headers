// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIAWARESUBSCRIBECONFIGURATION_H
#define WIFIAWARESUBSCRIBECONFIGURATION_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiAwareFastDiscoveryConfiguration.h"

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger authenticationType; // ivar: _authenticationType
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration; // ivar: _fastDiscoveryConfiguration
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) NSData *serviceSpecificInfo; // ivar: _serviceSpecificInfo


+(BOOL)supportsSecureCoding;
-(BOOL)fastDiscoveryConfigEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 serviceSpecificInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif