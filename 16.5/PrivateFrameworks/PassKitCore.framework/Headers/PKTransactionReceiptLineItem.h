// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONRECEIPTLINEITEM_H
#define PKTRANSACTIONRECEIPTLINEITEM_H

@class NSDecimalNumber, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKImage.h"

@interface PKTransactionReceiptLineItem : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger adamIdentifier; // ivar: _adamIdentifier
@property (retain, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSURL *iconImageURL; // ivar: _iconImageURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKImage *image; // ivar: _image
@property (nonatomic) NSUInteger quantity; // ivar: _quantity
@property (copy, nonatomic) NSString *secondarySubtitle; // ivar: _secondarySubtitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionReceiptLineItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif