// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSERDEVICEADDRESS_H
#define STUSERDEVICEADDRESS_H

@class NSManagedObject, NSString;


#import "STCoreDevice.h"
#import "STCoreUser.h"

@interface STUserDeviceAddress : NSManagedObject

@property (retain, nonatomic) STCoreDevice *device;
@property (retain, nonatomic) NSString *idsURI;
@property (retain, nonatomic) STCoreUser *user;


+(id)fetchOrCreateUserDeviceAddressWithUser:(id)arg0 device:(id)arg1 context:(id)arg2 error:(*id)arg3 ;


@end


#endif