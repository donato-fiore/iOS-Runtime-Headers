// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERACCESSCONTROL_H
#define HMDREMOTEEVENTROUTERACCESSCONTROL_H


#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterAccessControl : NSObject

@property (readonly) NSUInteger allowedDeviceTypes; // ivar: _allowedDeviceTypes
@property (readonly) NSUInteger allowedUserTypes; // ivar: _allowedUserTypes


+(NSUInteger)remoteDeviceAccessControlFromNumber:(id)arg0 ;
+(NSUInteger)remoteUserAccessControlFromNumber:(id)arg0 ;
+(id)allowAllUsersAndDevicesAccessControl;
+(id)allowSharedAdminsAndAllDevicesAccessControl;
-(id)initWithAllowedUserTypes:(NSUInteger)arg0 deviceCategories:(NSUInteger)arg1 ;


@end


#endif