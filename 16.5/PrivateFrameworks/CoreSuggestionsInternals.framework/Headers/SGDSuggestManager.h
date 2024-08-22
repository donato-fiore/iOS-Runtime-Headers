// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDSUGGESTMANAGER_H
#define SGDSUGGESTMANAGER_H

@class NSXPCConnection, _PASNotificationToken, NSOperationQueue, CNContactStore, NSDictionary, NSLock, SGFuture, PETEventTracker2, _PASLock, NSString;
@protocol SGDSuggestManagerAllProtocol, HVContentAdmissionObserver, HVMailConsumer, HVInteractionConsumer;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"
#import "SGSuggestHistory.h"
#import "SGDManagerForCTS.h"
#import "SGEKEventStoreProvider.h"
#import "SGXpcTransaction.h"
#import "SGSearchableItemIdTriple.h"
#import "SGCoalescingDropBox.h"
#import "SGServiceContext.h"

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol, HVContentAdmissionObserver, HVMailConsumer, HVInteractionConsumer>

 {
    SGSqlEntityStore *_harvestStore;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    _PASNotificationToken *_assetUpdateToken;
    NSOperationQueue *_messageHarvestQueue;
    SGDManagerForCTS *_ctsManager;
    SGEKEventStoreProvider *_ekStoreProvider;
    CNContactStore *_contactStore;
    NSDictionary *_bundleIdToPET;
    NSLock *_dirtyLock;
    SGXpcTransaction *_dirtyTransaction;
    SGSearchableItemIdTriple *_lastSuggestionsFromMessageRequest;
    SGFuture *_lastSuggestionsFromMessageResponse;
    NSLock *_lastSuggestionsFromMessageLock;
    int _settingsChangeToken;
    PETEventTracker2 *_pet2Tracker;
    SGCoalescingDropBox *_purgeDeletionDropBox;
    _PASLock *_recentlyHarvestedDetailLock;
    BOOL _keepRealtimeAsLost;
    _PASLock *_bufferedInteractionsForBundleLock;
}


