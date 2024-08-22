// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHARINGAUTHORIZATIONRECIPIENTSTORESERVER_H
#define HDSHARINGAUTHORIZATIONRECIPIENTSTORESERVER_H

@class HKSharingAuthorizationRecipientStoreTaskConfiguration, NSString;
@protocol HKSharingAuthorizationRecipientStoreServerInterface, HDSharingAuthorizationManagerObserver;


#import "HDStandardTaskServer.h"

@interface HDSharingAuthorizationRecipientStoreServer : HDStandardTaskServer <HKSharingAuthorizationRecipientStoreServerInterface, HDSharingAuthorizationManagerObserver>

 {
    HKSharingAuthorizationRecipientStoreTaskConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_fetchRecipientIdentifiersWithCompletion:(id)arg0 ;
-(void)remote_registerObservers;
-(void)remote_unregisterObservers;
-(void)sharingAuthorizationManager:(id)arg0 didAddSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 ;
-(void)sharingAuthorizationManager:(id)arg0 didRemoveSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 ;
-(void)sharingAuthorizationManager:(id)arg0 didRevokeRecipientWithIdentifier:(id)arg1 ;


@end


#endif