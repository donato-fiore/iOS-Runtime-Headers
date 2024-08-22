// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPREFERENCESTORAGE_H
#define SGPREFERENCESTORAGE_H


#import <Foundation/Foundation.h>


@interface SGPreferenceStorage : NSObject



+(BOOL)allowAgeBasedPruning;
+(BOOL)allowAnyDomainForMarkup;
+(BOOL)allowGeocode;
+(BOOL)allowUnverifiedSourceForMarkup;
+(BOOL)alwaysShowCancelledEvents;
+(BOOL)detectContacts;
+(BOOL)detectNLEvents;
+(BOOL)detectReminders;
+(BOOL)detectRemindersInMail;
+(BOOL)detectStructuredEvents;
+(BOOL)detectStructuredEventsML;
+(BOOL)hidePastEventsForTests;
+(BOOL)onlyShowSignificantNLEvents;
+(BOOL)onlyShowSignificantPseudoContacts;
+(BOOL)shouldHarvestEvents;
+(BOOL)showContactsFoundInMail;
+(BOOL)showEventsFoundInMail;
+(BOOL)showOperatingSystemVersionInSnippets;
+(BOOL)showPastEvents;
+(BOOL)showSuggestionsCalendar;
+(BOOL)syncHistoryToCloud;
+(BOOL)useMLModelForContactSharing;
+(BOOL)useMLModelForContacts;
+(BOOL)useMLModelForSelfId;
+(BOOL)useManateeSaltForHistory;
+(CGFloat)harvestBudgetCPUTimeSeconds;
+(NSInteger)harvestBudgetNumberOfOperations;
+(NSInteger)hashedSessionsLogging;
+(NSInteger)messagesToProcessImmediately;
+(NSInteger)suggestionsLogLevel;
+(float)contactSharingNegativeSamplingRate;
+(id)cloudKitPersistedState;
+(id)defaults;
+(id)defaultsForTests;
+(id)detectSalientMails;
+(id)userAccountsPersistedState;
+(int)registerBlockOnSuggestionsSettingsChange:(id)arg0 ;
+(void)removeDeprecatedDefaults;
+(void)resetAllPreferences;
+(void)resumeNotificationQueue;
+(void)setAllowAgeBasedPruning:(BOOL)arg0 ;
+(void)setAllowAnyDomainForMarkup:(BOOL)arg0 ;
+(void)setAllowGeocode:(BOOL)arg0 ;
+(void)setAllowGeocodeForTests:(BOOL)arg0 ;
+(void)setAllowUnverifiedSourceForMarkup:(BOOL)arg0 ;
+(void)setAlwaysShowCancelledEvents:(BOOL)arg0 ;
+(void)setCloudKitPersistedState:(id)arg0 ;
+(void)setContactSharingNegativeSamplingRate:(float)arg0 ;
+(void)setContactsDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setDetectContacts:(BOOL)arg0 ;
+(void)setDetectNLEvents:(BOOL)arg0 ;
+(void)setDetectReminders:(BOOL)arg0 ;
+(void)setDetectRemindersInMail:(BOOL)arg0 ;
+(void)setDetectStructuredEvents:(BOOL)arg0 ;
+(void)setDetectStructuredEventsML:(BOOL)arg0 ;
+(void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg0 ;
+(void)setFirstPartyMailAppIsInstalled:(BOOL)arg0 ;
+(void)setHarvestBudgetCPUTimeSeconds:(CGFloat)arg0 ;
+(void)setHarvestBudgetNumberOfOperations:(NSInteger)arg0 ;
+(void)setHashedSessionsLogging:(int)arg0 ;
+(void)setHidePastEventsForTests:(BOOL)arg0 ;
+(void)setMailSaliencyDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setMessagesToProcessImmediately:(NSInteger)arg0 ;
+(void)setMessagesToProcessImmediatelyForTests:(NSInteger)arg0 ;
+(void)setNLEventsDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setOnlyShowSignificantNLEvents:(BOOL)arg0 ;
+(void)setOnlyShowSignificantPseudoContacts:(BOOL)arg0 ;
+(void)setOnlyShowSignificantPseudoContactsForTests:(BOOL)arg0 ;
+(void)setRemindersDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setRemindersDetectionInMailEnabledForTests:(BOOL)arg0 ;
+(void)setShowCancelledEventsForTests:(BOOL)arg0 ;
+(void)setShowContactsFoundInMail:(BOOL)arg0 ;
+(void)setShowEventsFoundInMail:(BOOL)arg0 ;
+(void)setShowOperatingSystemVersionInSnippets:(BOOL)arg0 ;
+(void)setShowPastEvents:(BOOL)arg0 ;
+(void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setStructuredEventsMLDetectionEnabledForTests:(BOOL)arg0 ;
+(void)setSyncHistoryToCloud:(BOOL)arg0 ;
+(void)setSyncHistoryToCloudForTests:(BOOL)arg0 ;
+(void)setUseMLModelForContactSharing:(BOOL)arg0 ;
+(void)setUseMLModelForContacts:(BOOL)arg0 ;
+(void)setUseMLModelForSelfId:(BOOL)arg0 ;
+(void)setUseMLModelForSelfIdForTests:(BOOL)arg0 ;
+(void)setUseManateeSaltForHistory:(BOOL)arg0 ;
+(void)setUserAccountsPersistedState:(id)arg0 ;
+(void)suspendNotificationQueue;
+(void)updateBoolSettingKey:(id)arg0 withValue:(BOOL)arg1 ;
+(void)updateDetection:(BOOL)arg0 forKey:(id)arg1 ;
+(void)updateIntSettingKey:(id)arg0 withValue:(int)arg1 ;


@end


#endif