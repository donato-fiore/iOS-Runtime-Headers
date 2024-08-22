// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDEFAULTS_H
#define AMSDEFAULTS_H


#import <Foundation/Foundation.h>


@interface AMSDefaults : NSObject



+(BOOL)QAMode;
+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(struct __CFString *)arg2 ;
+(BOOL)allowDuplicateAccounts;
+(BOOL)allowUpsellEnrollmentForAppliedAccounts;
+(BOOL)alwaysSendCacheBuster;
+(BOOL)alwaysSendGUID;
+(BOOL)devMode;
+(BOOL)didRetrieveDeviceOffers;
+(BOOL)didRetrieveDeviceOffersEligibility;
+(BOOL)didRetrieveTVOffers;
+(BOOL)disableHARLogging;
+(BOOL)disablePrivacyAcknowledgement;
+(BOOL)disableStubbedMarketingItems;
+(BOOL)enableCameraRedeem;
+(BOOL)enablePurchaseQueue;
+(BOOL)enableRemoteSecuritySigning;
+(BOOL)forceEngagementPurchaseSuccess;
+(BOOL)ignoreServerTrustEvaluation;
+(BOOL)includeFullRequestInHARLogging;
+(BOOL)includeFullResponseInHARLogging;
+(BOOL)logHARData;
+(BOOL)migratedDeviceOffers;
+(BOOL)migratedDeviceOffersForWatch;
+(BOOL)migratedPrivacyAcknowledgements;
+(BOOL)migratedToNewCookieStorage;
+(BOOL)perfomedDeviceOfferSetup;
+(BOOL)showSandboxAccountUI;
+(BOOL)showSpyglassPurchases;
+(BOOL)ss_ignoreServerTrustEvaluation;
+(BOOL)streamHARToDisk;
+(BOOL)useNewAccountStore;
+(BOOL)useNewCookieStorage;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 domain:(struct __CFString *)arg2 ;
+(NSInteger)acknowledgePrivacyOverride;
+(NSInteger)applePayClassic;
+(NSInteger)cardEnrollmentAutomatic;
+(NSInteger)cardEnrollmentManual;
+(NSInteger)cardEnrollmentSilent;
+(NSInteger)cardEnrollmentUpsell;
+(NSInteger)deviceBiometricsState;
+(NSInteger)forceLoadUrlMetrics;
+(NSInteger)pushEnvironment;
+(NSInteger)reversePushEnabled;
+(id)_valueForKey:(id)arg0 ;
+(id)_valueForKey:(id)arg0 domain:(struct __CFString *)arg1 ;
+(id)authenticationStarted;
+(id)bagOverrideIgnoredKeys;
+(id)bagOverrides;
+(id)bagURLCookies;
+(id)defaultPaymentPassIdentifier;
+(id)demoAccount;
+(id)deviceBiometricIdentities;
+(id)deviceOfferEligibility;
+(id)deviceOffersSerialNumber;
+(id)harURLFilters;
+(id)journeysURLOverride;
+(id)journeysURLOverrides;
+(id)lastMigratedBuildVersion;
+(id)marketingItemOverrides;
+(id)mediaTokenOverride;
+(id)mescalCertExpiration;
+(id)metricsCanaryIdentifier;
+(id)metricsTimingWindowStartTime;
+(id)multiUserContainerID;
+(id)sharedDatabaseChangeToken;
+(id)sourceOverrides;
+(id)storefrontSuffixes;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)setAcknowledgePrivacyOverride:(NSInteger)arg0 ;
+(void)setAllowDuplicateAccounts:(BOOL)arg0 ;
+(void)setAllowUpsellEnrollmentForAppliedAccounts:(BOOL)arg0 ;
+(void)setAlwaysSendCacheBuster:(BOOL)arg0 ;
+(void)setAlwaysSendGUID:(BOOL)arg0 ;
+(void)setApplePayClassic:(NSInteger)arg0 ;
+(void)setAuthenticationStarted:(id)arg0 ;
+(void)setBagOverrideIgnoredKeys:(id)arg0 ;
+(void)setBagOverrides:(id)arg0 ;
+(void)setBagURLCookies:(id)arg0 ;
+(void)setCardEnrollmentAutomatic:(NSInteger)arg0 ;
+(void)setCardEnrollmentManual:(NSInteger)arg0 ;
+(void)setCardEnrollmentSilent:(NSInteger)arg0 ;
+(void)setCardEnrollmentUpsell:(NSInteger)arg0 ;
+(void)setDefaultPaymentPassIdentifier:(id)arg0 ;
+(void)setDemoAccount:(id)arg0 ;
+(void)setDevMode:(BOOL)arg0 ;
+(void)setDeviceBiometricIdentities:(id)arg0 ;
+(void)setDeviceBiometricsState:(NSInteger)arg0 ;
+(void)setDeviceOfferEligibility:(id)arg0 ;
+(void)setDidRetrieveDeviceOffers:(BOOL)arg0 ;
+(void)setDidRetrieveDeviceOffersEligibility:(BOOL)arg0 ;
+(void)setDidRetrieveTVOffers:(BOOL)arg0 ;
+(void)setDisableHARLogging:(BOOL)arg0 ;
+(void)setDisablePrivacyAcknowledgement:(BOOL)arg0 ;
+(void)setDisableStubbedMarketingItems:(BOOL)arg0 ;
+(void)setEnableCameraRedeem:(BOOL)arg0 ;
+(void)setEnablePurchaseQueue:(BOOL)arg0 ;
+(void)setEnableRemoteSecuritySigning:(BOOL)arg0 ;
+(void)setForceEngagementPurchaseSuccess:(BOOL)arg0 ;
+(void)setForceLoadUrlMetrics:(NSInteger)arg0 ;
+(void)setHarURLFilters:(id)arg0 ;
+(void)setIgnoreServerTrustEvaluation:(BOOL)arg0 ;
+(void)setIncludeFullRequestInHARLogging:(BOOL)arg0 ;
+(void)setIncludeFullResponseInHARLogging:(BOOL)arg0 ;
+(void)setJourneysURLOverride:(id)arg0 ;
+(void)setJourneysURLOverrides:(id)arg0 ;
+(void)setLastMigratedBuildVersion:(id)arg0 ;
+(void)setLogHARData:(BOOL)arg0 ;
+(void)setMarketingItemOverrides:(id)arg0 ;
+(void)setMediaTokenOverride:(id)arg0 ;
+(void)setMescalCertExpiration:(id)arg0 ;
+(void)setMetricsCanaryIdentifier:(id)arg0 ;
+(void)setMetricsTimingWindowStartTime:(id)arg0 ;
+(void)setMigratedDeviceOffers:(BOOL)arg0 ;
+(void)setMigratedDeviceOffersForWatch:(BOOL)arg0 ;
+(void)setMigratedPrivacyAcknowledgements:(BOOL)arg0 ;
+(void)setMigratedToNewCookieStorage:(BOOL)arg0 ;
+(void)setPerfomedDeviceOfferSetup:(BOOL)arg0 ;
+(void)setPushEnvironment:(NSInteger)arg0 ;
+(void)setQAMode:(BOOL)arg0 ;
+(void)setReversePushEnabled:(NSInteger)arg0 ;
+(void)setSharedDatabaseChangeToken:(id)arg0 ;
+(void)setShowSandboxAccountUI:(BOOL)arg0 ;
+(void)setSourceOverrides:(id)arg0 ;
+(void)setStorefrontSuffixes:(id)arg0 ;
+(void)updateBadgeIdsForBundle:(id)arg0 block:(id)arg1 ;


@end


#endif