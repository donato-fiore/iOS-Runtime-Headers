// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONRECEIPTSUMMARYITEM_H
#define PKTRANSACTIONRECEIPTSUMMARYITEM_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionReceiptSummaryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif