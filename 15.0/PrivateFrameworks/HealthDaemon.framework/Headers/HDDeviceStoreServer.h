// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEVICESTORESERVER_H
#define HDDEVICESTORESERVER_H

@class NSString;
@protocol HKDeviceStoreServer;


#import "HDStandardTaskServer.h"

@interface HDDeviceStoreServer : HDStandardTaskServer <HKDeviceStoreServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchAllDevicesWithCompletion:(id)arg0 ;
-(void)remote_fetchDevicesMatchingValues:(id)arg0 forProperty:(id)arg1 completion:(id)arg2 ;


@end


#endif