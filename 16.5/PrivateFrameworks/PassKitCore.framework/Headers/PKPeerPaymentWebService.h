// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTWEBSERVICE_H
#define PKPEERPAYMENTWEBSERVICE_H

@class NSMutableDictionary, NSString, NSURL;
@protocol NSURLSessionTaskDelegate, OS_dispatch_queue, PKPeerPaymentWebServiceArchiver, PKPeerPaymentWebServiceTargetDeviceProtocol;


#import "PKWebService.h"
#import "PKSecureElement.h"
#import "PKPaymentDevice.h"
#import "PKPeerPaymentWebServiceContext.h"
#import "PKPeerPaymentService.h"

@interface PKPeerPaymentWebService : PKWebService <NSURLSessionTaskDelegate>

 {
    PKSecureElement *_secureElement;
    NSMutableDictionary *_prewarmedDeviceScorers;
    NSObject<OS_dispatch_queue> *_prewarmedDeviceScorersQueue;
    PKPaymentDevice *_paymentDevice;
}


@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSObject<PKPeerPaymentWebServiceArchiver> *archiver; // ivar: _archiver
@property (retain, nonatomic) PKPeerPaymentWebServiceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsRegistration;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (nonatomic, getter=isSharedService) BOOL sharedService; // ivar: _sharedService
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PKPeerPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice


+(id)sharedService;
-(BOOL)_isValidResponse:(id)arg0 error:(id)arg1 ;
-(BOOL)canBypassTrustValidation;
-(NSInteger)logFacilityType;
-(NSUInteger)disbursementVoucherWithRequest:(id)arg0 certificates:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)peerPaymentAcceptTermsWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentAccountWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentAddAssociatedAccountWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentAssociatedAccountActionWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentAssociatedAccountsWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentBankLookupWithCountryCode:(id)arg0 query:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)peerPaymentDocumentSubmissionRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentEmailTermsWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentIdentityVerificationRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentPassDetailsWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentPendingRequestPerformAction:(id)arg0 withRequestToken:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)peerPaymentPendingRequestsWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentPerformAction:(id)arg0 withPaymentIdentifier:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)peerPaymentPerformQuoteWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentPreferencesWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentQuoteCertificatesForDestination:(NSUInteger)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentQuoteWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentReOpenAccountWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentRecipientForRecipientAddress:(id)arg0 senderAddress:(id)arg1 source:(NSUInteger)arg2 completion:(id)arg3 ;
-(NSUInteger)peerPaymentRegisterWithURL:(id)arg0 pushToken:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)peerPaymentRemoveAssociatedAccountWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentRequestStatementForAccountIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(NSUInteger)peerPaymentRequestTokenWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentStatusWithPaymentIdentifier:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)peerPaymentUnregisterWithCompletion:(id)arg0 ;
-(NSUInteger)peerPaymentUpdatePreferencesWithRequest:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)submitDeviceScoreIdentifiersWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)_appleAccountInformation;
-(id)_createDeviceScorerForEndpoint:(id)arg0 recipientAddress:(id)arg1 quoteDestinationType:(NSUInteger)arg2 ;
-(id)_deviceIdentifier;
-(id)badRequestErrorWithResponse:(id)arg0 ;
-(id)forbiddenErrorWithResponse:(id)arg0 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 archiver:(id)arg2 tapToRadarDelegate:(id)arg3 ;
-(id)initWithContext:(id)arg0 targetDevice:(id)arg1 tapToRadarDelegate:(id)arg2 ;
-(id)initWithTapToRadarDelegate:(id)arg0 ;
-(void)_archiveContext;
-(void)_deviceRegistrationDataWithCompletion:(id)arg0 ;
-(void)_deviceScoreForEndpoint:(id)arg0 recipientAddress:(id)arg1 quoteDestinationType:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)_deviceScoreForEndpoint:(id)arg0 recipientAddress:(id)arg1 withCompletion:(id)arg2 ;
-(void)_deviceScoreForEndpoint:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_peerPaymentDeviceMetadataWithCompletion:(id)arg0 ;
-(void)_provideDeviceScoreFeedbackIfNeededWithIngested:(BOOL)arg0 ;
-(void)_renewAppleAccountWithCompletionHandler:(id)arg0 ;
-(void)_updateRequestWithCurrentTargetDevice:(id)arg0 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(id)arg0 ;
-(void)handleResponse:(id)arg0 withError:(id)arg1 data:(id)arg2 task:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg0 originalRequest:(id)arg1 redirectHandler:(id)arg2 ;
-(void)performRequest:(id)arg0 taskIdentifier:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)prewarmDeviceScoreForEndpoint:(id)arg0 ;
-(void)prewarmDeviceScoreForEndpoint:(id)arg0 recipientAddress:(id)arg1 ;
-(void)prewarmDeviceScoreForEndpoint:(id)arg0 recipientAddress:(id)arg1 quoteDestinationType:(NSUInteger)arg2 ;
-(void)sharedPeerPaymentServiceChanged:(id)arg0 ;
-(void)updateDeviceScorersWithEncryptedPayloadVersion:(NSUInteger)arg0 ;


@end


#endif