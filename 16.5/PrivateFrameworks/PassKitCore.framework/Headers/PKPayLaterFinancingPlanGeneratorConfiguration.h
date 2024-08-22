// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANGENERATORCONFIGURATION_H
#define PKPAYLATERFINANCINGPLANGENERATORCONFIGURATION_H

@class NSDecimalNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanGeneratorConfiguration : NSObject

@property (copy, nonatomic) NSDecimalNumber *apr; // ivar: _apr
@property (nonatomic) BOOL autoPayment; // ivar: _autoPayment
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (nonatomic) NSInteger daysSinceTransactionStart; // ivar: _daysSinceTransactionStart
@property (nonatomic) NSUInteger fundingSource; // ivar: _fundingSource
@property (nonatomic) BOOL ignoreFuturePayments; // ivar: _ignoreFuturePayments
@property (nonatomic) NSInteger installmentCount; // ivar: _installmentCount
@property (nonatomic) NSUInteger merchant; // ivar: _merchant
@property (copy, nonatomic) NSArray *payments; // ivar: _payments
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (nonatomic) NSUInteger scheduleSummaryReason; // ivar: _scheduleSummaryReason
@property (copy, nonatomic) NSDecimalNumber *totalPrincipal; // ivar: _totalPrincipal


+(id)configurationForBNPLWithTotalPrincipal:(id)arg0 daysSinceTransactionStart:(NSInteger)arg1 payments:(id)arg2 ;
+(id)configurationWithProductType:(NSUInteger)arg0 apr:(id)arg1 totalPrincipal:(id)arg2 installmentCount:(NSInteger)arg3 daysSinceTransactionStart:(NSInteger)arg4 merchant:(NSUInteger)arg5 fundingSource:(NSUInteger)arg6 payments:(id)arg7 ;
+(id)configurationWithProductType:(NSUInteger)arg0 apr:(id)arg1 totalPrincipal:(id)arg2 installmentCount:(NSInteger)arg3 daysSinceTransactionStart:(NSInteger)arg4 payments:(id)arg5 ;


@end


#endif