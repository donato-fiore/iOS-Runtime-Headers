// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCORESPOTLIGHTINDEXER_H
#define SPCORESPOTLIGHTINDEXER_H

@class NSMutableSet, NSSet, NSString, NSArray, NSDictionary, NSURL;
@protocol UMUserPersonaUpdateObserver, MDIndexer, OS_dispatch_queue, NSObject, CSIndexExtensionDelegate, SPCoreSpotlightIndexerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SPCoreSpotlightInteractionHandler.h"
#import "SPCoreSpotlightTask.h"

@interface SPCoreSpotlightIndexer : NSObject <UMUserPersonaUpdateObserver, MDIndexer>

 {
    int cancelFlags;
    CGFloat _lastUpdateTime;
    NSMutableSet *_bundlesWithIndexedCoreSpotlightItems;
    NSSet *_bundlesWithRemoteSearchSupport;
    NSObject<OS_dispatch_queue> *_appScopingQueue;
    NSString *_serviceName;
    NSArray *_reindexIndexers;
}


@property (retain) NSDictionary *concreteIndexers; // ivar: _concreteIndexers
@property (retain, nonatomic) NSSet *dataMigrationBundleIDs; // ivar: _dataMigrationBundleIDs
@property (retain, nonatomic) NSObject<NSObject> *dataMigrationFinishObserver; // ivar: _dataMigrationFinishObserver
@property (nonatomic) NSUInteger dataMigrationStage; // ivar: _dataMigrationStage
@property (retain, nonatomic) NSObject<NSObject> *dataMigrationStartObserver; // ivar: _dataMigrationStartObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<CSIndexExtensionDelegate> *extensionDelegate; // ivar: extensionDelegate
@property (readonly, nonatomic) NSDictionary *fileProviderAppToExtensionBundleMap; // ivar: _fileProviderAppToExtensionBundleMap
@property (readonly, nonatomic) NSDictionary *fileProviderExtensionToAppBundleMap; // ivar: _fileProviderExtensionToAppBundleMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // ivar: _firstUnlockQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // ivar: _indexQueue
@property (weak) NSObject<SPCoreSpotlightIndexerDelegate> *indexerDelegate; // ivar: _indexerDelegate
@property (retain, nonatomic) SPCoreSpotlightInteractionHandler *interactionHandler; // ivar: _interactionHandler
@property (retain, nonatomic) NSMutableSet *knownPersonas; // ivar: _knownPersonas
@property (readonly) NSURL *personaListURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *personaQueue; // ivar: _personaQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *prefsChangeSource; // ivar: _prefsChangeSource
@property (retain, nonatomic) NSSet *prefsDisabledBundleIDs; // ivar: _prefsDisabledBundleIDs
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsSource; // ivar: _reindexAllItemsSource
@property (retain) SPCoreSpotlightTask *reindexAllItemsTask; // ivar: _reindexAllItemsTask
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsWithIdentifiersSource; // ivar: _reindexAllItemsWithIdentifiersSource
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reindexAllQueue; // ivar: _reindexAllQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transactionCount; // ivar: _transactionCount
@property (nonatomic) BOOL updatePersonas; // ivar: _updatePersonas


+(BOOL)writeDiagnostic:(id)arg0 bundleID:(id)arg1 identifier:(id)arg2 ;
+(id)_filterReindexAllExtensions:(id)arg0 ;
+(id)_mergedTokenRewrites:(id)arg0 ;
+(id)allProtectionClasses;
+(id)sharedInstance;
+(id)sharedInstanceWithDelegate:(id)arg0 ;
+(void)cooldown;
+(void)deactivate;
+(void)initialize;
+(void)preheat;
+(void)setMemoryPressureStatus:(NSUInteger)arg0 ;
+(void)setPrivate:(BOOL)arg0 ;
+(void)shrink:(NSUInteger)arg0 ;
+(void)shutdown;
+(void)sync;
+(void)unlock;
-(BOOL)writeData:(id)arg0 toFile:(id)arg1 ;
-(CGFloat)lastUpdateTime;
// -(id)_startQueryWithQueryString:(id)arg0 queryContext:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3 completionHandler:(id)arg4  ;
// -(id)_taskForQueryWithQueryString:(id)arg0 queryContext:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3 completionHandler:(id)arg4  ;
-(id)delegateServiceName;
-(id)indexServiceName;
-(id)initWithDelegate:(id)arg0 ;
-(id)queryForWord:(id)arg0 matchingAttributes:(id)arg1 prefixMatch:(BOOL)arg2 ;
-(id)searchServiceName;
// -(id)startQuery:(id)arg0 withContext:(id)arg1 eventHandler:(id)arg2 handler:(unk)arg3  ;
-(id)startQuery:(id)arg0 withContext:(id)arg1 handler:(id)arg2 ;
// -(id)startQueryWithQueryString:(id)arg0 queryContext:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3 completionHandler:(id)arg4  ;
// -(id)taskForQueryWithQueryString:(id)arg0 queryContext:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3 completionHandler:(id)arg4  ;
// -(id)taskForTopHitQueryWithQueryString:(id)arg0 queryContext:(id)arg1 eventHandler:(id)arg2 resultsHandler:(unk)arg3 completionHandler:(id)arg4  ;
-(int)_openIndex:(BOOL)arg0 ;
-(int)openIndex:(BOOL)arg0 ;
-(void)_closeIndexWithIndexers:(id)arg0 ;
-(void)_enumerateIndexersWithBlock:(id)arg0 ;
-(void)_enumerateIndexersWithProtectionClasses:(id)arg0 block:(id)arg1 ;
-(void)_fetchAccumulatedStorageSizeForBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)_issueCommand:(id)arg0 searchContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_migrateIndexExtensionsWithEnumerator:(id)arg0 forced:(BOOL)arg1 migratedBundleIds:(id)arg2 completionHandler:(id)arg3 ;
-(void)_registerForPrefsChanges;
-(void)_reindexAllIdentifiersWithExtension:(id)arg0 completionBlock:(id)arg1 ;
-(void)_reindexAllItemsForBundleIDs:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)_reindexAllItemsOnPrefsChanges;
-(void)_reindexAllItemsWithExtensionsAndCompletionBlock:(id)arg0 ;
-(void)_reindexAllItemsWithExtensionsAndIdentifiersAndCompletionBlock:(id)arg0 ;
-(void)addCompletedBundleIDs:(id)arg0 forIndexerTask:(id)arg1 ;
-(void)addInteraction:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)cancelQuery:(id)arg0 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 forUTIType:(id)arg4 options:(NSInteger)arg5 ;
-(void)checkIfExtensionsNeedToBeLoaded;
-(void)cleanupStringsWithProtectionClasses:(id)arg0 completionHandler:(id)arg1 ;
-(void)clientDidCheckin:(id)arg0 protectionClass:(id)arg1 service:(id)arg2 completionHandler:(id)arg3 ;
-(void)closeIndex;
-(void)commitUpdates;
-(void)commitUpdatesWithCompletionHandler:(id)arg0 ;
-(void)coolDown;
-(void)dealloc;
-(void)deleteActionsBeforeTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)deleteActionsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg0 protectionClass:(id)arg1 shouldGC:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg0 forBundleID:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllUserActivities:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsWithPersonaIds:(id)arg0 completionHandler:(id)arg1 ;
-(void)extensionsChanged:(id)arg0 ;
-(void)fetchAttributes:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 qos:(unsigned int)arg5 completionHandler:(id)arg6 ;
-(void)fetchAttributesForProtectionClass:(id)arg0 attributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 completion:(id)arg4 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg0 forBundleID:(id)arg1 clientStateName:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)fileProviderInfoSetup;
-(void)flush;
-(void)getDBLogsWithCompletionHandler:(id)arg0 ;
-(void)handleRankingCommand:(id)arg0 completion:(id)arg1 ;
-(void)indexFromBundle:(id)arg0 protectionClass:(id)arg1 personaID:(id)arg2 options:(NSInteger)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(id)arg10 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 clientStateName:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 options:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)issueCleanup:(id)arg0 flags:(int)arg1 ;
-(void)issueConsistencyCheck:(id)arg0 ;
-(void)issueDefrag:(id)arg0 group:(id)arg1 ;
-(void)issueDumpForward:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)issueDumpReverse:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)issueDuplicateOidCheck:(id)arg0 ;
-(void)issueDuplicateOidCheckWithGroup:(id)arg0 protected:(BOOL)arg1 ;
-(void)issueEntitledAttributesScan:(id)arg0 ;
-(void)issueMessagesFixup:(id)arg0 ;
-(void)issuePathFixup:(id)arg0 ;
-(void)issueRepair:(id)arg0 ;
-(void)issueResolveFPItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)issueResolveFPItemForBundle:(id)arg0 domain:(id)arg1 identifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)issueResolveFPItemForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)issueSplit:(id)arg0 ;
-(void)locked;
-(void)locking;
-(void)mergeWithProtectionClasses:(id)arg0 completionHandler:(id)arg1 ;
-(void)mergeWithProtectionClasses:(id)arg0 power:(BOOL)arg1 ;
-(void)mergeWithProtectionClasses:(id)arg0 power:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)migrateForced:(BOOL)arg0 ;
-(void)performIndexerTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)performIndexerTask:(id)arg0 withIndexExtensionsAndCompletionHandler:(id)arg1 ;
-(void)personaListDidUpdate;
-(void)powerStateChanged;
-(void)preheat;
-(void)provideDataForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)provideFileURLForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)queryPreheat:(id)arg0 ;
-(void)recordEngagementForBundleID:(id)arg0 uniqueIdentifier:(id)arg1 protectionClass:(id)arg2 userQuery:(id)arg3 date:(id)arg4 ;
-(void)reindexAllItemsWithIndexers:(id)arg0 completionHandler:(id)arg1 ;
-(void)resume;
-(void)revokeExpiredItems:(id)arg0 protected:(BOOL)arg1 ;
-(void)rewriteQueryWithQueryString:(id)arg0 context:(id)arg1 matchInfo:(id)arg2 rewriteHandler:(id)arg3 ;
-(void)runMigration;
-(void)setServiceName:(id)arg0 ;
-(void)shrink:(NSUInteger)arg0 ;
-(void)shutdown;
-(void)start;
-(void)startQueryTask:(id)arg0 ;
-(void)topKTerms:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlock;
-(void)userPerformedAction:(id)arg0 withItem:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 personaID:(id)arg4 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)writeFileProviderBundleMap:(id)arg0 ;


@end


#endif