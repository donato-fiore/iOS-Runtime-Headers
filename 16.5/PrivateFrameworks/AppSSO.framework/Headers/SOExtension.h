// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOEXTENSION_H
#define SOEXTENSION_H

@class NSUUID, NSMapTable, NSArray, NSString, NSExtension;
@protocol SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SORemoteExtensionViewController.h"

@interface SOExtension : NSObject <SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol>

 {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
    NSMapTable *_extensionDelegates;
}


@property (retain, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSInteger extensionRequestsMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly, nonatomic) int requestCount; // ivar: _requestCount
@property (readonly) Class superclass;


-(BOOL)hasAssociatedDomainsApproved;
-(BOOL)hasURLApprovedAssociatedDomain:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExtension:(id)arg0 ;
-(id)_contextForSession;
-(id)findDelegateForIdentifier:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(struct ? )auditTokenForSession;
-(void)_beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)_connectContextToSessionWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_finishAuthorization:(id)arg0 withCompletion:(id)arg1 ;
-(void)_finishedSettingUpSession:(id)arg0 ;
-(void)_setupExtension;
-(void)_setupNonUISessionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_setupNonUISessionWithCompletion:(id)arg0 ;
-(void)_setupSessionHelperForIOSWithCompletion:(id)arg0 ;
-(void)_setupSessionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_setupSessionWithCompletion:(id)arg0 ;
-(void)authorization:(id)arg0 didCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)beginDeviceRegistrationUsingOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)beginUserRegistrationUsingUserName:(id)arg0 authenticationMethod:(int)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)canPerformRegistrationCompletion:(id)arg0 ;
-(void)cancelAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)checkAssociatedDomains;
-(void)decrementRequestCount;
-(void)finishAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)incrementRequestCount;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 requestIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)registrationDidCompleteWithCompletion:(id)arg0 ;
-(void)removeDelegateForRequestIdentifier:(id)arg0 ;
-(void)requestAuthorizationViewControllerWithCompletion:(id)arg0 ;
-(void)requestReauthenticationWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)saveDelegate:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)setupNonUISessionWithCompletion:(id)arg0 ;
-(void)unload;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif