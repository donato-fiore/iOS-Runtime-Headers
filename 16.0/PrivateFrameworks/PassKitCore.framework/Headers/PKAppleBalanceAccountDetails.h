// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLEBALANCEACCOUNTDETAILS_H
#define PKAPPLEBALANCEACCOUNTDETAILS_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKAppleBalanceAccountDetails : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *associatedPassSerialNumber; // ivar: _associatedPassSerialNumber
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier; // ivar: _associatedPassTypeIdentifier
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (copy, nonatomic) NSString *fpanIdentifier; // ivar: _fpanIdentifier
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyCode;
-(id)description;
-(id)initWithCloudRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCloudRecord:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif