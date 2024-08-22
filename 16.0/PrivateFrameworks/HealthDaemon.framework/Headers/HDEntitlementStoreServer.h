// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDENTITLEMENTSTORESERVER_H
#define HDENTITLEMENTSTORESERVER_H

@class NSString;
@protocol HKEntitlementStoreServer;


#import "HDStandardTaskServer.h"

@interface HDEntitlementStoreServer : HDStandardTaskServer <HKEntitlementStoreServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchContainerAppExtensionEntitlementsWithCompletion:(id)arg0 ;


@end


#endif