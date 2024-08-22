// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAUTHORIZATIONSTOREWRITESERVER_H
#define HDAUTHORIZATIONSTOREWRITESERVER_H

@class NSString;
@protocol HKAuthorizationStoreWriteServer;


#import "HDStandardTaskServer.h"

@interface HDAuthorizationStoreWriteServer : HDStandardTaskServer <HKAuthorizationStoreWriteServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_setAuthorizationStatuses:(id)arg0 authorizationModes:(id)arg1 forBundleIdentifier:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)remote_setObjectAuthorizationStatuses:(id)arg0 forBundleIdentifier:(id)arg1 sessionIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg0 shareTypes:(id)arg1 readTypes:(id)arg2 completion:(id)arg3 ;


@end


#endif