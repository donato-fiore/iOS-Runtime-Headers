// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBILLPAYMENTSUGGESTEDAMOUNTCONTROLLER_H
#define PKBILLPAYMENTSUGGESTEDAMOUNTCONTROLLER_H

@class NSDateFormatter, NSDecimalNumber, NSMutableDictionary, NSMutableArray, _DPStringRecorder, NSArray, PKAccountServiceAccountResolutionCofiguration;

#import <Foundation/Foundation.h>

#import "PKAccount.h"
#import "PKAccountUserCollection.h"
#import "PKTransactionSource.h"

@interface PKBillPaymentSuggestedAmountController : NSObject {
    NSDateFormatter *_monthAndDayFormatter;
    NSDateFormatter *_monthFormatter;
    NSDecimalNumber *_currentStatementPaymentsSum;
    NSDecimalNumber *_previousStatementPaymentsSum;
    NSDecimalNumber *_statementPurchasesSum;
    NSMutableDictionary *_merchantCategoryTransactionSums;
    BOOL _isOnPlanCompletion;
    BOOL _isOnPaymentPlan;
    BOOL _currentStatementIsLastMonthsStatement;
    BOOL _isMonthZero;
    BOOL _isMonthOne;
    NSInteger _numberOfActiveInstallments;
    NSInteger _numberOfActiveStatementedInstallments;
    NSMutableArray *_differentialPrivacyFeatures;
    _DPStringRecorder *_differentialPrivacyRecorder;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentForPreviousStatement; // ivar: _approvedTransactionsBillPaymentForPreviousStatement
@property (readonly, nonatomic) NSArray *approvedTransactionsBillPaymentSinceStatement; // ivar: _approvedTransactionsBillPaymentSinceStatement
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesForPreviousStatement; // ivar: _approvedTransactionsPurchasesForPreviousStatement
@property (readonly, nonatomic) NSArray *approvedTransactionsPurchasesSinceStatement; // ivar: _approvedTransactionsPurchasesSinceStatement
@property (retain, nonatomic) PKAccountServiceAccountResolutionCofiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSArray *currentStatementSelectedSuggestedAmountEvents; // ivar: _currentStatementSelectedSuggestedAmountEvents
@property (readonly, nonatomic) NSArray *previousStatementSelectedSuggestedAmountEvents; // ivar: _previousStatementSelectedSuggestedAmountEvents
@property (readonly, nonatomic) PKTransactionSource *transactionSource; // ivar: _transactionSource


+(void)_approvedTransactionsForPreviousStatementForAccount:(id)arg0 transactionSource:(id)arg1 transactionType:(NSInteger)arg2 completion:(id)arg3 ;
+(void)_approvedTransactionsSinceStatementForAccount:(id)arg0 transactionSource:(id)arg1 transactionType:(NSInteger)arg2 completion:(id)arg3 ;
+(void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg0 transactionSource:(id)arg1 completion:(id)arg2 ;
+(void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg0 transactionSource:(id)arg1 completion:(id)arg2 ;
+(void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg0 transactionSource:(id)arg1 completion:(id)arg2 ;
+(void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg0 transactionSource:(id)arg1 completion:(id)arg2 ;
+(void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg0 completion:(id)arg1 ;
+(void)defaultControllerForAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 completion:(id)arg4 ;
+(void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg0 completion:(id)arg1 ;
-(BOOL)_allMandatoryValuesAreSameAmount;
-(BOOL)_calculateCurrentStatementIsLastMonthsStatement;
-(BOOL)_categoryIsCurrentBalanceType:(NSUInteger)arg0 ;
-(BOOL)_categoryIsPaymentPlan:(NSUInteger)arg0 ;
-(BOOL)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg0 ;
-(id)_calculateThresholdForLastPaymentCategory:(NSUInteger)arg0 statementBalance:(id)arg1 suggestedAmountWithSameCategory:(id)arg2 ;
-(id)_createDefaultAmountSuggestionListFromAccount;
-(id)_filterSuggestions:(id)arg0 belowThreshold:(id)arg1 ;
-(id)_messageForSuggestion:(id)arg0 ;
-(id)_planCompletionTitleString;
-(id)_remainingStatementBalanceGapDescriptionText;
-(id)_remainingStatementBalanceGapTitleText;
-(id)_remainingStatementBalanceMessageString;
-(id)_remainingStatementBalanceTitleString;
-(id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg0 creditUtilization:(id)arg1 lastPaymentCategory:(NSUInteger)arg2 ;
-(id)_titleForSuggestion:(id)arg0 ;
-(id)differentialPrivacyFeaturesAsString;
-(id)generateAmountSuggestionListWithFinHealth:(BOOL)arg0 ;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSource:(id)arg2 currentStatementSelectedSuggestedAmountEvents:(id)arg3 previousStatementSelectedSuggestedAmountEvents:(id)arg4 approvedTransactionsPurchasesSinceStatement:(id)arg5 approvedTransactionsPurchasesForPreviousStatement:(id)arg6 approvedTransactionsBillPaymentSinceStatement:(id)arg7 approvedTransactionsBillPaymentForPreviousStatement:(id)arg8 configuration:(id)arg9 ;
-(void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg0 ;
-(void)_initializeDifferentialPrivacy:(id)arg0 accountSummary:(id)arg1 ;
-(void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg0 minMerchantCategory1:(*NSInteger)arg1 minMerchantCategory2:(*NSInteger)arg2 minMerchantCategorySum1:(*id)arg3 minMerchantCategorySum2:(*id)arg4 ;
-(void)_populatePriorityValuesForList:(id)arg0 ;
-(void)_populateStringValuesForList:(id)arg0 ;
-(void)_setDifferentialPrivacyFeature:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg0 ;
-(void)recordPaymentActionWithDifferentialPrivacy:(NSUInteger)arg0 ;


@end


#endif