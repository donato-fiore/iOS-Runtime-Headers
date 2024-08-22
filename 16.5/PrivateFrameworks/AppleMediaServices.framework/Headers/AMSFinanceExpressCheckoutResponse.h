// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFINANCEEXPRESSCHECKOUTRESPONSE_H
#define AMSFINANCEEXPRESSCHECKOUTRESPONSE_H

@class NSString;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate;


#import "AMSFinancePaymentSheetResponse.h"
#import "AMSBuyParams.h"
#import "AMSURLRequestProperties.h"
#import "AMSURLSession.h"

@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse <NSURLSessionDelegate, AMSURLProtocolDelegate>



@property (retain, nonatomic) AMSBuyParams *buyParams; // ivar: _buyParams
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger expressCheckoutMode; // ivar: _expressCheckoutMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSURLRequestProperties *parentProperties; // ivar: _parentProperties
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)_isExpressCheckoutEnabledForBag:(id)arg0 ;
+(BOOL)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)arg0 ;
+(BOOL)_isFlagEnabled;
+(BOOL)isEligibleForBag:(id)arg0 ;
+(BOOL)isExpressCheckoutPayload:(id)arg0 ;
+(BOOL)isExpressCheckoutShouldCheckForWalletBiometricsForBag:(id)arg0 ;
-(NSInteger)_expressCheckoutModeFromPayload:(id)arg0 ;
-(id)_buyParamFromPayload:(id)arg0 ;
-(id)_createPageEventForPaymentChoices:(id)arg0 ;
-(id)_fetchCardDataForMerchantIdentifier:(id)arg0 countryCode:(id)arg1 ;
-(id)_paymentChoicesBodyForCardData:(id)arg0 ;
-(id)_paymentChoicesForCardData:(id)arg0 ;
-(id)_paymentChoicesRequestForCardData:(id)arg0 ;
-(id)_presentEngagementForPaymentChoices:(id)arg0 ;
-(id)_recordUserChoiceForEngagementResult:(id)arg0 ;
-(id)_recordUserChoiceRequest;
-(id)initWithResponseDictionary:(id)arg0 taskInfo:(id)arg1 ;
-(id)performWithTaskInfo:(id)arg0 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)removeExpressCheckoutSession;


@end


#endif