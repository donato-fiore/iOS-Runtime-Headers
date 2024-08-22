// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOREMOTEEXTENSIONCONTEXT_H
#define SOREMOTEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSMapTable, NSString;
@protocol SORemoteExtensionContextProtocol, SOExtensionContext, ASAuthorizationProviderExtensionAuthorizationRequestHandler><POExtensionRegistrationProtocol, ASAuthorizationProviderExtensionAuthorizationRequestHandler;


#import "SOExtensionServiceConnection.h"
#import "SOExtensionViewService.h"

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext>

 {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler><POExtensionRegistrationProtocol> *_extensionAuthorizationRequestHandler;
    id *_finishAuthorizationCompletion;
    NSMapTable *_requests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<ASAuthorizationProviderExtensionAuthorizationRequestHandler> *extensionViewController;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) SOExtensionViewService *viewService; // ivar: _viewService


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)canOpenURL:(id)arg0 ;
-(id)authorizationRequestHandlerWithRequestParameters:(id)arg0 error:(*id)arg1 ;
-(id)extensionAuthorizationRequestHandlerWithError:(*id)arg0 ;
-(id)findRequestForIdentifier:(id)arg0 ;
-(id)hostContextWithError:(*id)arg0 ;
-(id)synchronousHostContextWithError:(*id)arg0 ;
-(void)_disableAppSSOInCFNetwork;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)beginDeviceRegistrationUsingOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)beginUserRegistrationUsingUserName:(id)arg0 authenticationMethod:(int)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)canPerformRegistrationCompletion:(id)arg0 ;
-(void)cancelAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)completeFinishAuthorization:(id)arg0 error:(id)arg1 ;
-(void)finishAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)registrationDidCompleteWithCompletion:(id)arg0 ;
-(void)removeRequestForIdentifier:(id)arg0 ;
-(void)saveRequest:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif