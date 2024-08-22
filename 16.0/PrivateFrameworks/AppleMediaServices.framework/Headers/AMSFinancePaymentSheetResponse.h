// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFINANCEPAYMENTSHEETRESPONSE_H
#define AMSFINANCEPAYMENTSHEETRESPONSE_H

@class NSString, NSDictionary;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSFinanceAuthenticateResponse.h"
#import "AMSPaymentSheetRequest.h"

@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable>



@property (readonly, nonatomic) AMSFinanceAuthenticateResponse *authenticateResponse; // ivar: _authenticateResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *metricsDictionary; // ivar: _metricsDictionary
@property (readonly, nonatomic) AMSPaymentSheetRequest *paymentSheetRequest; // ivar: _paymentSheetRequest
@property (readonly) Class superclass;


+(NSInteger)_confirmationTitleForString:(id)arg0 ;
+(NSInteger)_payeeForRequestorValue:(id)arg0 ;
+(NSInteger)_payeeInferredFromEnumeratedTitle:(id)arg0 ;
+(NSInteger)_salableIconForString:(id)arg0 ;
+(id)_attributedListDictionaryForValues:(id)arg0 account:(id)arg1 ;
+(id)_attributedStringForAttributedArray:(id)arg0 account:(id)arg1 ;
+(id)_attributedStringForAttributedDictionary:(id)arg0 account:(id)arg1 ;
+(id)_attributedStringForSalableInfoStringArray:(id)arg0 account:(id)arg1 shouldUppercase:(BOOL)arg2 ;
+(id)_attributedStringForStringArray:(id)arg0 useGrey:(BOOL)arg1 account:(id)arg2 shouldUppercase:(BOOL)arg3 ;
+(id)_attributedStringWithString:(id)arg0 styles:(id)arg1 ;
+(id)_createMerchantSessionFromDictionary:(id)arg0 ;
+(id)_createRequestFromDictionary:(id)arg0 confirmationOnly:(BOOL)arg1 delegateAuthenticationRequired:(BOOL)arg2 biometricSignatureRequired:(BOOL)arg3 authenticateResponse:(id)arg4 taskInfo:(id)arg5 ;
+(id)_flexListDictionaryForValues:(id)arg0 styles:(id)arg1 account:(id)arg2 shouldUppercaseText:(BOOL)arg3 ;
+(id)_greyAttributedStringForAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)_styleDictionaryWithName:(id)arg0 styles:(id)arg1 ;
-(id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 confirmationOnly:(BOOL)arg1 delegateAuthenticationRequired:(BOOL)arg2 biometricSignatureRequired:(BOOL)arg3 taskInfo:(id)arg4 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif