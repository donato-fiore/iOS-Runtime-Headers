// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMREWARDS_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMREWARDS_H

@class NSString;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemRewards : NSObject <PKPaymentTransactionDetailAmountLineItem>

 {
    NSString *_label;
    NSString *_value;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTrailingLineSeperator; // ivar: _hasTrailingLineSeperator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger lineItemType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value;


-(id)initWithRewardsValueUnit:(NSUInteger)arg0 eligibleValue:(id)arg1 isEligible:(BOOL)arg2 totalAmount:(id)arg3 ;


@end


#endif