@property (readonly, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) SGServiceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contactAggregator;
+(id)requestCache;
+(void)clearRequestCache;
-(BOOL)_canBannerUseStoredDissection:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_harvestPeopleFromInteractions:(id)arg0 bundleId:(id)arg1 ;
-(BOOL)_isContactInteresting:(id)arg0 emailEntity:(id)arg1 enrichments:(id)arg2 hasContactCard:(NSUInteger)arg3 ;
-(BOOL)clientIsMail;
-(BOOL)clientIsMessages;
-(BOOL)containsNonCuratedData:(id)arg0 ;
-(BOOL)isSGEntity:(id)arg0 duplicateOfEKEvent:(id)arg1 withStore:(id)arg2 ;
-(BOOL)isSearchableItemPartOfReimport:(id)arg0 ;
// -(BOOL)isSearchableItemPartOfReimportWithGetterBlock:(id)arg0 bundleIdentifier:(unk)arg1  ;
-(BOOL)keepRealtimeAsLost;
-(id)_emailContentCacheSalt;
-(id)_mapToPseudoEvents:(id)arg0 ;
-(id)_maybeFormatString;
-(id)_pmlTraining;
-(id)_showInFormatStringWithLocalization:(id)arg0 ;
// -(id)cachedResultForKey:(id)arg0 generateResult:(id)arg1 validateResults:(unk)arg2  ;
-(id)consumeInteractionWithContext:(id)arg0 ;
-(id)consumeMailContentWithContext:(id)arg0 ;
-(id)consumeMessagesContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)createLaunchIntentForStorageEvent:(id)arg0 ;
-(id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg0 candidates:(id)arg1 ;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)entityFromUniqueKey:(id)arg0 ;
-(id)filterPastEvents:(id)arg0 ;
-(id)filterRealtimeEvents:(id)arg0 ;
-(id)filterRealtimeReminders:(id)arg0 ;
-(id)getPet2Tracker;
-(id)harvestStore;
-(id)init;
-(id)initWithConnection:(id)arg0 store:(id)arg1 ;
-(id)initWithMessagesConnection:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 ;
-(id)initWithStore:(id)arg0 ctsManager:(id)arg1 ekStoreProvider:(id)arg2 contactStore:(id)arg3 pet2Tracker:(id)arg4 ;
-(id)lastSuggestionsFromMessageLock;
-(id)lastSuggestionsFromMessageRequest;
-(id)lastSuggestionsFromMessageResponse;
-(id)messageHarvestQueue;
-(id)realtimeContactsFromEntity:(id)arg0 enrichments:(id)arg1 sourceTextMessage:(id)arg2 store:(id)arg3 ;
-(id)recentlyHarvestedDetailLock;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg0 enrichments:(id)arg1 store:(id)arg2 ;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg0 message:(id)arg1 enrichments:(id)arg2 store:(id)arg3 ;
-(id)storageContactFromRecordId:(id)arg0 ;
-(struct SGMContactDetailUsedApp_ )_appEnumForBundleId:(id)arg0 ;
-(unsigned short)interfaceForRealtimeReminder:(id)arg0 ;
-(void)_confirmReminderByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)_executeBoxTasks:(id)arg0 ;
-(void)_harvestReservationsFromInteractions:(id)arg0 bundleId:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_performAction:(id)arg0 onContactDetailRecord:(id)arg1 confirmRejectUI:(int)arg2 completion:(id)arg3 ;
-(void)_performAction:(id)arg0 onRecord:(id)arg1 confirmRejectUI:(int)arg2 completion:(id)arg3 ;
-(void)_performAction:(id)arg0 onRecord:(id)arg1 withParentConfirmation:(BOOL)arg2 confirmRejectUI:(int)arg3 completion:(id)arg4 ;
-(void)_processReservationInteractions:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
-(void)_rejectReminderByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg0 ;
-(void)_setupHistoryObserver:(id)arg0 ;
-(void)_storeAndGeocodeEntity:(id)arg0 spotlightBundleIdentifier:(id)arg1 spotlightUniqueIdentifier:(id)arg2 spotlightDomainIdentifier:(id)arg3 store:(id)arg4 afterCallbackQueue:(id)arg5 finalize:(id)arg6 ;
-(void)_suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 dissectIfNecessary:(BOOL)arg2 completionDelivery:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)_suggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 dissectIfNecessary:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)addInteractions:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
-(void)addSearchableItemMetadata:(id)arg0 htmlData:(id)arg1 completion:(id)arg2 ;
-(void)addSearchableItems:(id)arg0 completion:(id)arg1 ;
-(void)allContactsWithSnippets:(BOOL)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)allDeliveriesWithLimit:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)allEventsLimitedTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)allRemindersLimitedTo:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)bumptTTLForNLEvent:(id)arg0 ;
-(void)clearCachesFully:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)clearContactAggregator;
-(void)clearContactAggregatorConversation:(id)arg0 ;
-(void)cnContactMatchesForRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)cnContactMatchesForRecordIds:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmContact:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)confirmContactDetailRecord:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)confirmEvent:(id)arg0 completion:(id)arg1 ;
-(void)confirmEventByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)confirmRealtimeReminder:(id)arg0 completion:(id)arg1 ;
-(void)confirmRecord:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)confirmReminderByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)contactFromRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesByEmailAddress:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesByPhoneNumber:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesBySocialProfile:(id)arg0 withCompletion:(id)arg1 ;
-(void)contactMatchesWithContact:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithContactIdentifier:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithContactIdentifiers:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithFullTextSearch:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contactMatchesWithMessagingPrefix:(id)arg0 limitTo:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)contentAdmissionBlocklistDidChange:(id)arg0 ;
-(void)daemonExitWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteCloudKitZoneWithCompletion:(id)arg0 ;
-(void)deleteEventByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 completion:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 groupIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 identifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 domainIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)emailAddressIsSignificant:(id)arg0 withCompletion:(id)arg1 ;
-(void)enqueueSearchableItems:(id)arg0 completion:(id)arg1 ;
-(void)evaluateRecipe:(id)arg0 attachments:(id)arg1 completion:(id)arg2 ;
-(void)eventFromRecordId:(id)arg0 withCompletion:(id)arg1 ;
-(void)eventFromUniqueId:(id)arg0 completion:(id)arg1 ;
-(void)eventsInFutureLimitTo:(NSUInteger)arg0 options:(unsigned int)arg1 withCompletion:(id)arg2 ;
-(void)eventsStartingAt:(id)arg0 endingAt:(id)arg1 limitTo:(NSUInteger)arg2 options:(unsigned int)arg3 withCompletion:(id)arg4 ;
-(void)eventsStartingAt:(id)arg0 endingAt:(id)arg1 prefix:(id)arg2 limitTo:(NSUInteger)arg3 options:(unsigned int)arg4 withCompletion:(id)arg5 ;
-(void)foundInStringForRecordId:(id)arg0 style:(unsigned char)arg1 withCompletion:(id)arg2 ;
-(void)fullDownloadRequestBatch:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)geocodeEnrichmentsInPipelineEntity:(id)arg0 withCompletion:(id)arg1 ;
-(void)harvestedSuggestionsFromMessage:(id)arg0 bundleIdentifier:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)harvestedSuggestionsFromMessage:(id)arg0 bundleIdentifier:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)harvestedSuggestionsFromMessages:(id)arg0 bundleIdentifier:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 attributes:(id)arg2 toRecipients:(id)arg3 ccRecipients:(id)arg4 bccRecipients:(id)arg5 originalToRecipients:(id)arg6 originalCcRecipients:(id)arg7 attachments:(id)arg8 withCompletion:(id)arg9 ;
-(void)identifyComposeWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 withCompletion:(id)arg8 ;
-(void)identifyFollowUpWarningFromSubject:(id)arg0 body:(id)arg1 date:(id)arg2 withCompletion:(id)arg3 ;
-(void)identifyFollowUpWarningFromSubject:(id)arg0 content:(id)arg1 withCompletion:(id)arg2 ;
-(void)identifyWarningsFromSubject:(id)arg0 content:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 originalToRecipients:(id)arg5 originalCcRecipients:(id)arg6 attachments:(id)arg7 withCompletion:(id)arg8 ;
-(void)ipsosMessagesFromSearchableItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)isEnabledWithCompletion:(id)arg0 ;
-(void)isEventCandidateForURL:(id)arg0 andTitle:(id)arg1 containsSchemaOrg:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)isEventCandidateForURL:(id)arg0 title:(id)arg1 withCompletion:(id)arg2 ;
-(void)keepDirty:(BOOL)arg0 ;
-(void)lastFollowUpWarningResultsWithLimit:(NSUInteger)arg0 includingResultsFromPreviousCall:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg0 completion:(id)arg1 ;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg0 sourceURL:(id)arg1 clientLocale:(id)arg2 ignoreUserActivitySupport:(BOOL)arg3 ignoreMailCheck:(BOOL)arg4 completion:(id)arg5 ;
-(void)logEventInteractionForEntity:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEventWithExternalIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEventWithUniqueKey:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForRealtimeEvent:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logMetricAutocompleteResult:(int)arg0 recordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricAutocompleteUserSelectedRecordId:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricContactCreated:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricContactSearchResult:(int)arg0 recordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricContactSearchResultSelected:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg0 ;
-(void)logMetricSuggestedContactDetailShown:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logMetricSuggestedContactDetailUsed:(id)arg0 contactIdentifier:(id)arg1 bundleId:(id)arg2 ;
-(void)logSuggestionInteractionForRecordId:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logUnknownContactInformationShownCount:(NSUInteger)arg0 notShownCount:(NSUInteger)arg1 bundleId:(id)arg2 ;
-(void)logUserCreatedReminderTitle:(id)arg0 withCompletion:(id)arg1 ;
-(void)messagesToRefreshWithCompletion:(id)arg0 ;
-(void)namesForDetail:(id)arg0 limitTo:(NSUInteger)arg1 prependMaybe:(BOOL)arg2 onlySignificant:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)namesForDetailCacheSnapshotsWithCompletion:(id)arg0 ;
-(void)noopWithCompletion:(id)arg0 ;
-(void)originFromRecordId:(id)arg0 completion:(id)arg1 ;
-(void)planReceivedFromServerWithPayload:(id)arg0 completion:(id)arg1 ;
-(void)powerStateWithCompletion:(id)arg0 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 completion:(id)arg5 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg0 ccAddresses:(id)arg1 fromAddress:(id)arg2 date:(CGFloat)arg3 bounds:(id)arg4 completion:(id)arg5 ;
-(void)prepareForRealtimeExtraction:(id)arg0 ;
-(void)preventUnsubscriptionOpportunitiesSuggestionsForField:(NSInteger)arg0 toValues:(id)arg1 withCompletion:(id)arg2 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 completion:(id)arg2 ;
// -(void)realtimeSuggestionsForMailOrMessageWithHash:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 completionDelivery:(unk)arg3 providedBy:(NSUInteger)arg4 searchableItem:(id)arg5 dissectIfNecessary:(unk)arg6 isTextMessage:(id)arg7  ;
-(void)realtimeSuggestionsFromURL:(id)arg0 title:(id)arg1 HTMLPayload:(id)arg2 extractionDate:(id)arg3 withCompletion:(id)arg4 ;
-(void)rebuildNamesForDetailCache:(id)arg0 ;
-(void)recentURLsWithLimit:(unsigned int)arg0 withCompletion:(id)arg1 ;
-(void)registerForCoreSpotlightIndexing;
-(void)registerForProactiveHarvesting;
-(void)registerURLFeedback:(unsigned char)arg0 absoluteURL:(id)arg1 withCompletion:(id)arg2 ;
-(void)rejectContact:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)rejectContactDetailRecord:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)rejectEvent:(id)arg0 completion:(id)arg1 ;
-(void)rejectEventByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)rejectRealtimeReminder:(id)arg0 completion:(id)arg1 ;
-(void)rejectRecord:(id)arg0 confirmRejectUI:(int)arg1 completion:(id)arg2 ;
-(void)rejectReminderByRecordId:(id)arg0 completion:(id)arg1 ;
-(void)reminderAlarmTriggeredForRecordId:(id)arg0 completion:(id)arg1 ;
-(void)reminderTitleForContent:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeAllStoredPseudoContactsWithCompletion:(id)arg0 ;
-(void)reportMailIntelligenceFollowUpUserEngagement:(NSInteger)arg0 forNSDataFromFollowUpWarning:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportMailIntelligenceFollowUpUserEngagement:(NSInteger)arg0 forStringFromFollowUpWarning:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportMessagesFound:(id)arg0 lost:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportUserEngagement:(BOOL)arg0 forWarning:(id)arg1 withCompletion:(id)arg2 ;
-(void)reportValue:(BOOL)arg0 forFeatureSetting:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)resetConfirmationAndRejectionHistory:(id)arg0 ;
-(void)resolveFullDownloadRequests:(id)arg0 withCompletion:(id)arg1 ;
-(void)saliencyFromEmailHeaders:(id)arg0 withCompletion:(id)arg1 ;
-(void)saliencyFromRFC822Data:(id)arg0 withCompletion:(id)arg1 ;
-(void)schemaOrgToEvents:(id)arg0 completion:(id)arg1 ;
-(void)sendRTCLogsWithCompletion:(id)arg0 ;
-(void)setLastSuggestionsFromMessageRequest:(id)arg0 ;
-(void)setLastSuggestionsFromMessageResponse:(id)arg0 ;
-(void)setupManagerWithConnection:(id)arg0 store:(id)arg1 ctsManager:(id)arg2 ekStoreProvider:(id)arg3 contactStore:(id)arg4 pet2Tracker:(id)arg5 ;
-(void)sleepWithCompletion:(id)arg0 ;
-(void)sortedSaliencyResultsRestrictedToMailboxTypes:(id)arg0 mailboxIds:(id)arg1 receivedOnOrAfter:(id)arg2 ascending:(BOOL)arg3 limit:(NSUInteger)arg4 withCompletion:(id)arg5 ;
-(void)sortedUnsubscriptionOpportunitiesForField:(NSInteger)arg0 limit:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)sortedUnsubscriptionOpportunitiesForField:(NSInteger)arg0 minCount:(NSUInteger)arg1 minScore:(CGFloat)arg2 limit:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)spotlightReimportFromIdentifier:(id)arg0 forPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(id)arg4 ;
-(void)suggestionsFromEmailContent:(id)arg0 headers:(id)arg1 source:(id)arg2 options:(NSUInteger)arg3 withCompletion:(id)arg4 ;
// -(void)suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 completionDelivery:(NSUInteger)arg2 completionHandler:(id)arg3 fullCompletionHandler:(unk)arg4  ;
-(void)suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 fullCompletionHandler:(id)arg2 ;
-(void)suggestionsFromRFC822Data:(id)arg0 source:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)suggestionsFromSearchableItem:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)suggestionsFromSimpleMailMessage:(id)arg0 headers:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)suggestionsFromURL:(id)arg0 title:(id)arg1 HTMLPayload:(id)arg2 withCompletion:(id)arg3 ;
-(void)topSalienciesForMailboxId:(id)arg0 limit:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateMessages:(id)arg0 state:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 containingSubstring:(id)arg3 flagFilter:(unsigned char)arg4 limit:(unsigned int)arg5 withCompletion:(id)arg6 ;
-(void)urlsFoundBetweenStartDate:(id)arg0 endDate:(id)arg1 excludingBundleIdentifiers:(id)arg2 limit:(unsigned int)arg3 withCompletion:(id)arg4 ;
-(void)waitForEventWithIdentifier:(id)arg0 toAppearInEventStoreWithLastModificationDate:(id)arg1 completion:(id)arg2 ;


@end


#endif