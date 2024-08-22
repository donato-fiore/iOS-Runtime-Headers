// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMRECEIPT_H
#define PKPAYMENTTRANSACTIONDETAILAMOUNTLINEITEMRECEIPT_H

@class PKTransactionReceiptLineItem, NSString, UIImage;
@protocol PKPaymentTransactionDetailAmountLineItem;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailAmountLineItemReceipt : NSObject <PKPaymentTransactionDetailAmountLineItem>

 {
    PKTransactionReceiptLineItem *_lineItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasTrailingLineSeperator; // ivar: _hasTrailingLineSeperator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger lineItemType;
@property (readonly, nonatomic) NSString *secondaryLabel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *tertiaryLabel;
@property (readonly, nonatomic) NSString *value;


-(id)initWithReceiptLineItem:(id)arg0 ;


@end


#endif