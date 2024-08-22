// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NIHOMEDEVICECONFIGURATION_H
#define NIHOMEDEVICECONFIGURATION_H

@class NSArray, NSData;


#import "NIConfiguration.h"

@interface NIHomeDeviceConfiguration : NIConfiguration

@property NSUInteger allowedDevices; // ivar: _allowedDevices
@property (getter=isAnchor) BOOL anchor; // ivar: _anchor
@property (copy) NSArray *monitoredRegions; // ivar: _monitoredRegions
@property (copy) NSData *sessionKey; // ivar: _sessionKey


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)init;
-(id)initWithAllowedDevices:(NSUInteger)arg0 sessionKey:(id)arg1 asAnchor:(BOOL)arg2 regions:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif