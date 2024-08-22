// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONRECEIPT_H
#define PKTRANSACTIONRECEIPT_H

@class NSString, NSURL, NSArray, NSData, NSDate, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKTransactionReceipt : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSArray *headerFields; // ivar: _headerFields
@property (readonly, nonatomic) NSData *htmlReceiptData; // ivar: _htmlReceiptData
@property (retain, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, nonatomic) NSArray *lineItems; // ivar: _lineItems
@property (readonly, nonatomic) NSData *pdfReceiptData; // ivar: _pdfReceiptData
@property (copy, nonatomic) NSString *receiptIdentifier; // ivar: _receiptIdentifier
@property (copy, nonatomic) NSString *receiptProviderIdentifier; // ivar: _receiptProviderIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSDecimalNumber *subtotalAmount; // ivar: _subtotalAmount
@property (readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property (readonly, nonatomic) NSArray *summaryItems; // ivar: _summaryItems
@property (retain, nonatomic) NSURL *supportURL; // ivar: _supportURL
@property (retain, nonatomic) NSDecimalNumber *totalAmount; // ivar: _totalAmount
@property (readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionReceipt:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBundle:(id)arg0 ;


@end


#endif