// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANGENERATORPAYMENTCONFIGURATION_H
#define PKPAYLATERFINANCINGPLANGENERATORPAYMENTCONFIGURATION_H

@class NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanGeneratorPaymentConfiguration : NSObject

@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSInteger daysPriorToRelativeInstallmentNumber; // ivar: _daysPriorToRelativeInstallmentNumber
@property (nonatomic) BOOL forDispute; // ivar: _forDispute
@property (nonatomic) NSUInteger fundingSource; // ivar: _fundingSource
@property (nonatomic) NSInteger installmentAmountMultiple; // ivar: _installmentAmountMultiple
@property (nonatomic) BOOL payOffRestOfLoanBalance; // ivar: _payOffRestOfLoanBalance
@property (nonatomic) NSUInteger paymentType; // ivar: _paymentType
@property (nonatomic) NSInteger relativeToInstallmentNumber; // ivar: _relativeToInstallmentNumber


+(id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(NSInteger)arg0 ;
+(id)paymentConfigurationForDeclinedPaymentForInstallmentNumber:(NSInteger)arg0 daysPriorToRelativeInstallmentNumber:(NSInteger)arg1 ;
+(id)paymentConfigurationForDefaultInstallmentNumber:(NSInteger)arg0 ;
+(id)paymentConfigurationForDefaultInstallmentNumber:(NSInteger)arg0 daysPriorToRelativeInstallmentNumber:(NSInteger)arg1 ;
+(id)paymentConfigurationForDefaultInstallmentNumber:(NSInteger)arg0 daysPriorToRelativeInstallmentNumber:(NSInteger)arg1 installmentAmountMultiple:(NSInteger)arg2 ;
+(id)paymentConfigurationForRemainingFinancingPlanBalancRelativeToInstallmentNumber:(NSInteger)arg0 daysPriorToRelativeInstallmentNumber:(NSInteger)arg1 ;
+(id)paymentConfigurationWithAmount:(id)arg0 relativeToInstallmentNumber:(NSInteger)arg1 daysPriorToRelativeInstallmentNumber:(NSInteger)arg2 ;
+(id)paymentConfigurationWithPaymentType:(NSUInteger)arg0 amount:(id)arg1 relativeToInstallmentNumber:(NSInteger)arg2 daysPriorToRelativeInstallmentNumber:(NSInteger)arg3 ;
+(id)paymentConfigurationWithPaymentType:(NSUInteger)arg0 amount:(id)arg1 relativeToInstallmentNumber:(NSInteger)arg2 daysPriorToRelativeInstallmentNumber:(NSInteger)arg3 fundingSource:(NSUInteger)arg4 ;
+(id)paymentConfigurationWithPaymentType:(NSUInteger)arg0 relativeToInstallmentNumber:(NSInteger)arg1 daysPriorToRelativeInstallmentNumber:(NSInteger)arg2 installmentAmountMultiple:(NSInteger)arg3 ;


@end


#endif