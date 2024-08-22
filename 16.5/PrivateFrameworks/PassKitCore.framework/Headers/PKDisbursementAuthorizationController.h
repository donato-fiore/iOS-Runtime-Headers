// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISBURSEMENTAUTHORIZATIONCONTROLLER_H
#define PKDISBURSEMENTAUTHORIZATIONCONTROLLER_H

@class NSString;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKDisbursementAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKDisbursementAuthorizationController.h"
#import "PKPaymentAuthorizationCoordinator.h"
#import "PKDisbursementRequest.h"

@interface PKDisbursementAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKDisbursementAuthorizationController *_retainSelf;
    PKPaymentAuthorizationCoordinator *_authController;
    PKDisbursementRequest *_disbursementRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKDisbursementAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsDisbursements;
-(id)initWithDisbursementRequest:(id)arg0 delegate:(id)arg1 ;
-(void)authorizeDisbursementWithCompletion:(id)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizeDisbursementVoucher:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;


@end


#endif