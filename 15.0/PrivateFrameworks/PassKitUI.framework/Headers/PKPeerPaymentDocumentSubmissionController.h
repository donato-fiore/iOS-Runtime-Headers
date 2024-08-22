// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTDOCUMENTSUBMISSIONCONTROLLER_H
#define PKPEERPAYMENTDOCUMENTSUBMISSIONCONTROLLER_H

@class NSString, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService;
@protocol PKPeerPaymentAccountResolutionControllerDelegate;


#import "PKPaymentDocumentSubmissionController.h"
#import "PKPeerPaymentAccountResolutionController.h"

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController <PKPeerPaymentAccountResolutionControllerDelegate>



@property (retain, nonatomic) PKPeerPaymentAccountResolutionController *accountResolutionController; // ivar: _accountResolutionController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse; // ivar: _identityVerificationResponse
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPeerPaymentWebService *webService; // ivar: _webService


-(id)initWithPeerPaymentWebService:(id)arg0 identityVerificationResponse:(id)arg1 setupDelegate:(id)arg2 context:(NSInteger)arg3 ;
-(void)contactApplePressed;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)uploadID;


@end


#endif