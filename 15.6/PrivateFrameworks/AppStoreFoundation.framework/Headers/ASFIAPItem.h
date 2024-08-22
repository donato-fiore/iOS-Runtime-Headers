// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFIAPITEM_H
#define ASFIAPITEM_H

@class NSDate, NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASFIAPItem : NSObject <NSCopying>



@property (copy) NSDate *originalPurchaseDate; // ivar: _originalPurchaseDate
@property (copy) NSString *originalTransactionID; // ivar: _originalTransactionID
@property (copy) NSString *productID; // ivar: _productID
@property (copy) NSDate *purchaseDate; // ivar: _purchaseDate
@property (copy) NSNumber *quantity; // ivar: _quantity
@property (copy) NSString *transactionID; // ivar: _transactionID


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif