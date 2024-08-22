// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREAUTHORIZOR_H
#define PKSHAREAUTHORIZOR_H

@class PKPaymentAuthorizationCoordinator, LAContext, NSString;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate;

#import <Foundation/Foundation.h>


@interface PKShareAuthorizor : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    LAContext *_context;
    id *_completion;
    id *_authorizeHandler;
    NSString *_presentationSceneIdentifier;
    BOOL _resultSuccess;
    BOOL _isAuthorizationHandlerRunning;
    BOOL _didFinish;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(void)_authorizeDeviceOwnerWithAuthHandler:(id)arg0 completion:(unk)arg1 context:(id)arg2 invalidateContext:(unk)arg3  ;
// +(void)authorizeDeviceOwnerWithAuthHandler:(id)arg0 completion:(unk)arg1  ;
// +(void)authorizeForRequest:(id)arg0 presentationSceneIdentifier:(id)arg1 authHandler:(id)arg2 completion:(unk)arg3  ;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
// -(void)_authorizeForRequest:(id)arg0 presentationSceneIdentifier:(id)arg1 authHandler:(id)arg2 completion:(unk)arg3  ;
-(void)_handleDidFinishIfNeeded;
-(void)_invalidate;
-(void)dealloc;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeContextWithHandler:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;


@end


#endif