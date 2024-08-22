// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEFEATUREONBOARDINGUTILITIES_H
#define HUHOMEFEATUREONBOARDINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUHomeFeatureOnboardingUtilities : NSObject



+(BOOL)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg0 ;
+(BOOL)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg0 ;
+(BOOL)atLeastOneHomePodHasLanguageSettingsForHome:(id)arg0 ;
+(BOOL)hasUserSaidYesToVoiceIdentificationInResults:(id)arg0 ;
+(BOOL)home:(id)arg0 hasSomeHomePodsOnSupportedVoiceRecognitionLanguages:(id)arg1 ;
+(BOOL)home:(id)arg0 voiceRecognitionIsSupportedForCurrentUserOnMediaAccessory:(id)arg1 languageOption:(id)arg2 ;
+(BOOL)isDeviceUsingASupportedVoiceRecognitionSiriLanguage:(id)arg0 shouldFallbackToBestSupportedLanguage:(BOOL)arg1 ;
+(BOOL)isVoiceProfileAvailableOnThisDeviceForLanguage:(id)arg0 ;
+(NSUInteger)home:(id)arg0 checkForMultiUserDeviceUpgradeRequirements:(id)arg1 ;
+(NSUInteger)home:(id)arg0 checkForOwnerUpgradeRequirementsFromResults:(id)arg1 ;
+(id)_checkIdentifyVoicePrerequisitesForHome:(id)arg0 ;
+(id)_fetchSupportedMultiUserLanguagesSynchronously;
+(id)analyzeHomeAssistantDevicesForSupportedVoiceRecognitionLanguages:(id)arg0 home:(id)arg1 ;
+(id)checkVoiceProfileAvailabiltyForLanguage:(id)arg0 ;
+(id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg0 ;
+(id)fetchSupportedVoiceRecognitionLanguages;
+(id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg0 ;
+(id)home:(id)arg0 createMultiUserLanguageToHomePodsMapping:(id)arg1 ;
+(id)home:(id)arg0 onboardAllFeaturesFromPresentingViewController:(id)arg1 usageOptions:(id)arg2 ;
+(id)home:(id)arg0 onboardFeaturesForKeyPaths:(id)arg1 presentingViewController:(id)arg2 usageOptions:(id)arg3 ;
+(id)home:(id)arg0 onboardIdentifyVoiceFromPresentingViewController:(id)arg1 usageOptions:(id)arg2 ;
+(id)home:(id)arg0 onboardPersonalRequestsFromPresentingViewController:(id)arg1 ;
+(id)home:(id)arg0 processHomeFeatureOnboarderResults:(id)arg1 ;
+(id)processLanguageAndMediaProfileInfo:(id)arg0 ;
+(void)fetchSupportedVoiceRecognitionLanguagesWithCompletion:(id)arg0 ;
+(void)initialize;
+(void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg0 ;
+(void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg0 ;


@end


#endif