// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERACCESSCONTROL_H
#define HMDREMOTEEVENTROUTERACCESSCONTROL_H


#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterAccessControl : NSObject

@property (readonly) NSUInteger allowedDeviceTypes; // ivar: _allowedDeviceTypes
@property (readonly) NSUInteger allowedUserTypes; // ivar: _allowedUserTypes


+(id)allowAllUsersAndDevicesAccessControl;
-(id)initWithAllowedUserTypes:(NSUInteger)arg0 deviceCategories:(NSUInteger)arg1 ;


@end


#endif