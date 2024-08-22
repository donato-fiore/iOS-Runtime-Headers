// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLPURCHASERESPONSE_H
#define BLPURCHASERESPONSE_H

@class NSString, NSNumber, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (copy, nonatomic) NSString *downloadID; // ivar: _downloadID
@property (copy, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (copy, nonatomic) NSDictionary *errorInfo; // ivar: _errorInfo
@property (copy, nonatomic) NSDictionary *item; // ivar: _item
@property (copy, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *permLink; // ivar: _permLink
@property (copy, nonatomic) NSString *price; // ivar: _price
@property (copy, nonatomic) NSString *purchaseParameters; // ivar: _purchaseParameters
@property (retain, nonatomic) NSArray *purchaseResponseItems; // ivar: _purchaseResponseItems
@property (copy, nonatomic) NSDictionary *responseMetrics; // ivar: _responseMetrics
@property (retain, nonatomic) NSNumber *storeID; // ivar: _storeID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAMSPurchaseResult:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchase:(id)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif