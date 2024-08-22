// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NIWIFIRANGINGTESTCONFIGURATION_H
#define _NIWIFIRANGINGTESTCONFIGURATION_H

@class NSArray, NSDictionary;


#import "NIConfiguration.h"
#import "NIDiscoveryToken.h"

@interface _NIWiFiRangingTestConfiguration : NIConfiguration

@property (copy) NSArray *monitoredRegions; // ivar: _monitoredRegions
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // ivar: _peerDiscoveryToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiscoveryToken:(id)arg0 wifiRangingParameters:(id)arg1 regions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif