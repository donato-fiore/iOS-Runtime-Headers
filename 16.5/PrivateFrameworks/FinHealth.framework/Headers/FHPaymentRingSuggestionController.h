// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHPAYMENTRINGSUGGESTIONCONTROLLER_H
#define FHPAYMENTRINGSUGGESTIONCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FHSearchSuggestionController.h"

@interface FHPaymentRingSuggestionController : NSObject {
    BOOL _isOnPlanCompletion;
    BOOL _isOnPaymentPlan;
    BOOL _currentStatementIsLastMonthsStatement;
    NSArray *_previousSelectedSuggestion;
    FHSearchSuggestionController *_searchController;
}




-(BOOL)_allMandatoryValuesAreSameAmount:(id)arg0 ;
-(BOOL)_categoryIsCurrentBalanceType:(NSUInteger)arg0 ;
-(BOOL)_categoryIsPaymentPlan:(NSUInteger)arg0 ;
-(BOOL)_fhEqualObjects:(id)arg0 obj2:(id)arg1 ;
-(id)_abs:(id)arg0 ;
-(id)_calculateThresholdForLastPaymentCategory:(NSUInteger)arg0 statementBalance:(id)arg1 lastPaymentCategoryAmount:(id)arg2 previousStatementPaymentsSum:(id)arg3 statementPurchasesSum:(id)arg4 ;
-(id)_filterSuggestions:(id)arg0 belowThreshold:(id)arg1 ;
-(id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg0 statementPurchasesSum:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(NSUInteger)arg3 ;
-(id)_zerothOrFirstMonthPaymentRingSuggestionsForList:(id)arg0 ;
-(id)generatePaymentRingSuggestion:(id)arg0 ;
-(id)generatePaymentRingSuggestionsFromConvertedObjects:(id)arg0 previousStatementPaymentsSum:(id)arg1 currentStatementPaymentsSum:(id)arg2 statementPurchasesSum:(id)arg3 merchantCategoryTransactionSums:(id)arg4 billPaymentSelectedSuggestedAmountData:(id)arg5 isMonthZero:(BOOL)arg6 isMonthOne:(BOOL)arg7 ;
-(void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg0 minMerchantCategory1:(*NSInteger)arg1 minMerchantCategory2:(*NSInteger)arg2 minMerchantCategorySum1:(*id)arg3 minMerchantCategorySum2:(*id)arg4 merchantCategoryTransactionSums:(id)arg5 ;


@end


#endif