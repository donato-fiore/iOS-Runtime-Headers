// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMFUNDINGSOURCE_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMFUNDINGSOURCE_H

@class NSString;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemFundingSource : NSObject <PKPaymentTransactionDetailAmountLineItem>

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


-(id)initWithAmount:(id)arg0 credentialType:(NSInteger)arg1 dpanSuffix:(id)arg2 cardDescription:(id)arg3 ;
-(id)initWithAmount:(id)arg0 transactionSourceCollection:(id)arg1 ;


@end


#endif