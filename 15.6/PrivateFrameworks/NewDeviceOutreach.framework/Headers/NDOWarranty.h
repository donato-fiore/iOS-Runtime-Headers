// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDOWARRANTY_H
#define NDOWARRANTY_H

@class NSString, NSNumber, NSDate, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NDOWarranty : NSObject <NSSecureCoding>



@property (retain) NSString *acLocalizedOfferCTA; // ivar: _acLocalizedOfferCTA
@property (readonly) NSString *acLocalizedOfferDesc;
@property (retain) NSString *acLocalizedOfferDetails; // ivar: _acLocalizedOfferDetails
@property (readonly) NSString *acLocalizedOfferDetailsEligibility;
@property (retain) NSString *acLocalizedOfferDetailsPluralEligibilityFormat; // ivar: _acLocalizedOfferDetailsPluralEligibilityFormat
@property (retain) NSString *acLocalizedOfferDetailsSingularEligibility; // ivar: _acLocalizedOfferDetailsSingularEligibility
@property (retain) NSString *acLocalizedOfferLabel; // ivar: _acLocalizedOfferLabel
@property (retain) NSString *acLocalizedOfferPluralDescFormat; // ivar: _acLocalizedOfferPluralDescFormat
@property (retain) NSString *acLocalizedOfferSingularDesc; // ivar: _acLocalizedOfferSingularDesc
@property (retain) NSNumber *acOfferBadgeDaysBeforeEndDate; // ivar: _acOfferBadgeDaysBeforeEndDate
@property CGFloat acOfferBadgeDurationBeforeEndDate; // ivar: _acOfferBadgeDurationBeforeEndDate
@property (retain) NSDate *acOfferConversionDate; // ivar: _acOfferConversionDate
@property BOOL acOfferDisplay; // ivar: _acOfferDisplay
@property (retain) NSDate *acOfferDisplayDate; // ivar: _acOfferDisplayDate
@property CGFloat acOfferDurationBeforeEndDate; // ivar: _acOfferDurationBeforeEndDate
@property BOOL acOfferEligible; // ivar: _acOfferEligible
@property (retain) NSDate *acOfferEligibleUntil; // ivar: _acOfferEligibleUntil
@property (retain) NSDate *acOfferFollowupDisplayDate; // ivar: _acOfferFollowupDisplayDate
@property (retain) NSString *acOfferIdentifier; // ivar: _acOfferIdentifier
@property BOOL acOfferSettingsAppBadge; // ivar: _acOfferSettingsAppBadge
@property BOOL acOfferSettingsRowBadge; // ivar: _acOfferSettingsRowBadge
@property (retain) NSArray *acOfferToggle; // ivar: _acOfferToggle
@property (retain) NSString *agsURL; // ivar: _agsURL
@property (retain) NSArray *benefitDetailsArray; // ivar: _benefitDetailsArray
@property (retain) NSDictionary *coverageBenefitsDictionary; // ivar: _coverageBenefitsDictionary
@property (retain) NSArray *coverageDetailsArray; // ivar: _coverageDetailsArray
@property (retain) NSDictionary *coverageDetailsDictionary; // ivar: _coverageDetailsDictionary
@property (retain) NSDate *coverageEndDate; // ivar: _coverageEndDate
@property BOOL coverageHasACLogo; // ivar: _coverageHasACLogo
@property (retain) NSString *coverageLocalizedDesc; // ivar: _coverageLocalizedDesc
@property (retain) NSString *coverageLocalizedDescLong; // ivar: _coverageLocalizedDescLong
@property (retain) NSString *coverageLocalizedExpirationLabel; // ivar: _coverageLocalizedExpirationLabel
@property (retain) NSString *coverageLocalizedLabel; // ivar: _coverageLocalizedLabel
@property (retain) NSDate *coverageValidityDate; // ivar: _coverageValidityDate
@property BOOL covered; // ivar: _covered
@property (readonly) unsigned int daysEligible;
@property (retain) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property BOOL displayRepairAndSupport; // ivar: _displayRepairAndSupport
@property (retain) NSString *footer1FormatString; // ivar: _footer1FormatString
@property (retain) NSString *footer1LinkLabel; // ivar: _footer1LinkLabel
@property (retain) NSString *footer1LinkURL; // ivar: _footer1LinkURL
@property (retain) NSString *footer2FormatString; // ivar: _footer2FormatString
@property (retain) NSString *footer2LinkLabel; // ivar: _footer2LinkLabel
@property (retain) NSString *footer2LinkURL; // ivar: _footer2LinkURL
@property BOOL isACServicesPartner; // ivar: _isACServicesPartner
@property BOOL isCoveragePlanSubscriptionType; // ivar: _isCoveragePlanSubscriptionType
@property (retain) NSString *localizedBenefitLabelKey; // ivar: _localizedBenefitLabelKey
@property (retain) NSString *localizedBenefitValueKey; // ivar: _localizedBenefitValueKey
@property (retain) NSString *localizedBenefitsCardFooter; // ivar: _localizedBenefitsCardFooter
@property (retain) NSString *localizedBenefitsCardSubTitle; // ivar: _localizedBenefitsCardSubTitle
@property (retain) NSString *localizedBenefitsCardTitle; // ivar: _localizedBenefitsCardTitle
@property (retain) NSString *localizedCoverageDetailsLabel; // ivar: _localizedCoverageDetailsLabel
@property (retain) NSString *localizedCoverageDetailsTitle; // ivar: _localizedCoverageDetailsTitle
@property (retain) NSString *localizedCoverageDetailsValue; // ivar: _localizedCoverageDetailsValue
@property (retain) NSString *localizedCoverageFooterFormatString; // ivar: _localizedCoverageFooterFormatString
@property (retain) NSString *localizedCoverageFooterLinkLabel; // ivar: _localizedCoverageFooterLinkLabel
@property (retain) NSString *localizedCoverageSubTitleForServicesPartnerString; // ivar: _localizedCoverageSubTitleForServicesPartnerString
@property (retain) NSString *localizedCoveredDeviceDateLabelFormat; // ivar: _localizedCoveredDeviceDateLabelFormat
@property (retain) NSString *localizedManagePlanLabel; // ivar: _localizedManagePlanLabel
@property (retain) NSString *localizedSupportAppFooter; // ivar: _localizedSupportAppFooter
@property (retain) NSString *localizedSupportAppLabel; // ivar: _localizedSupportAppLabel
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (retain) NSString *supportAppURL; // ivar: _supportAppURL


+(BOOL)supportsSecureCoding;
+(id)_legacyWarrantyPath;
+(id)_warrantyPathForSerialNumberFormat;
+(id)cachedWarrantyForSerialNumber:(id)arg0 ;
+(id)migrateLegacyCachedWarrantyIfNeededForSerialNumber:(id)arg0 ;
+(id)warrantyWithDictionary:(id)arg0 ;
+(id)warrantyWithDictionary:(id)arg0 serialNumber:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dateWithEpochNumber:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 serialNumber:(id)arg1 ;
-(void)cache;
-(void)cacheWarranty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif