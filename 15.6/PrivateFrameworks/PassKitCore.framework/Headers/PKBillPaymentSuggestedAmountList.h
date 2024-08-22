// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBILLPAYMENTSUGGESTEDAMOUNTLIST_H
#define PKBILLPAYMENTSUGGESTEDAMOUNTLIST_H

@class NSMutableDictionary, NSString, NSDecimalNumber, NSArray;

#import <Foundation/Foundation.h>

#import "PKBillPaymentSuggestedAmount.h"

@interface PKBillPaymentSuggestedAmountList : NSObject {
    NSMutableDictionary *_suggestionsForCategory;
    NSMutableDictionary *_suggestionsForAmount;
    NSMutableDictionary *_suggestedAmountGapMessageForAmount;
}


@property (readonly, copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) PKBillPaymentSuggestedAmount *initialSuggestedAmount; // ivar: _initialSuggestedAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *maximumAmount; // ivar: _maximumAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *minimumAmount; // ivar: _minimumAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *remainingStatementAmount; // ivar: _remainingStatementAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount; // ivar: _smalllestSuggestionAmountBelowRemainingStatementAmount
@property (readonly, copy, nonatomic) NSArray *sortedSuggestedAmounts; // ivar: _sortedSuggestedAmounts


+(NSUInteger)maximumNumberSuggestions;
+(id)boundaryAngle;
+(id)requiredSuggestedAmountCategories;
+(id)roundingHandler;
-(BOOL)_addSuggestedAmount:(id)arg0 force:(BOOL)arg1 ;
-(BOOL)_suggestedAmountIsRequiredCategory:(id)arg0 ;
-(BOOL)addSuggestedAmount:(id)arg0 ;
-(BOOL)canAddAmount:(id)arg0 ;
-(BOOL)canAddAmount:(id)arg0 andCategory:(NSUInteger)arg1 ;
-(BOOL)canAddCategory:(NSUInteger)arg0 ;
-(BOOL)isValidWithUnableReason:(*NSUInteger)arg0 ;
-(BOOL)suggestedAmount:(id)arg0 isAdjoiningSuggestedAmount:(id)arg1 ;
-(id)_boundaryAmount;
-(id)_lastSuggestedAmountThatIsNotRequred;
-(id)_sortedAmounts;
-(id)_suggestedAmountThatIsNotRequired:(id)arg0 suggestedAmount2:(id)arg1 ;
-(id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg0 accountIdentifier:(id)arg1 statementIdentifier:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithCurrencyCode:(id)arg0 remainingMinimumPayment:(id)arg1 remainingStatementBalance:(id)arg2 currentBalance:(id)arg3 ;
-(id)maximumSuggestedAmount;
-(id)maximumSuggestedAmountFromCategories:(id)arg0 ;
-(id)minimumSuggestedAmount;
-(id)minimumSuggestedAmountFromCategories:(id)arg0 ;
-(id)suggestedAmountAfterSuggestedAmount:(id)arg0 ;
-(id)suggestedAmountBeforeSuggestedAmount:(id)arg0 ;
-(id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg0 ;
-(id)suggestedAmountWithCategory:(NSUInteger)arg0 ;
-(void)_createMandatorySuggestions;
-(void)_removeSuggestedAmount:(id)arg0 ;
-(void)_updateValues;
-(void)addSuggestedAmountGapMessage:(id)arg0 forStartSuggestedAmount:(id)arg1 ;
-(void)addSuggestedAmountList:(id)arg0 ;
-(void)attemptToPurgeInvalidSuggestedAmounts;


@end


#endif