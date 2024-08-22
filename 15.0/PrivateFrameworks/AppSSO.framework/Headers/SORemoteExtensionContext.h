// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOREMOTEEXTENSIONCONTEXT_H
#define SOREMOTEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString, ASAuthorizationProviderExtensionAuthorizationRequest;
@protocol SORemoteExtensionContextProtocol, SOExtensionContext, ASAuthorizationProviderExtensionAuthorizationRequestHandler;


#import "SOExtensionServiceConnection.h"
#import "SOExtensionViewService.h"

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext>

 {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> *_extensionAuthorizationRequestHandler;
    id *_finishAuthorizationCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *extensionAuthorizationRequest; // ivar: _extensionAuthorizationRequest
@property (readonly, nonatomic) NSObject<ASAuthorizationProviderExtensionAuthorizationRequestHandler> *extensionViewController;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) SOExtensionViewService *viewService; // ivar: _viewService


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)canOpenURL:(id)arg0 ;
-(id)authorizationRequestHandlerWithRequestParameters:(id)arg0 error:(*id)arg1 ;
-(id)extensionAuthorizationRequestHandlerWithError:(*id)arg0 ;
-(id)hostContextWithError:(*id)arg0 ;
-(id)synchronousHostContextWithError:(*id)arg0 ;
-(void)_disableAppSSOInCFNetwork;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)cancelAuthorizationWithCompletion:(id)arg0 ;
-(void)completeFinishAuthorizationWithError:(id)arg0 ;
-(void)finishAuthorizationWithCompletion:(id)arg0 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif