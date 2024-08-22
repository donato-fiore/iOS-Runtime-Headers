// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHSTOREPROVIDERSERVER_H
#define HDHEALTHSTOREPROVIDERSERVER_H

@class NSString;
@protocol HDHealthStoreProviderServer;


#import "HDStandardTaskServer.h"

@interface HDHealthStoreProviderServer : HDStandardTaskServer <HDHealthStoreProviderServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchAvailableIdentifiersWithCompletion:(id)arg0 ;
-(void)remote_fetchForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg0 readTypes:(id)arg1 completion:(id)arg2 ;
-(void)remote_requestAuthorizationToNewIdentifierWithCompletion:(id)arg0 ;


@end


#endif