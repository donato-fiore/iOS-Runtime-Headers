// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANT_H
#define PKMERCHANT_H

@class NSURL, NSString;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>

#import "PKMapsBrand.h"
#import "PKMapsMerchant.h"

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (nonatomic) NSInteger adamIdentifier; // ivar: _adamIdentifier
@property (readonly, nonatomic) NSURL *businessChatURL;
@property (readonly, nonatomic) NSInteger category;
@property (copy, nonatomic) NSString *city; // ivar: _city
@property (nonatomic) NSInteger cleanConfidenceLevel; // ivar: _cleanConfidenceLevel
@property (readonly, nonatomic) NSString *detailedCategory;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *displayNameIgnoringBrand; // ivar: _displayNameIgnoringBrand
@property (copy, nonatomic) NSString *fallbackDetailedCategory; // ivar: _fallbackDetailedCategory
@property (nonatomic) NSInteger fallbackcategory; // ivar: _fallbackcategory
@property (readonly, nonatomic) BOOL hasMapsMatch;
@property (readonly, nonatomic) NSString *heroImageAttribution;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *industryCategory; // ivar: _industryCategory
@property (nonatomic) NSInteger industryCode; // ivar: _industryCode
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSURL *logoImageURL;
@property (retain, nonatomic) PKMapsBrand *mapsBrand; // ivar: _mapsBrand
@property (nonatomic) BOOL mapsDataIsFromLocalMatch; // ivar: _mapsDataIsFromLocalMatch
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant; // ivar: _mapsMerchant
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSURL *originURL; // ivar: _originURL
@property (readonly, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *rawCANL; // ivar: _rawCANL
@property (copy, nonatomic) NSString *rawCity; // ivar: _rawCity
@property (copy, nonatomic) NSString *rawCountry; // ivar: _rawCountry
@property (copy, nonatomic) NSString *rawName; // ivar: _rawName
@property (copy, nonatomic) NSString *rawState; // ivar: _rawState
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (nonatomic) BOOL useDisplayNameIgnoringBrand; // ivar: _useDisplayNameIgnoringBrand
@property (nonatomic) BOOL useRawMerchantData; // ivar: _useRawMerchantData
@property (copy, nonatomic) NSString *webMerchantIdentifier; // ivar: _webMerchantIdentifier
@property (copy, nonatomic) NSString *webMerchantName; // ivar: _webMerchantName
@property (copy, nonatomic) NSString *zip; // ivar: _zip


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
-(BOOL)hasBetterVisualPropertiesThanMerchant:(id)arg0 ;
-(BOOL)hasCloudArchivableDeviceData;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMerchant:(id)arg0 ;
-(BOOL)shouldBeCombinedWithMerchant:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(id)uniqueIdentifier;
-(void)_encodeDeviceDataWithCloudStoreCoder:(id)arg0 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg0 ;
-(void)_regenerateDisplayName;
-(void)_regenerateDisplayNameIgnoringBrand;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif