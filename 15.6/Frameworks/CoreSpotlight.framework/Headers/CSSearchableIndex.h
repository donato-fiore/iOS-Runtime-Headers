// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSEARCHABLEINDEX_H
#define CSSEARCHABLEINDEX_H

@class NSMutableArray, NSString, NSNumber;
@protocol OS_dispatch_queue, CSSearchableIndexDelegate;

#import <Foundation/Foundation.h>

#import "CSIndexingQueue.h"
#import "CSIndexConnection.h"

@interface CSSearchableIndex : NSObject {
    CSIndexingQueue *_activityQueue;
}


@property (readonly, nonatomic) CSIndexingQueue *activityQueue;
@property (nonatomic) BOOL batchOpen; // ivar: _batchOpen
@property (retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete; // ivar: _batchedItemIdentifiersToDelete
@property (retain, nonatomic) NSMutableArray *batchedItemsToIndex; // ivar: _batchedItemsToIndex
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) CSIndexConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (weak) NSObject<CSSearchableIndexDelegate> *indexDelegate; // ivar: _indexDelegate
@property (readonly, nonatomic) NSNumber *indexID; // ivar: _indexID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL noBatching; // ivar: _noBatching
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) NSString *protectionClass; // ivar: _protectionClass


+(BOOL)activityShouldBeIndexed:(id)arg0 bundleID:(id)arg1 ;
+(BOOL)isIndexingAvailable;
+(CGFloat)lastUpdateTime;
+(id)codedIdentifiers:(id)arg0 ;
+(id)codedNSUAPersistentIdentifiers:(id)arg0 ;
+(id)codedUniqueIdentifiers:(id)arg0 ;
+(id)computePartialPathWithOID:(id)arg0 pathKeyIdx:(NSUInteger)arg1 pathDictionary:(id)arg2 attributeValues:(id)arg3 depth:(NSInteger)arg4 ;
+(id)defaultSearchableIndex;
+(id)mainBundleID;
+(id)mainBundleLocalizedString;
+(id)partialPathAttributes;
+(void)_setLastUpdateTime;
+(void)initialize;
+(void)notifyIndexDelegates;
+(void)volumeMountedAtURL:(id)arg0 withOptions:(id)arg1 ;
-(NSInteger)_standardizeItems:(id)arg0 ;
-(id)_initWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 options:(NSInteger)arg3 ;
-(id)_initWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 options:(NSInteger)arg3 disableBatching:(BOOL)arg4 ;
-(id)_itemsBySanitizingItemsForSpotlight:(id)arg0 ;
-(id)_validateClientState:(id)arg0 ;
-(id)_validateOperation;
-(id)_validateOperationWithIdentifiers:(id)arg0 ;
-(id)_validateOperationWithItems:(id)arg0 ;
-(id)_validateOperationWithItems:(id)arg0 identifiers:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 protectionClass:(id)arg1 ;
-(id)initWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)requestQueue;
-(id)throttleQueue;
-(id)xpc_dictionary_for_command:(char *)arg0 requiresInitialization:(BOOL)arg1 ;
-(void)_bulkFetchPartialPathsForObjects:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)_changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 forUser:(unsigned int)arg2 forBundleID:(id)arg3 forUTIType:(id)arg4 ;
-(void)_commonInit;
-(void)_delegateCheckIn:(id)arg0 ;
-(void)_deleleActionsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)_deleteActionsBeforeTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)_fetchAttributes:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 items:(id)arg3 includeParents:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)_indexActivities:(id)arg0 flush:(BOOL)arg1 ;
-(void)_issueCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)_issueNonLaunchingCommand:(id)arg0 ;
-(void)_makeActivityQueueIfNecessary;
-(void)_setFPAttributes:(id)arg0 ;
-(void)_setMailMessageAttributes:(id)arg0 ;
-(void)addInteraction:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(id)arg3 ;
-(void)addInteraction:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginIndexBatch;
-(void)bulkFetchAttributes:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 objects:(id)arg3 attributeKeyIndex:(NSInteger)arg4 includeParents:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteAllInteractionsWithCompletionHandler:(id)arg0 ;
-(void)deleteAllSearchableItemsForBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg0 forBundleID:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllUserActivities:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)donateRelevantActions:(id)arg0 bundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)donateRelevantShortcuts:(id)arg0 bundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)endIndexBatchWithClientState:(id)arg0 completionHandler:(id)arg1 ;
-(void)endIndexBatchWithClientState:(id)arg0 critical:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchLastClientStateWithCompletionHandler:(id)arg0 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg0 forBundleID:(id)arg1 clientStateName:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)flushUserActivities;
-(void)indexSearchableItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 clientStateName:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 completionHandler:(id)arg3 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 options:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)indexSearchableItems:(id)arg0 returningItemsSanitizedForSpotlightTo:(id)arg1 ;
-(void)indexUserActivity:(id)arg0 ;
-(void)performDataMigrationWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)performIndexJob:(id)arg0 protectionClass:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)provideDataForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)provideDataForBundle:(id)arg0 itemIdentifier:(id)arg1 typeIdentifier:(id)arg2 allowDownload:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)provideDataForBundle:(id)arg0 itemIdentifier:(id)arg1 typeIdentifier:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)provideFileURLForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)provideFileURLForBundle:(id)arg0 itemIdentifier:(id)arg1 typeIdentifier:(id)arg2 inPlace:(BOOL)arg3 allowDownload:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)provideFileURLForBundle:(id)arg0 itemIdentifier:(id)arg1 typeIdentifier:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)provideFileURLsForBundle:(id)arg0 itemIdentifiers:(id)arg1 typeIdentifier:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)slowFetchAttributes:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 completionHandler:(id)arg4 ;
-(void)throttle;
-(void)unthrottle;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif