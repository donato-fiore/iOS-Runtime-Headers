// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFIDOAUTHORIZATIONCONTROLLER_H
#define AKFIDOAUTHORIZATIONCONTROLLER_H

@class ASAuthorizationController, NSString;
@protocol ASAuthorizationControllerDelegate, AKFidoUIProvider;

#import <Foundation/Foundation.h>

#import "AKFidoContext.h"

@interface AKFidoAuthorizationController : NSObject <ASAuthorizationControllerDelegate>



@property (retain, nonatomic) ASAuthorizationController *_authController; // ivar: __authController
@property (copy, nonatomic) id *authCompletion; // ivar: _authCompletion
@property (retain, nonatomic) AKFidoContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *registrationCompletion; // ivar: _registrationCompletion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AKFidoUIProvider> *uiProvider; // ivar: _uiProvider


+(BOOL)isFidoUserCancelError:(id)arg0 ;
-(id)_authRequestFromContext:(id)arg0 ;
-(id)_requestFromContext:(id)arg0 ;
-(void)_populateCustomStringsFromContext:(id)arg0 ;
-(void)_startAuthControllerWithRequest:(id)arg0 context:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithAuthorization:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)performAuthenticationRequestWithContext:(id)arg0 completion:(id)arg1 ;
-(void)performRegistrationRequestWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif