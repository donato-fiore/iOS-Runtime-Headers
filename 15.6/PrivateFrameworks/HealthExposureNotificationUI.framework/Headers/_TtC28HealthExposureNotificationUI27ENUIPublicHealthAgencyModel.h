// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI27ENUIPUBLICHEALTHAGENCYMODEL_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI27ENUIPUBLICHEALTHAGENCYMODEL_H

@class NSString, ENUserAuthorization, UIImage, ENRegion, NSURL;

#import <Foundation/Foundation.h>

#import "_TtC28HealthExposureNotificationUI21ENUIUserConsentStatus.h"
#import "_TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader.h"
#import "_TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument.h"

@interface _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel : NSObject {
    ? name;
    ? appBundleId;
    ? introductoryText;
    ? consentVersion;
    ? regionWebsiteURL;
    ? regionFAQWebsiteURL;
    ? analyticsConsentText;
    ? verificationIntroductoryText;
    ? selfReportIntroductoryText;
    ? verificationCodeHelpURL;
    ? verificationSymptomOnsetText;
    ? verificationTravelStatusText;
    ? vaccinationQuestionText;
    ? webReportURL;
}


@property (nonatomic) NSInteger analyticsConsentStatus; // ivar: analyticsConsentStatus
@property (nonatomic, readonly) NSString *analyticsConsentText;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus *consentStatus; // ivar: consentStatus
@property (nonatomic, readonly) NSString *consentVersion;
@property (nonatomic, readonly) ENUserAuthorization *diagnosisKeysPreAuthorization; // ivar: diagnosisKeysPreAuthorization
@property (nonatomic, readonly) unsigned int featureFlags; // ivar: featureFlags
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header; // ivar: header
@property (nonatomic, readonly) UIImage *installedAppIcon;
@property (nonatomic, readonly) NSString *installedAppName;
@property (nonatomic, readonly) NSString *introductoryText;
@property (nonatomic, readonly) BOOL isAppInstalled;
@property (nonatomic, readonly) BOOL isAppInstalledAndRegionYetToBeOnboarded;
@property (nonatomic, readonly) BOOL isAssociatedDomainAllowed; // ivar: isAssociatedDomainAllowed
@property (nonatomic, readonly) BOOL isAuthorized; // ivar: isAuthorized
@property (nonatomic, readonly) BOOL isPreauthorizationDomainAllowed; // ivar: isPreauthorizationDomainAllowed
@property (nonatomic, readonly) BOOL isRegionUsingApp;
@property (nonatomic, readonly) BOOL isSymptomOnsetNeeded;
@property (nonatomic, readonly) BOOL isTravelStatusNeeded;
@property (nonatomic, readonly) BOOL isVaccinationQuestionNeeded;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument *legalese; // ivar: legalese
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) ENRegion *region; // ivar: region
@property (nonatomic, readonly) NSURL *regionFAQWebsiteURL;
@property (nonatomic, readonly) BOOL regionIsPlaceholder;
@property (nonatomic, readonly) NSInteger regionVersion; // ivar: regionVersion
@property (nonatomic, readonly) NSURL *regionWebsiteURL;
@property (nonatomic, readonly) NSString *selfReportIntroductoryText;
@property (nonatomic, readonly) NSString *vaccinationQuestionText;
@property (nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property (nonatomic, readonly) NSString *verificationIntroductoryText;
@property (nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property (nonatomic, readonly) NSString *verificationTravelStatusText;
@property (nonatomic, readonly) BOOL wantsAnalytics; // ivar: wantsAnalytics
@property (nonatomic, readonly) NSURL *webReportURL;


+(id)activeRegion;
+(id)allRegions;
+(id)authorizedRegions;
+(id)availableRegions;
+(id)dummyRegionCountryCode;
+(id)regionForRegionCode:(id)arg0 ;
+(void)setActiveRegion:(id)arg0 ;
+(void)setAuthorizedRegions:(id)arg0 ;
+(void)setAvailableRegions:(id)arg0 ;
-(id)init;
-(id)initWithRegion:(id)arg0 name:(id)arg1 appBundleId:(id)arg2 introductoryText:(id)arg3 header:(id)arg4 legalese:(id)arg5 consentStatus:(id)arg6 consentVersion:(id)arg7 diagnosisKeysPreAuthorization:(id)arg8 isAssociatedDomainAllowed:(BOOL)arg9 isPreauthorizationDomainAllowed:(BOOL)arg10 isAuthorized:(BOOL)arg11 regionVersion:(NSInteger)arg12 regionWebsiteURL:(id)arg13 regionFAQWebsiteURL:(id)arg14 featureFlags:(unsigned int)arg15 wantsAnalytics:(BOOL)arg16 analyticsConsentStatus:(NSInteger)arg17 analyticsConsentText:(id)arg18 verificationIntroductoryText:(id)arg19 selfReportIntroductoryText:(id)arg20 verificationCodeHelpURL:(id)arg21 verificationSymptomOnsetText:(id)arg22 verificationTravelStatusText:(id)arg23 vaccinationQuestionText:(id)arg24 webReportURL:(id)arg25 ;


@end


#endif