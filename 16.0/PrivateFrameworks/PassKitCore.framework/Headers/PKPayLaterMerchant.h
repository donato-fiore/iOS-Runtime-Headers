// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERMERCHANT_H
#define PKPAYLATERMERCHANT_H

@class NSString, NSDate, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKMapsBrand.h"
#import "PKMapsMerchant.h"

@interface PKPayLaterMerchant : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger adamIdentifier; // ivar: _adamIdentifier
@property (copy, nonatomic) NSString *authNetworkData; // ivar: _authNetworkData
@property (copy, nonatomic) NSString *city; // ivar: _city
@property (nonatomic) NSInteger cleanConfidence; // ivar: _cleanConfidence
@property (copy, nonatomic) NSString *clearingNetworkData; // ivar: _clearingNetworkData
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (nonatomic) NSInteger fallbackCategory; // ivar: _fallbackCategory
@property (copy, nonatomic) NSString *industryCategory; // ivar: _industryCategory
@property (nonatomic) NSInteger industryCode; // ivar: _industryCode
@property (copy, nonatomic) NSDate *lastMerchantReprocessingDate; // ivar: _lastMerchantReprocessingDate
@property (retain, nonatomic) PKMapsBrand *mapsBrand; // ivar: _mapsBrand
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant; // ivar: _mapsMerchant
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (nonatomic) NSInteger merchantCategoryCode; // ivar: _merchantCategoryCode
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSURL *originURL; // ivar: _originURL
@property (copy, nonatomic) NSString *rawCANL; // ivar: _rawCANL
@property (copy, nonatomic) NSString *rawCity; // ivar: _rawCity
@property (copy, nonatomic) NSString *rawCountry; // ivar: _rawCountry
@property (copy, nonatomic) NSString *rawName; // ivar: _rawName
@property (copy, nonatomic) NSString *rawState; // ivar: _rawState
@property (nonatomic) BOOL requiresMerchantReprocessing; // ivar: _requiresMerchantReprocessing
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *webMerchantIdentifier; // ivar: _webMerchantIdentifier
@property (copy, nonatomic) NSString *webMerchantName; // ivar: _webMerchantName
@property (copy, nonatomic) NSString *zipcode; // ivar: _zipcode


+(BOOL)supportsSecureCoding;
-(BOOL)displayNameIsFallbackString;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterMerchant:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif