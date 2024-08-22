// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIDATABASE_H
#define PSIDATABASE_H

@class NSDictionary, NSMutableString, NSMutableArray, NSString;
@protocol PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PSIIntArray.h"
#import "PSIWordEmbeddingTable.h"
#import "PSIStatement.h"
#import "PSITokenizer.h"

@interface PSIDatabase : NSObject <PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate>

 {
    *sqlite3 _inqDatabase;
    BOOL _databaseIsValid;
    *__CFDictionary _inqPreparedStatements;
    PSIIntArray *_matchingIds;
    PSIWordEmbeddingTable *_inqWordEmbeddingTable;
    PSIStatement *_assetUUIDByAssetIdWithAssetIdsStatement;
    PSIStatement *_collectionResultByCollectionIdWithCollectionIdsStatement;
    PSIStatement *_inqAssetIdsByGroupIdForAssetIdsStatement;
    PSIStatement *_inqCollectionIdsByGroupIdForCollectionIdsStatement;
    PSIStatement *_inqNumberOfAssetsMatchingGroupWithIdStatement;
    PSIStatement *_inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement *_inqNumberOfCollectionsMatchingGroupWithIdStatement;
    PSIStatement *_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement *_inqIdsOfAllGroupsStatement;
    PSIStatement *_inqIdsOfAllGroupsInPrefixStatement;
    PSIStatement *_inqIdsOfAllGroupsInLookupStatement;
    PSIStatement *_inqRemoveGroupsFromLookupStatement;
    *__CFDictionary _inqGroupObjectsById;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
    NSDictionary *_inqSearchMetadata;
    PSITokenizer *_tokenizer;
    NSMutableString *_tokenizerOutputString;
    NSMutableArray *_tokenizerOutputTokens;
    NSMutableArray *_tokenizerOutputNormalizedTokens;
    ? _tokenizerOutputRanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) PSITokenizer *tokenizer;


+(BOOL)_integrityCheckDatabase:(struct sqlite3 *)arg0 ;
+(id)searchDatabaseLog;
+(struct sqlite3 *)_openDatabaseAtPath:(id)arg0 options:(NSInteger)arg1 ;
+(void)_dropDatabase:(struct sqlite3 *)arg0 withCompletion:(id)arg1 ;
+(void)dropDatabaseAtPath:(id)arg0 withCompletion:(id)arg1 ;
-(?)_inqGetTokensFromString:(?)arg0 categorytokenOutput;
-(?)_inqGroupIdForCategory:(?)arg0 owningGroupId:(?)arg1 contentString:(?)arg2 normalizedString:(?)arg3 identifier:(?)arg4 insertIfNeeded:(?)arg5 tokenOutput:(?)arg6 shouldUpdateOwningGroupIddidUpdateGroup;
-(?)_prepareTokenOutputforIndexing;
-(BOOL)assetExistsWithUUID:(id)arg0 ;
-(BOOL)isDatabaseCorrupted;
-(BOOL)isLookupTableOutOfSync;
-(CGFloat)_scoreForUserCategory:(NSUInteger)arg0 ;
-(NSInteger)insertAsset:(id)arg0 ;
-(NSInteger)insertCollection:(id)arg0 ;
-(NSInteger)insertGroup:(id)arg0 ;
-(NSInteger)lastInsertedRowID;
-(NSUInteger)_inqAssetIdForUUID:(id)arg0 ;
-(NSUInteger)_inqAssetIdForUUID:(id)arg0 uuid_0:(*NSUInteger)arg1 uuid_1:(*NSUInteger)arg2 ;
-(NSUInteger)_inqAssetIdWithAsset:(id)arg0 ;
-(NSUInteger)_inqCollectionIdForUUID:(id)arg0 ;
-(NSUInteger)_inqCollectionIdForUUID:(id)arg0 uuid_0:(*NSUInteger)arg1 uuid_1:(*NSUInteger)arg2 ;
-(NSUInteger)_inqCollectionIdWithCollection:(id)arg0 ;
-(NSUInteger)_inqNumberOfAssetsMatchingGroupWithId:(NSUInteger)arg0 ;
-(NSUInteger)_inqNumberOfCollectionsMatchingGroupWithId:(NSUInteger)arg0 ;
-(NSUInteger)_inqUpdateGroupForText:(id)arg0 identifier:(id)arg1 category:(short)arg2 owningGroupId:(NSUInteger)arg3 didUpdateGroup:(*BOOL)arg4 ;
-(NSUInteger)_inqUpdateGroupForText:(id)arg0 normalizedText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(NSUInteger)arg4 shouldUpdateOwningGroupId:(BOOL)arg5 didUpdateGroup:(*BOOL)arg6 ;
-(NSUInteger)updateGroupForText:(id)arg0 identifier:(id)arg1 category:(short)arg2 owningGroupId:(NSUInteger)arg3 didUpdateGroup:(*BOOL)arg4 ;
-(id)_inqAssetIdsByGroupIdForAssetIds:(id)arg0 ;
-(id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg0 ;
-(id)_inqAssetUUIDsForAssetIds:(struct __CFArray *)arg0 range:(struct _NSRange )arg1 creationDateSorted:(BOOL)arg2 ;
-(id)_inqAssetUUIDsForAssetIds:(struct __CFSet *)arg0 ;
-(id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg0 ;
-(id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg0 ;
-(id)_inqCollectionResultsForCollectionIds:(struct __CFArray *)arg0 range:(struct _NSRange )arg1 ;
-(id)_inqContentStringForGroupId:(NSUInteger)arg0 ;
-(id)_inqDequeueGroupObjectWithId:(NSUInteger)arg0 isCachedGroup:(*BOOL)arg1 ;
-(id)_inqFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg0 dateFilter:(id)arg1 matchingPredicateBlock:(id)arg2 ;
-(id)_inqGroupArraysFromGroupIdSets:(id)arg0 dateFilter:(id)arg1 progressBlock:(id)arg2 ;
-(id)_inqGroupResultWithDateFilter:(id)arg0 datedTokens:(id)arg1 ;
-(id)_inqGroupWithFilenameStatement:(struct sqlite3_stmt *)arg0 dateFilter:(id)arg1 excludingGroupId:(NSUInteger)arg2 ;
-(id)_inqGroupWithMatchingGroupId:(NSUInteger)arg0 dateFilter:(id)arg1 ;
-(id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg0 dateFilter:(id)arg1 includeObjects:(BOOL)arg2 ;
-(id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg0 dateFilter:(id)arg1 includeObjects:(BOOL)arg2 isFilenameStatement:(BOOL)arg3 excludingGroupId:(NSUInteger)arg4 ;
-(id)_inqGroupsWithMatchingGroupIds:(struct __CFSet *)arg0 dateFilter:(id)arg1 includeObjects:(BOOL)arg2 matchingPredicateBlock:(id)arg3 ;
-(id)_inqNewSynonymTextsByOwningGroupIdWithGroupIds:(struct __CFSet *)arg0 ;
-(id)_inqNonFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg0 dateFilter:(id)arg1 includeObjects:(BOOL)arg2 matchingPredicateBlock:(id)arg3 ;
-(id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg0 ;
-(id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg0 ;
-(id)_inqOwningContentStringForGroupResult:(id)arg0 ;
-(id)allAssetUUIDsForGroupsWithCategories:(id)arg0 ;
-(id)allCollectionUUIDsWithCollectionType:(NSUInteger)arg0 ;
-(id)allGroupIds;
-(id)assetUUIDByAssetIdWithAssetIds:(id)arg0 ;
-(id)collectionResultByCollectionIdWithCollectionIds:(id)arg0 ;
-(id)dumpLookupStringsWithIndexCategories:(id)arg0 ;
-(id)dumpPrefixStrings;
-(id)dumpPrefixStringsForAssetUUID:(id)arg0 ;
-(id)groupArraysFromGroupIdSets:(id)arg0 dateFilter:(id)arg1 progressBlock:(id)arg2 ;
-(id)groupIdsInLookupTable;
-(id)groupIdsInPrefixTable;
-(id)groupResultWithDateFilter:(id)arg0 datedTokens:(id)arg1 ;
-(id)groupWithMatchingGroupId:(NSUInteger)arg0 dateFilter:(id)arg1 ;
-(id)initWithPath:(id)arg0 options:(NSInteger)arg1 searchMetadata:(id)arg2 ;
-(id)meNodeIdentifier;
-(id)newQueryWithSearchText:(id)arg0 ;
-(id)newQueryWithSearchText:(id)arg0 identifiers:(id)arg1 useWildcardSearchText:(BOOL)arg2 ;
-(id)newQueryWithSearchText:(id)arg0 queryTokens:(id)arg1 useWildcardSearchText:(BOOL)arg2 ;
-(id)newQueryWithSearchText:(id)arg0 representedObjects:(id)arg1 useWildcardSearchText:(BOOL)arg2 ;
-(id)statementFromString:(id)arg0 ;
-(id)suggestionWhitelistedScenes;
-(id)wordEmbeddingMatchesForToken:(id)arg0 ;
-(id)wordEmbeddingVersion;
-(struct __CFArray *)_inqNewAssetIdsForGroupId:(NSUInteger)arg0 dateFilter:(id)arg1 ;
-(struct __CFArray *)_inqNewAssetIdsWithDateFilter:(id)arg0 ;
-(struct __CFArray *)_inqNewCollectionIdsForGroupId:(NSUInteger)arg0 dateFilter:(id)arg1 ;
-(struct __CFArray *)_inqNewCollectionIdsWithDateFilter:(id)arg0 ;
-(struct __CFSet *)_inqNewGroupIdsForAssetId:(NSUInteger)arg0 ;
-(struct __CFSet *)_inqNewGroupIdsForAssetIds:(struct __CFSet *)arg0 ;
-(struct __CFSet *)_inqNewGroupIdsForCollectionId:(NSUInteger)arg0 ;
-(struct __CFSet *)_inqNewGroupIdsForCollectionIds:(struct __CFSet *)arg0 ;
-(struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg0 categories:(id)arg1 textIsSearchable:(BOOL)arg2 ;
-(struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg0 textIsSearchable:(BOOL)arg1 ;
-(struct __CFSet *)_inqNewGroupIdsWithCategories:(id)arg0 ;
-(struct __CFSet *)groupIdsMatchingString:(id)arg0 categories:(id)arg1 textIsSearchable:(BOOL)arg2 ;
-(struct sqlite3 *)databaseConnection;
-(struct sqlite3_stmt *)_inqPrepareStatement:(char *)arg0 ;
-(void)_executeQuery:(id)arg0 resultsHandler:(id)arg1 ;
-(void)_finalizeEverything;
-(void)_inSearchQueueAsync:(id)arg0 ;
-(void)_ingRebuildPrefixTableIfNeeded;
-(void)_inqAddToLookupTableWithGroupId:(NSUInteger)arg0 text:(id)arg1 category:(short)arg2 ;
-(void)_inqAsync:(id)arg0 ;
-(void)_inqDeleteFromLookupTableWithGroupId:(NSUInteger)arg0 ;
-(void)_inqDeleteGroupsWithGraphCollectionsForPersonUUID:(id)arg0 ;
-(void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg0 allowError:(int)arg1 withStatementBlock:(id)arg2 ;
-(void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg0 withStatementBlock:(id)arg1 ;
-(void)_inqPerformBatch:(id)arg0 ;
-(void)_inqPrepareAndExecuteStatement:(char *)arg0 ;
-(void)_inqRecycleGroups;
-(void)_inqRemoveUUID:(id)arg0 objectType:(NSUInteger)arg1 isInBatch:(BOOL)arg2 ;
-(void)_inqRemoveUnusedGroups;
-(void)_inqSync:(id)arg0 ;
-(void)_inqUpdateGATableWithGroupId:(NSUInteger)arg0 assetId:(NSUInteger)arg1 ;
-(void)_inqUpdateGCTableWithGroupId:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 ;
-(void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg0 ;
-(void)_processNextKeywordSuggestionsForQuery:(id)arg0 groupResults:(id)arg1 allowIdentifiers:(BOOL)arg2 ;
-(void)_removeUUIDs:(id)arg0 objectType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)addAsset:(id)arg0 withCompletion:(id)arg1 ;
-(void)addAssets:(id)arg0 withCompletion:(id)arg1 ;
-(void)addCollection:(id)arg0 withCompletion:(id)arg1 ;
-(void)addCollections:(id)arg0 withCompletion:(id)arg1 ;
-(void)bindMatchingIds:(*NSInteger)arg0 numberOfMatchingIds:(NSUInteger)arg1 ;
-(void)bindMatchingIds:(struct __CFArray *)arg0 range:(struct _NSRange )arg1 ;
-(void)bindMatchingIds:(struct __CFSet *)arg0 ;
-(void)dealloc;
-(void)deleteFromLookupTableWithGroupId:(NSUInteger)arg0 ;
-(void)deleteGroupsWithGraphCollectionsForPersonUUIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)dropDatabaseWithCompletion:(id)arg0 ;
-(void)executeQuery:(id)arg0 resultsHandler:(id)arg1 ;
-(void)executeStatement:(id)arg0 ;
-(void)executeStatement:(id)arg0 withResultEnumerationBlock:(id)arg1 ;
-(void)executeStatementFromString:(id)arg0 ;
-(void)executeStatementFromString:(id)arg0 withResultEnumerationBlock:(id)arg1 ;
-(void)fetchAssetUUIDsForAssetIDs:(struct __CFArray *)arg0 creationDateSorted:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)group:(id)arg0 fetchOwningContentString:(BOOL)arg1 assetIdRange:(struct _NSRange )arg2 collectionIdRange:(struct _NSRange )arg3 completionHandler:(id)arg4 ;
-(void)linkAssetWithId:(NSInteger)arg0 toGroupWithId:(NSInteger)arg1 ;
-(void)linkCollectionWithId:(NSInteger)arg0 toGroupWithId:(NSInteger)arg1 ;
-(void)prepareForNumberOfMatchingIds:(NSUInteger)arg0 ;
-(void)removeAssetWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeAssetsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeCollectionWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeCollectionsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeUnusedGroups;
-(void)unbindMatchingIds;
-(void)unprepareMatchingIds;
-(void)updateSearchMetadata:(id)arg0 ;


@end


#endif