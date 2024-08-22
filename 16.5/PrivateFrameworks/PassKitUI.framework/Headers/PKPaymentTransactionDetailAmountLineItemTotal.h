// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMTOTAL_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMTOTAL_H

@class NSString;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemTotal : NSObject <PKPaymentTransactionDetailAmountLineItem>

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


-(id)initWithAmount:(id)arg0 totalType:(NSUInteger)arg1 ;


@end


#endif