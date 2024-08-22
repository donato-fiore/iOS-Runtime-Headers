// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKASAUTHORIZATIONPROVIDER_H
#define AKASAUTHORIZATIONPROVIDER_H

@class AKCredentialRequestContext, NSString;
@protocol AKAuthorizationPasswordAuthenticationDelegate, AKAlertHandlerUIProvider, _ASAuthenticationProvider, OS_dispatch_queue, _ASAuthenticationProviderLoginRowData, _ASAuthenticationPresentationProvider;

#import <Foundation/Foundation.h>


@interface AKASAuthorizationProvider : NSObject <AKAuthorizationPasswordAuthenticationDelegate, AKAlertHandlerUIProvider, _ASAuthenticationProvider>

 {
    AKCredentialRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id *_completionHandlerForCurrentRequest;
    NSString *_appName;
    BOOL _didFailWithErrorRequiringPasswordAuth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<_ASAuthenticationProviderLoginRowData> *loginRowData;
@property (weak) NSObject<_ASAuthenticationPresentationProvider> *presentationProvider; // ivar: _presentationProvider
@property (readonly) Class superclass;


-(BOOL)_shouldContinueWithPasswordForError:(id)arg0 ;
// -(BOOL)alertHandlerShowAlert:(id)arg0 primaryAction:(id)arg1 altAction:(unk)arg2  ;
-(id)initWithAppName:(id)arg0 teamIdentifier:(id)arg1 bundleIdentifier:(id)arg2 authorizationRequest:(id)arg3 ;
-(void)_handleAuthorizationError:(id)arg0 ;
-(void)_performAuthorizationWithCompletionHandler:(id)arg0 ;
-(void)_showPasswordAuthenticationViewController;
-(void)passwordAuthenticationCompletedWithResults:(id)arg0 error:(id)arg1 ;
-(void)performAuthorizationWithCompletionHandler:(id)arg0 ;


@end


#endif