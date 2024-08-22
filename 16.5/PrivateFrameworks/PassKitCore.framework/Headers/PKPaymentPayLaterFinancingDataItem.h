// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPAYLATERFINANCINGDATAITEM_H
#define PKPAYMENTPAYLATERFINANCINGDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKPayLaterProductAssessmentCollection.h"
#import "PKPayLaterFinancingOption.h"

@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (readonly, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 errorStatus:(*NSInteger)arg1 ;
-(BOOL)requiresBillingAddress;
-(NSInteger)context;
-(id)billingAddress;
-(id)errors;
-(id)paymentContactFormatErrors;


@end


#endif