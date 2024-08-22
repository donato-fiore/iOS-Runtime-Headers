// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTENHANCEDMERCHANT_H
#define PKACCOUNTENHANCEDMERCHANT_H

@class NSNumber, NSSet, NSString, NSURL, NSDate;
@protocol NSSecureCoding, NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>

#import "PKRemoteImageSet.h"

@interface PKAccountEnhancedMerchant : NSObject <NSSecureCoding, NSCopying, PKIdentifiable>



@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) NSSet *brandMUIDs; // ivar: _brandMUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *detailedDescription; // ivar: _detailedDescription
@property (retain, nonatomic) NSString *disclosures; // ivar: _disclosures
@property (retain, nonatomic) NSSet *enhancedRewardsProgramIdentifiers; // ivar: _enhancedRewardsProgramIdentifiers
@property (retain, nonatomic) NSSet *excludedMUIDs; // ivar: _excludedMUIDs
@property (readonly, nonatomic) BOOL hasLinkedApplication;
@property (readonly, nonatomic) BOOL hasMapsLocations;
@property (readonly, nonatomic) BOOL hasWebsite;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKRemoteImageSet *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) PKRemoteImageSet *logoImage; // ivar: _logoImage
@property (retain, nonatomic) NSURL *loyaltyPassURL; // ivar: _loyaltyPassURL
@property (retain, nonatomic) NSSet *mapsSearchStrings; // ivar: _mapsSearchStrings
@property (retain, nonatomic) NSString *mapsSearchText; // ivar: _mapsSearchText
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *paymentIdentifiers; // ivar: _paymentIdentifiers
@property (retain, nonatomic) NSString *paymentSheetMerchantRewardsText; // ivar: _paymentSheetMerchantRewardsText
@property (retain, nonatomic) NSDate *paymentSheetOverrideEnd; // ivar: _paymentSheetOverrideEnd
@property (retain, nonatomic) NSDate *paymentSheetOverrideStart; // ivar: _paymentSheetOverrideStart
@property (retain, nonatomic) NSString *paymentSheetRewardsText; // ivar: _paymentSheetRewardsText
@property (retain, nonatomic) NSString *privateIdentifier; // ivar: _privateIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressPaymentSheetRewardsHint; // ivar: _suppressPaymentSheetRewardsHint
@property (retain, nonatomic) NSURL *website; // ivar: _website


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEnhancedMerchant:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_initWithMerchantDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif