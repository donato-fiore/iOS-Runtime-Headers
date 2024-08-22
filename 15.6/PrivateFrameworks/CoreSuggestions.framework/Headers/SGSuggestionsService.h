// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSUGGESTIONSSERVICE_H
#define SGSUGGESTIONSSERVICE_H

@class NSString;
@protocol SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceIpsosProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceRemindersProtocol, SGSuggestionsServiceDeliveriesProtocol, SGSuggestionsServiceURLsProtocol, SGDSuggestManagerAllProtocol;

#import <Foundation/Foundation.h>

#import "SGFuture.h"

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceIpsosProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceRemindersProtocol, SGSuggestionsServiceDeliveriesProtocol, SGSuggestionsServiceURLsProtocol>

 {
    SGFuture *_daemonConnectionFuture;
    id<SGDSuggestManagerAllProtocol> *_managerForTesting;
    BOOL _keepDirty;
    NSString *_machServiceName;
    BOOL _queuesRequestsIfBusy;
    CGFloat _syncTimeout;
    _opaque_pthread_mutex_t _syncTimeoutLock;
    SGFuture *_snapshotFuture;
}




+(BOOL)hasEntitlement:(id)arg0 ;
+(BOOL)isHarvestingSupported;
+(id)_daemonConnectionFutureForMachServiceName:(id)arg0 protocol:(id)arg1 useCache:(BOOL)arg2 ;
+(id)daemonConnections;
+(id)inProcessSuggestManager;
+(id)serviceForContacts;
+(id)serviceForDeliveries;
+(id)serviceForEvents;
+(id)serviceForFides;
+(id)serviceForInternal;
+(id)serviceForIpsos;
+(id)serviceForMail;
+(id)serviceForMessages;
+(id)serviceForReminders;
+(id)serviceForURLs;
+(void)prepareForQuery;
+(void)setInProcessSuggestManager:(id)arg0 ;
-(BOOL)addInteractions:(id)arg0 bundleId:(id)arg1 error:(*id)arg2 ;
-(BOOL)addSearchableItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearCachesFully:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)confirmContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmContactDetailRecord:(id)arg0 confirmationUI:(int)arg1 error:(*id)arg2 ;
-(BOOL)confirmContactDetailRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmEventByRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmRealtimeReminder:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmReminderByRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)daemonExit:(*id)arg0 ;
-(BOOL)deleteEventByRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)deregisterContactsChangeObserverWithToken:(id)arg0 ;
-(BOOL)deregisterEventsChangeObserverWithToken:(id)arg0 ;
-(BOOL)isEnabledWithError:(*id)arg0 ;
-(BOOL)launchAppForSuggestedEventUsingLaunchInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)logUserCreatedReminderTitle:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForRealtimeExtraction:(*id)arg0 ;
-(BOOL)queuesRequestsIfBusy;
-(BOOL)rebuildNamesForDetailCache:(*id)arg0 ;
-(BOOL)registerURLFeedback:(unsigned char)arg0 absoluteURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)rejectContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectContact:(id)arg0 rejectionUI:(int)arg1 error:(*id)arg2 ;
-(BOOL)rejectContactDetailRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectContactDetailRecord:(id)arg0 rejectionUI:(int)arg1 error:(*id)arg2 ;
-(BOOL)rejectEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectEventByRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectRealtimeReminder:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)rejectRecord:(id)arg0 rejectionUI:(int)arg1 error:(*id)arg2 ;
-(BOOL)rejectReminderByRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)reminderAlarmTriggeredForRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllStoredPseudoContacts:(*id)arg0 ;
-(BOOL)reportMessagesFound:(id)arg0 lost:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetConfirmationAndRejectionHistory:(*id)arg0 ;
-(BOOL)resolveFullDownloadRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendRTCLogs:(*id)arg0 ;
-(BOOL)sleep:(*id)arg0 ;
-(BOOL)spotlightReimportFromIdentifier:(id)arg0 forPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(*id)arg4 ;
-(BOOL)updateMessages:(id)arg0 state:(NSUInteger)arg1 error:(*id)arg2 ;
-(CGFloat)syncTimeout;
-(id)_daemonConnection;
-(id)_remoteSuggestionManager;
-(id)allContactsLimitedTo:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)allContactsWithSnippets:(BOOL)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)allDeliveriesWithLimit:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)allEventsLimitedTo:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)allRemindersLimitedTo:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)cacheSnapshotFuture;
-(id)cnContactMatchesForRecordId:(id)arg0 error:(*id)arg1 ;
-(id)cnContactMatchesForRecordIds:(id)arg0 error:(*id)arg1 ;
-(id)contactFromRecordID:(id)arg0 ;
-(id)contactFromRecordID:(id)arg0 error:(*id)arg1 ;
-(id)contactMatchesByEmailAddress:(id)arg0 ;
-(id)contactMatchesByEmailAddress:(id)arg0 error:(*id)arg1 ;
-(id)contactMatchesByPhoneNumber:(id)arg0 ;
-(id)contactMatchesByPhoneNumber:(id)arg0 error:(*id)arg1 ;
-(id)contactMatchesBySocialProfile:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)contactMatchesBySocialProfile:(id)arg0 error:(*id)arg1 ;
-(id)contactMatchesWithContact:(id)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)contactMatchesWithContactIdentifier:(id)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)contactMatchesWithContactIdentifiers:(id)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)emailAddressIsSignificant:(id)arg0 error:(*id)arg1 ;
-(id)eventFromRecordID:(id)arg0 error:(*id)arg1 ;
-(id)eventFromUniqueId:(id)arg0 error:(*id)arg1 ;
-(id)foundInStringForRecordId:(id)arg0 style:(unsigned char)arg1 error:(*id)arg2 ;
-(id)fullDownloadRequestBatch:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)harvestedSuggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithMachServiceName:(id)arg0 protocol:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 protocol:(id)arg1 useCache:(BOOL)arg2 ;
-(id)ipsosMessagesFromSearchableItems:(id)arg0 error:(*id)arg1 ;
-(id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg0 sourceURL:(id)arg1 clientLocale:(id)arg2 error:(*id)arg3 ;
-(id)messagesToRefreshWithError:(*id)arg0 ;
-(id)namesForDetail:(id)arg0 limitTo:(NSUInteger)arg1 prependMaybe:(BOOL)arg2 error:(*id)arg3 ;
-(id)namesForDetail:(id)arg0 limitTo:(NSUInteger)arg1 prependMaybe:(BOOL)arg2 onlySignificant:(BOOL)arg3 error:(*id)arg4 ;
-(id)namesForDetailCaches;
-(id)originFromRecordId:(id)arg0 error:(*id)arg1 ;
-(id)powerState;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 error:(*id)arg5 ;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 error:(*id)arg5 ;
-(id)recentURLsWithLimit:(unsigned int)arg0 error:(*id)arg1 ;
-(id)registerContactsChangeObserver:(id)arg0 ;
-(id)registerEventsChangeObserver:(id)arg0 ;
-(id)reminderTitleForContent:(id)arg0 error:(*id)arg1 ;
-(id)saliencyFromEmailHeaders:(id)arg0 error:(*id)arg1 ;
-(id)saliencyFromRFC822Data:(id)arg0 error:(*id)arg1 ;
-(id)suggestContactMatchesWithFullTextSearch:(id)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)suggestContactMatchesWithMessagingPrefix:(id)arg0 limitTo:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)suggestEventsInFutureLimitTo:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)suggestEventsInFutureLimitTo:(NSUInteger)arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 limitTo:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 limitTo:(NSUInteger)arg2 options:(unsigned int)arg3 error:(*id)arg4 ;
-(id)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 prefix:(id)arg2 limitTo:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 prefix:(id)arg2 limitTo:(NSUInteger)arg3 options:(unsigned int)arg4 error:(*id)arg5 ;
-(id)suggestionsFromEmailContent:(id)arg0 headers:(id)arg1 source:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)suggestionsFromRFC822Data:(id)arg0 source:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)suggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)suggestionsFromSimpleMailMessage:(id)arg0 headers:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)topSalienciesForMailboxId:(id)arg0 limit:(NSInteger)arg1 error:(*id)arg2 ;
-(id)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 containingSubstring:(id)arg3 flagFilter:(unsigned char)arg4 limit:(unsigned int)arg5 error:(*id)arg6 ;
-(id)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 limit:(unsigned int)arg3 error:(*id)arg4 ;
-(int)_confirmRejectUI;
-(void)_clearHarvestStoreCache;
-(void)addInteractions:(id)arg0 bundleId:(id)arg1 withCompletion:(id)arg2 ;
-(void)addSearchableItemMetadata:(id)arg0 htmlData:(id)arg1 completion:(id)arg2 ;
-(void)addSearchableItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)allContactsLimitedTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)allContactsWithSnippets:(BOOL)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)allDeliveriesWithLimit:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)allEventsLimitedTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)allRemindersLimitedTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)clearCachesFully:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)cnContactMatchesForRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)cnContactMatchesForRecordIds:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmContact:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmContactDetailRecord:(id)arg0 confirmationUI:(int)arg1 withCompletion:(id)arg2 ;
-(void)confirmContactDetailRecord:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmEvent:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmEventByRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmRealtimeReminder:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmRecord:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmReminderByRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactFromRecordID:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesByEmailAddress:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesByPhoneNumber:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesBySocialProfile:(id)arg0 bundleIdentifier:(id)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesBySocialProfile:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesWithContact:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithContactIdentifier:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithContactIdentifiers:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)daemonExitWithCompletion:(id)arg0 ;
-(void)deleteCloudKitZoneWithCompletion:(id)arg0 ;
-(void)deleteEventByRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 completion:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 groupIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 identifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 domainIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)emailAddressIsSignificant:(id)arg0 withCompletion:(id)arg1 ;
-(void)evaluateRecipe:(id)arg0 attachments:(id)arg1 completion:(id)arg2 ;
-(void)eventFromRecordID:(id)arg0 withCompletion:(id)arg1 ;
-(void)eventFromUniqueId:(id)arg0 withCompletion:(id)arg1 ;
-(void)eventsForSchemas:(id)arg0 usingStore:(id)arg1 completion:(id)arg2 ;
-(void)foundInStringForRecordId:(id)arg0 style:(unsigned char)arg1 withCompletion:(id)arg2 ;
-(void)fullDownloadRequestBatch:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)ipsosMessagesFromSearchableItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)isEventCandidateForURL:(id)arg0 andTitle:(id)arg1 containsSchemaOrg:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)isEventCandidateForURL:(id)arg0 andTitle:(id)arg1 withCompletion:(id)arg2 ;
-(void)keepDirty:(BOOL)arg0 ;
-(void)keysForSchemas:(id)arg0 completion:(id)arg1 ;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg0 sourceURL:(id)arg1 clientLocale:(id)arg2 withCompletion:(id)arg3 ;
-(void)logEventInteractionForEventWithExternalIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEventWithUniqueKey:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logMetricAutocompleteResult:(int)arg0 recordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricAutocompleteUserSelectedRecordId:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricContactCreated:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricContactSearchResult:(int)arg0 recordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricContactSearchResultSelected:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg0 ;
-(void)logMetricSuggestedContactDetailShown:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricSuggestedContactDetailUsed:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logSuggestionInteractionForRecordId:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logUserCreatedReminderTitle:(id)arg0 withCompletion:(id)arg1 ;
-(void)messagesToRefreshWithCompletion:(id)arg0 ;
-(void)namesForDetail:(id)arg0 limitTo:(NSUInteger)arg1 prependMaybe:(BOOL)arg2 onlySignificant:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)namesForDetail:(id)arg0 limitTo:(NSUInteger)arg1 prependMaybe:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)originFromRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)planReceivedFromServerWithPayload:(id)arg0 completion:(id)arg1 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 withCompletion:(id)arg5 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 withCompletion:(id)arg5 ;
-(void)prepareForRealtimeExtractionWithCompletion:(id)arg0 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)realtimeSuggestionsFromURL:(id)arg0 title:(id)arg1 HTMLPayload:(id)arg2 extractionDate:(id)arg3 withCompletion:(id)arg4 ;
-(void)rebuildNamesForDetailCacheWithCompletion:(id)arg0 ;
-(void)recentURLsWithLimit:(unsigned int)arg0 withCompletion:(id)arg1 ;
-(void)registerURLFeedback:(unsigned char)arg0 absoluteURL:(id)arg1 withCompletion:(id)arg2 ;
-(void)rejectContact:(id)arg0 rejectionUI:(int)arg1 withCompletion:(id)arg2 ;
-(void)rejectContact:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectContactDetailRecord:(id)arg0 rejectionUI:(int)arg1 withCompletion:(id)arg2 ;
-(void)rejectContactDetailRecord:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectEvent:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectEventByRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectRealtimeReminder:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectRecord:(id)arg0 rejectionUI:(int)arg1 withCompletion:(id)arg2 ;
-(void)rejectRecord:(id)arg0 withCompletion:(id)arg1 ;
-(void)rejectReminderByRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)reminderAlarmTriggeredForRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)reminderTitleForContent:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeAllStoredPseudoContactsWithCompletion:(id)arg0 ;
-(void)reportMessagesFound:(id)arg0 lost:(id)arg1 withCompletion:(id)arg2 ;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(id)arg0 ;
-(void)resolveFullDownloadRequests:(id)arg0 withCompletion:(id)arg1 ;
-(void)saliencyFromEmailHeaders:(id)arg0 withCompletion:(id)arg1 ;
-(void)saliencyFromRFC822Data:(id)arg0 withCompletion:(id)arg1 ;
-(void)setManagerForTesting:(id)arg0 ;
-(void)setQueuesRequestsIfBusy:(BOOL)arg0 ;
-(void)setSyncTimeout:(CGFloat)arg0 ;
-(void)sleepWithCompletion:(id)arg0 ;
-(void)spotlightReimportFromIdentifier:(id)arg0 forPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 withCompletion:(id)arg4 ;
-(void)suggestContactMatchesWithFullTextSearch:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)suggestContactMatchesWithMessagingPrefix:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)suggestEventsInFutureLimitTo:(NSUInteger)arg0 options:(unsigned int)arg1 withCompletion:(id)arg2 ;
-(void)suggestEventsInFutureLimitTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 limitTo:(NSUInteger)arg2 options:(unsigned int)arg3 withCompletion:(id)arg4 ;
-(void)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 limitTo:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 prefix:(id)arg2 limitTo:(NSUInteger)arg3 options:(unsigned int)arg4 withCompletion:(id)arg5 ;
-(void)suggestEventsStartingAt:(id)arg0 endingAt:(id)arg1 prefix:(id)arg2 limitTo:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)suggestionsFromEmailContent:(id)arg0 headers:(id)arg1 source:(id)arg2 options:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)suggestionsFromRFC822Data:(id)arg0 source:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)suggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)suggestionsFromSimpleMailMessage:(id)arg0 headers:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)suggestionsFromURL:(id)arg0 title:(id)arg1 HTMLPayload:(id)arg2 withCompletion:(id)arg3 ;
-(void)topSalienciesForMailboxId:(id)arg0 limit:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateMessages:(id)arg0 state:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 containingSubstring:(id)arg3 flagFilter:(unsigned char)arg4 limit:(unsigned int)arg5 withCompletion:(id)arg6 ;
-(void)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 limit:(unsigned int)arg3 withCompletion:(id)arg4 ;
-(void)waitForEventWithIdentifier:(id)arg0 toAppearInEventStoreWithCompletion:(id)arg1 ;
-(void)waitForEventWithIdentifier:(id)arg0 toAppearInEventStoreWithLastModificationDate:(id)arg1 completion:(id)arg2 ;


@end


#endif