// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONCONTROLLER_H
#define AKAUTHORIZATIONCONTROLLER_H

@protocol AKAuthorizationUIProvider;

#import <Foundation/Foundation.h>

#import "AKAuthorizationClientImpl.h"
#import "AKAuthorizationDaemonConnection.h"

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}


@property (retain) NSObject<AKAuthorizationUIProvider> *uiProvider;


+(BOOL)canPerformAuthorization;
+(BOOL)isURLFromAppleOwnedDomain:(id)arg0 ;
+(BOOL)shouldProcessURL:(id)arg0 ;
+(id)appleOwnedDomains;
+(id)sharedController;
-(BOOL)_shouldOverrideProxiedBundleIDForContext:(id)arg0 ;
-(id)_appleIDAuthorizationURLs;
-(id)_appleOwnedDomains;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(id)primaryApplicationInformationForWebServiceWithInfo:(id)arg0 error:(*id)arg1 ;
-(void)beginAuthorizationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)cancelAuthorizationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)continueAuthorizationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)continueFetchingIconForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)establishConnectionWithNotificationHandlerEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id)arg0 ;
-(void)getCredentialStateForClientID:(id)arg0 completion:(id)arg1 ;
-(void)getCredentialStateForRequest:(id)arg0 completion:(id)arg1 ;
-(void)getPresentationContextForRequestContext:(id)arg0 completion:(id)arg1 ;
-(void)performAuthorizationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)performAuthorizationWithContext:(id)arg0 withUserProvidedInformation:(id)arg1 completion:(id)arg2 ;
-(void)revokeAuthorizationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)storeAuthorization:(id)arg0 forProxiedRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif