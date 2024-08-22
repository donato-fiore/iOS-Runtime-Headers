// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMGENERIC_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMGENERIC_H

@class NSString;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemGeneric : NSObject <PKPaymentTransactionDetailAmountLineItem>

 {
    NSString *_label;
    NSString *_value;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTrailingLineSeperator; // ivar: _hasTrailingLineSeperator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger lineItemType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value;


-(id)initWithLabel:(id)arg0 value:(id)arg1 ;


@end


#endif