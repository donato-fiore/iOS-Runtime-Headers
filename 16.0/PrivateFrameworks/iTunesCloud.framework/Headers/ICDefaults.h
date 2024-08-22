// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDEFAULTS_H
#define ICDEFAULTS_H

@class NSUserDefaults, NSDictionary, NSDate, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface ICDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_musicUserDefaults;
}


@property (copy, nonatomic) NSDictionary *accountNotificationsShowInLibraryDictionary;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (readonly, nonatomic) BOOL allowLowAffinityRecommendations;
@property (copy, nonatomic) NSDictionary *authServiceClientTokenCache;
@property (readonly, copy, nonatomic) NSNumber *authServiceClientTokenTimeToLive;
@property (nonatomic) BOOL automaticDownloadsEnabled;
@property (readonly, nonatomic) BOOL bypassBagSanityChecks;
@property (copy, nonatomic) NSDictionary *cachedMusicUserTokens;
@property (copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property (copy, nonatomic) NSString *cloudMediaLibraryUID;
@property (readonly, nonatomic) NSString *defaultStoreFront;
@property (copy, nonatomic) NSNumber *deviceClassOverride;
@property (copy, nonatomic) NSString *deviceModelOverride;
@property (readonly, nonatomic) BOOL enableMultipathTCP;
@property (nonatomic, getter=isExplicitContentAllowedForCurrentYear) BOOL explicitContentAllowedForCurrentYear;
@property (nonatomic, getter=isExplicitContentAllowedForExpirationYear) BOOL explicitContentAllowedForExpirationYear;
@property (copy, nonatomic) NSNumber *fairPlayDeviceTypeOverride;
@property (nonatomic, getter=isGrazingPathEnabled) BOOL grazingPathEnabled;
@property (copy, nonatomic) NSString *hardwarePlatformOverride;
@property (nonatomic) BOOL ignoreExtendedCertificateValidation;
@property (readonly, nonatomic) NSUserDefaults *internalDefaults; // ivar: _internalDefaults
@property (copy, nonatomic) NSNumber *lastActiveAccountDSID;
@property (copy, nonatomic) NSDate *lastAllowedInteractiveAuthenticationTime;
@property (nonatomic) CGFloat lastAuthenticationDialogResponseTime;
@property (copy, nonatomic) NSDictionary *lastCookieHeadersForRevokingMusicUserTokens;
@property (copy, nonatomic) NSString *lastKnownHouseholdID;
@property (copy, nonatomic) NSDictionary *lastKnownLocalStoreAccountProperties;
@property (copy, nonatomic) NSDictionary *lastKnownSubscriptionStatusBaseCacheKey;
@property (copy, nonatomic) NSDictionary *lastKnownUserAgeVerificationState;
@property (readonly, nonatomic, getter=isLegacyStoreCacheBusterEnabled) BOOL legacyStoreCacheBusterEnabled;
@property (copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property (readonly, copy, nonatomic) NSNumber *networkTypeOverride;
@property (readonly, nonatomic, getter=isPrivacyAcknowledgementDisabledForMusic) BOOL privacyAcknowledgementDisabledForMusic;
@property (copy, nonatomic) NSString *productPlatformOverride;
@property (copy, nonatomic) NSString *productVersionOverride;
@property (copy, nonatomic) NSDictionary *pushNotificationState;
@property (readonly, copy, nonatomic) NSNumber *secureKeyRenewalTimeOverride;
@property (readonly, nonatomic) BOOL shouldBypassURLBagCache;
@property (readonly, nonatomic) BOOL shouldForceLibraryRecommendationAnalysis;
@property (nonatomic) BOOL shouldForcePrivacyAcknowledgementRequiredForMusic;
@property (nonatomic) BOOL shouldForceStreamingOnlyKeysForPlayback;
@property (readonly, nonatomic) BOOL shouldForceiPhoneBehaviors;
@property (readonly, nonatomic) BOOL shouldOverrideSubscriptionStatusToGlide;
@property (readonly, nonatomic) BOOL shouldReduceLibraryRecommendationsXPCInterval;
@property (nonatomic) BOOL shouldRunAgeVerification;
@property (readonly, nonatomic) BOOL shouldTreatInitialSagaImportAsFailed;
@property (readonly, nonatomic) BOOL shouldTreatSagaAddComputerCallAsFailed;
@property (readonly, nonatomic) BOOL shouldTreatSubscriptionStatusAsExpired;
@property (readonly, nonatomic) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete;
@property (readonly, nonatomic) BOOL shouldUseNewBagProtocol;


+(id)standardDefaults;
-(BOOL)_shouldSpoofIPadRequestProperties;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(id)_musicUserDefaults;
-(id)init;
-(void)_setOrRemoveInternalDefaultsObject:(id)arg0 forKey:(id)arg1 ;
-(void)_setOrRemoveObject:(id)arg0 forKey:(id)arg1 ;
-(void)deleteAutomaticDownloadsKey;
-(void)synchronize;


@end


#endif