// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONCONTROLLER_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONCONTROLLER_H

@class NSArray, PKPaymentSetupFieldsModel, UIViewController, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentDocumentSubmissionController.h"

@interface PKPeerPaymentIdentityVerificationController : NSObject {
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSArray *_viewControllers;
    NSUInteger _viewControllerIndex;
}


@property (readonly, nonatomic) PKPeerPaymentDocumentSubmissionController *captureController; // ivar: _captureController
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // ivar: _fieldsModel
@property (readonly, nonatomic) UIViewController *firstViewController; // ivar: _firstViewController
@property (readonly, nonatomic) PKPeerPaymentIdentityVerificationResponse *response; // ivar: _response
@property (readonly, nonatomic) PKPeerPaymentWebService *webService; // ivar: _webService


-(BOOL)_hasRequiredFields;
-(id)_accountLockedErrorViewController;
-(id)_accountRestrictedErrorViewController;
-(id)_generateFieldsModel;
-(id)_nextLocalViewController;
-(id)_verificationErrorViewControllerWithError:(id)arg0 ;
-(id)init;
-(id)initWithPeerPaymentWebService:(id)arg0 identityVerificationResponse:(id)arg1 setupDelegate:(id)arg2 hideInitialSplashScreen:(BOOL)arg3 context:(NSInteger)arg4 ;
-(void)_formViewControllersWithExplanationView:(BOOL)arg0 ;
-(void)_identityVerificationResquestWithCompletion:(id)arg0 ;
-(void)_resetViewControllers;
-(void)nextViewControllerWithCompletion:(id)arg0 ;


@end


#endif