// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENREGIONSERVERAGENCYLOCALIZEDCONFIGURATION_H
#define ENREGIONSERVERAGENCYLOCALIZEDCONFIGURATION_H

@class NSString, NSLocale, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENRegionServerAgencyLocalizedConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *agencyMessage; // ivar: _agencyMessage
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *legalConsentText; // ivar: _legalConsentText
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (copy, nonatomic) NSArray *notificationConfigurations; // ivar: _notificationConfigurations
@property (copy, nonatomic) NSString *onboardingNotificationBody; // ivar: _onboardingNotificationBody
@property (copy, nonatomic) NSString *phaTelemetryOptInMessage; // ivar: _phaTelemetryOptInMessage
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (copy, nonatomic) NSString *regionName; // ivar: _regionName
@property (copy, nonatomic) NSString *revokedNotificationBody; // ivar: _revokedNotificationBody
@property (copy, nonatomic) NSString *revokedNotificationSubject; // ivar: _revokedNotificationSubject
@property (copy, nonatomic) NSString *selfReportIntroMessage; // ivar: _selfReportIntroMessage
@property (copy, nonatomic) NSString *selfReportNotificationBody; // ivar: _selfReportNotificationBody
@property (copy, nonatomic) NSString *symptomsOnsetDescription; // ivar: _symptomsOnsetDescription
@property (copy, nonatomic) NSString *testVerificationIntroMessage; // ivar: _testVerificationIntroMessage
@property (copy, nonatomic) NSString *testVerificationNotificationBody; // ivar: _testVerificationNotificationBody
@property (copy, nonatomic) NSString *traveledQuestionText; // ivar: _traveledQuestionText
@property (copy, nonatomic) NSString *vaccinationQuestionText; // ivar: _vaccinationQuestionText
@property (copy, nonatomic) NSString *vaccinationQuestionTextAlt; // ivar: _vaccinationQuestionTextAlt


+(BOOL)getLocalizedAgencyConfiguration:(*id)arg0 region:(id)arg1 fromDictionary:(id)arg2 locale:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)notificationConfigurationForName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif