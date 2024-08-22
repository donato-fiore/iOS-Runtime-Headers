// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLAN_H
#define PKPAYLATERFINANCINGPLAN_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterPaymentSource.h"
#import "PKPayLaterFinancingPlanFundingSource.h"
#import "PKPayLaterMerchant.h"
#import "PKPayLaterFinancingPlanSummary.h"
#import "PKPayLaterFinancingPlanScheduleSummary.h"
#import "PKPayLaterFinancingPlanTermsDetails.h"

@interface PKPayLaterFinancingPlan : NSObject <NSSecureCoding, NSCopying>

 {
    PKPayLaterPaymentSource *_paymentSource;
    NSString *_fundingSourceName;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSArray *disputes; // ivar: _disputes
@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource; // ivar: _fundingSource
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (retain, nonatomic) PKPayLaterMerchant *merchant; // ivar: _merchant
@property (nonatomic) NSUInteger planChannel; // ivar: _planChannel
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier
@property (retain, nonatomic) PKPayLaterFinancingPlanSummary *planSummary; // ivar: _planSummary
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (retain, nonatomic) PKPayLaterFinancingPlanScheduleSummary *scheduleSummary; // ivar: _scheduleSummary
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger stateReason; // ivar: _stateReason
@property (retain, nonatomic) PKPayLaterFinancingPlanTermsDetails *termsDetails; // ivar: _termsDetails
@property (readonly, nonatomic) NSUInteger updateReasons; // ivar: _updateReasons


+(BOOL)canMakePaymentsWithAccountState:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)aprStringForNumber:(id)arg0 ;
-(BOOL)installmentWasPaidEarly:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterFinancingPlan:(id)arg0 ;
-(BOOL)updateReasonIsInitialDownload;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayableLoanIdentiifer;
-(id)disputeWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)nextDueInstallmentAfterInstallmentIdentifier:(id)arg0 ;
-(id)paymentSource;
-(id)refundPaymentsNotAssociatedWithDispute;
-(void)_loadPaymentSource;
-(void)addUpdateReasons:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif