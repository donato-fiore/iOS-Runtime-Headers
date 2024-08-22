// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANGENERATOR_H
#define PKPAYLATERFINANCINGPLANGENERATOR_H


#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanGenerator : NSObject



+(NSInteger)maximumInstallmentCountForProductType:(NSUInteger)arg0 ;
+(NSInteger)minimumInstallmentCountForProductType:(NSUInteger)arg0 ;
+(id)_appleCashPaymentSource;
+(id)_appleCashPlanSource;
+(id)_bankOfAmerciaDebitPaymentSource;
+(id)_bankOfAmerciaDebitPlanSource;
+(id)_bankOfTheWestACHPaymentSource;
+(id)_bankOfTheWestACHPlanSource;
+(id)_bestBuyMerchant;
+(id)_boilerPlateAccount;
+(id)_chaseDebitPaymentSource;
+(id)_chaseDebitPlanSource;
+(id)_createInstallmentsWithDueDates:(id)arg0 installmentAmountWithInterest:(id)arg1 currency:(id)arg2 planIdentifier:(id)arg3 ;
+(id)_currentBalanceForPlanWithTotalAmount:(id)arg0 installments:(id)arg1 ;
+(id)_disputesForPayments:(id)arg0 paymentIdentifiersForDispute:(id)arg1 planIdentifier:(id)arg2 ;
+(id)_installmentAmountWithInterestForAPR:(id)arg0 totalPrincipal:(id)arg1 installmentCount:(NSInteger)arg2 ;
+(id)_installmentDueDatesForInstallmentCount:(NSInteger)arg0 productType:(NSUInteger)arg1 transactionDate:(id)arg2 ;
+(id)_installmentsWithPayments:(id)arg0 planIdentifier:(id)arg1 productType:(NSUInteger)arg2 installmentDueDates:(id)arg3 installmentAmountWithInterest:(id)arg4 currency:(id)arg5 disputes:(id)arg6 ;
+(id)_interestPaidToDateForInstallments:(id)arg0 installmentInterest:(id)arg1 ;
+(id)_macysMerchant;
+(id)_maximumNumber:(id)arg0 number2:(id)arg1 ;
+(id)_minimumNumber:(id)arg0 number2:(id)arg1 ;
+(id)_nextDateWithProductType:(NSUInteger)arg0 referenceDate:(id)arg1 ;
+(id)_nextDueAmountForFinancingPlans:(id)arg0 ;
+(id)_nikeMerchant;
+(id)_paymentFundingSourceFromPlanFundingSource:(id)arg0 ;
+(id)_paymentsForConfigs:(id)arg0 installmentDueDates:(id)arg1 planIdentifier:(id)arg2 transactionDate:(id)arg3 installmentAmountWithInterest:(id)arg4 installmentAmountWithoutInterest:(id)arg5 installmentInterest:(id)arg6 totalAmountWithInterest:(id)arg7 totalAmountWithoutInterest:(id)arg8 totalInterest:(id)arg9 currency:(id)arg10 ignoreFutureDates:(BOOL)arg11 paymentIdentifiersForDispute:(*id)arg12 ;
+(id)_principalPaidToDateForInstallments:(id)arg0 installmentAmountWithoutInterest:(id)arg1 ;
+(id)_saksMerchant;
+(id)_termsDetailsForPlanIdentifier:(id)arg0 ;
+(id)_testMerchant;
+(id)_wellsFargoACHPaymentSource;
+(id)_wellsFargoACHPlanSource;
+(id)financingPlanWithConfiguration:(id)arg0 ;
+(id)generatePayLaterAccountForFinancingPlans:(id)arg0 ;
+(id)maximumAPRForProductType:(NSUInteger)arg0 ;
+(id)maximumPrincipalAmountForProductType:(NSUInteger)arg0 ;
+(id)minimumAPRForProductType:(NSUInteger)arg0 ;
+(id)minimumPrincipalAmountForProductType:(NSUInteger)arg0 ;
+(id)payLaterFinancingPlanFundingSourceForType:(NSUInteger)arg0 ;
+(id)payLaterMerchantForType:(NSUInteger)arg0 ;
+(id)payLaterPaymentFundingSourceForType:(NSUInteger)arg0 ;
+(void)_calculateCurrentBalanceForFinancingPlans:(id)arg0 currentBalance:(*id)arg1 bnplCurrentBalance:(*id)arg2 loanCurrentBalance:(*id)arg3 amountPaid:(*id)arg4 bnplAmountPaid:(*id)arg5 loanAmountPaid:(*id)arg6 totalFinanced:(*id)arg7 bnplTotalFinanced:(*id)arg8 loanTotalFinanced:(*id)arg9 ;
+(void)_processCreditRevokedWithPayment:(id)arg0 installments:(id)arg1 payments:(id)arg2 disputes:(id)arg3 currency:(id)arg4 ;
+(void)deleteMockAccountWithCompletion:(id)arg0 ;
+(void)insertAndUpdateAccountWithAdditionalFinancingPlans:(id)arg0 completion:(id)arg1 ;
+(void)insertAndUpdateAccountWithNewPlanType:(NSUInteger)arg0 installmentCount:(NSInteger)arg1 principalAmount:(id)arg2 apr:(id)arg3 daysSinceTransactionStart:(NSInteger)arg4 merchant:(NSUInteger)arg5 completion:(id)arg6 ;


@end


#endif