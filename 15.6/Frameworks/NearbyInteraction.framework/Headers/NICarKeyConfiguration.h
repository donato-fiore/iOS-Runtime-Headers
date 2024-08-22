// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NICARKEYCONFIGURATION_H
#define NICARKEYCONFIGURATION_H

@class NSDictionary, NSString;


#import "NIConfiguration.h"

@interface NICarKeyConfiguration : NIConfiguration {
    NSInteger _configurationTypeInternal;
}


@property (readonly) NSInteger configurationType;
@property (copy) NSDictionary *debugOptions; // ivar: _debugOptions
@property (copy) NSString *vehicleIdentifier; // ivar: _vehicleIdentifier


+(BOOL)supportsSecureCoding;
+(id)_vehicleSimConfigurationWithOptions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initVehicleSimConfiguration:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithVehicleIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif