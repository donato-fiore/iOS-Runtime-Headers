// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOEXTENSION_H
#define SOEXTENSION_H

@class NSUUID, NSArray, NSString, NSExtension;
@protocol SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol, OS_dispatch_queue, SOExtensionDelegate;

#import <Foundation/Foundation.h>

#import "SORemoteExtensionViewController.h"

@interface SOExtension : NSObject <SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol>

 {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
}


@property (retain, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (weak, nonatomic) NSObject<SOExtensionDelegate> *extensionDelegate; // ivar: _extensionDelegate
@property (readonly, nonatomic) NSInteger extensionRequestsMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly) Class superclass;


-(BOOL)hasAssociatedDomainsApproved;
-(BOOL)hasURLApprovedAssociatedDomain:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExtension:(id)arg0 ;
-(id)_contextForSession;
-(id)initWithExtension:(id)arg0 ;
-(struct ? )auditTokenForSession;
-(void)_beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)_connectContextToSessionWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_finishAuthorizationWithCompletion:(id)arg0 ;
-(void)_finishedSettingUpSession:(id)arg0 ;
-(void)_setupExtension;
-(void)_setupNonUISessionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_setupNonUISessionWithCompletion:(id)arg0 ;
-(void)_setupSessionHelperForIOSWithCompletion:(id)arg0 ;
-(void)_setupSessionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_setupSessionWithCompletion:(id)arg0 ;
-(void)authorizationDidCompleteWithCredential:(id)arg0 error:(id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)beginDeviceRegistrationUsingOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)beginUserRegistrationUsingUserName:(id)arg0 authenticationMethod:(int)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)cancelAuthorizationWithCompletion:(id)arg0 ;
-(void)checkAssociatedDomains;
-(void)finishAuthorizationWithCompletion:(id)arg0 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 completion:(id)arg1 ;
-(void)registrationDidComplete;
-(void)requestAuthorizationViewControllerWithCompletion:(id)arg0 ;
-(void)requestReauthenticationWithCompletion:(id)arg0 ;
-(void)setupNonUISessionWithCompletion:(id)arg0 ;
-(void)unload;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif