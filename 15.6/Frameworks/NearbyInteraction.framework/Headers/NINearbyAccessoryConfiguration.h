// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NINEARBYACCESSORYCONFIGURATION_H
#define NINEARBYACCESSORYCONFIGURATION_H

@class NSData, NSDictionary;


#import "NIConfiguration.h"
#import "NIDiscoveryToken.h"

@interface NINearbyAccessoryConfiguration : NIConfiguration {
    NSData *_rawData;
}


@property (readonly, copy) NSData *accessoryConfigData;
@property (readonly, copy, nonatomic) NIDiscoveryToken *accessoryDiscoveryToken; // ivar: _accessoryDiscoveryToken
@property (copy) NSDictionary *debugParameters; // ivar: _debugParameters


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif