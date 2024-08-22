// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHTRANSACTION_H
#define FHTRANSACTION_H

@class NSDecimalNumber, NSString, CLLocation, NSTimeZone, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHTransaction : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (nonatomic) NSInteger amountFromDatabase; // ivar: _amountFromDatabase
@property (nonatomic) NSInteger category; // ivar: _category
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *industryCategory; // ivar: _industryCategory
@property (nonatomic) NSInteger industryCode; // ivar: _industryCode
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSUInteger mapsMerchantBrandID; // ivar: _mapsMerchantBrandID
@property (nonatomic) int mapsMerchantBrandResultProviderID; // ivar: _mapsMerchantBrandResultProviderID
@property (nonatomic) NSUInteger mapsMerchantID; // ivar: _mapsMerchantID
@property (nonatomic) int mapsMerchantResultProviderID; // ivar: _mapsMerchantResultProviderID
@property (copy, nonatomic) NSString *merchantDetailedCategory; // ivar: _merchantDetailedCategory
@property (copy, nonatomic) NSString *merchantUniqueIdentifier; // ivar: _merchantUniqueIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *rawName; // ivar: _rawName
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (nonatomic) NSUInteger transactionInternalState; // ivar: _transactionInternalState
@property (nonatomic) NSUInteger transactionSource; // ivar: _transactionSource
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (nonatomic) NSInteger transactionStatus; // ivar: _transactionStatus
@property (copy, nonatomic) NSDate *transactionStatusChangedDate; // ivar: _transactionStatusChangedDate
@property (nonatomic) NSInteger transactionType; // ivar: _transactionType
@property (nonatomic) NSString *uniqHistogramKey; // ivar: _uniqHistogramKey


+(BOOL)supportsSecureCoding;
+(NSInteger)FHMerchantCategoryFromString:(id)arg0 ;
+(id)fhProperties;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 dateFormatter:(id)arg1 ;
-(id)initWithJsonString:(id)arg0 ;
-(id)toDictionary;
-(id)toJson:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif