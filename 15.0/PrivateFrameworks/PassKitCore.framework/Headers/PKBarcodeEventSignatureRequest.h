// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODEEVENTSIGNATUREREQUEST_H
#define PKBARCODEEVENTSIGNATUREREQUEST_H

@class NSNumber, NSString, NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *barcodeIdentifier; // ivar: _barcodeIdentifier
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *deviceAccountIdentifier; // ivar: _deviceAccountIdentifier
@property (copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (copy, nonatomic) NSData *partialSignature; // ivar: _partialSignature
@property (copy, nonatomic) NSString *rawMerchantName; // ivar: _rawMerchantName
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (copy, nonatomic) NSString *transactionStatus; // ivar: _transactionStatus


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentTransaction:(id)arg0 deviceAccountIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif