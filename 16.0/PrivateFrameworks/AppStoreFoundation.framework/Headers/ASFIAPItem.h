// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASFIAPITEM_H
#define ASFIAPITEM_H

@class NSDate, NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASFIAPItem : NSObject <NSCopying>

 {
    NSDate *_originalPurchaseDate;
    NSString *_originalTransactionID;
    NSDate *_purchaseDate;
    NSString *_productID;
    NSNumber *_quantity;
    NSString *_transactionID;
}


@property (readonly) NSDate *originalPurchaseDate;
@property (readonly) NSString *originalTransactionID;
@property (readonly) NSString *productID;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSNumber *quantity;
@property (readonly) NSString *transactionID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif