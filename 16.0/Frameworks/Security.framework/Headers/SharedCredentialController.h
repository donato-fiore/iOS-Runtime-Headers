// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCREDENTIALCONTROLLER_H
#define SHAREDCREDENTIALCONTROLLER_H

@class ASAuthorizationPasswordProvider, ASAuthorizationController, ASPasswordCredential, NSError, NSString;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SharedCredentialController : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

 {
    ASAuthorizationPasswordProvider *_provider;
    ASAuthorizationController *_controller;
    ASPasswordCredential *_passwordCredential;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSError *_error;
    int _result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)error;
-(id)passwordCredential;
-(id)presentationAnchorForAuthorizationController:(id)arg0 ;
-(int)result;
-(void)_requestCredential;
-(void)authorizationController:(id)arg0 didCompleteWithAuthorization:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)dealloc;


@end


#endif