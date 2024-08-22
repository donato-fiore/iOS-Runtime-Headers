// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSEARCHQUERY_H
#define CSSEARCHQUERY_H

@class NSKnownKeysMappingStrategy, NSArray, NSMapTable, NSString;
@protocol MDSearchQueryResultProcessor, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSearchQueryContext.h"

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor>

 {
    NSUInteger _foundItemCount;
    short _requestedAttributeCount;
    short _attrInfo;
    BOOL _started;
    BOOL _finished;
    BOOL _cancelled;
    BOOL _gatherEnded;
    os_unfair_lock_s _liveItemLock;
    NSKnownKeysMappingStrategy *_mappingStrategy;
    *NSUInteger _attrKeys;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) id *changedAttributesHandler; // ivar: _changedAttributesHandler
@property (copy) id *changedItemsHandler; // ivar: _changedItemsHandler
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (copy) id *completionScoresHandler; // ivar: _completionScoresHandler
@property (copy) id *completionsHandler; // ivar: _completionsHandler
@property (copy) id *countChangedHandler; // ivar: _countChangedHandler
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (copy) id *foundAttributesHandler; // ivar: _foundAttributesHandler
@property (readonly) NSUInteger foundItemCount;
@property (copy) id *foundItemHandler; // ivar: _foundItemHandler
@property (copy) id *foundItemsHandler; // ivar: _foundItemsHandler
@property (copy) id *gatherEndedHandler; // ivar: _gatherEndedHandler
@property (copy) id *interruptedHandler; // ivar: _interruptedHandler
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString; // ivar: _liveIndexBundleIDToBundleString
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap; // ivar: _liveIndexBundleIDToIndexItemIDMap
@property (retain, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap; // ivar: _liveIndexUserFSOIDTOIdentifierMap
@property (retain, nonatomic) NSString *privateBundleID; // ivar: _privateBundleID
@property (nonatomic) BOOL privateIndex; // ivar: _privateIndex
@property (nonatomic) BOOL privateQuery; // ivar: _privateQuery
@property (copy) NSArray *protectionClasses;
@property (retain, nonatomic) CSSearchQueryContext *queryContext; // ivar: _queryContext
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy) id *removedItemsHandler; // ivar: _removedItemsHandler
@property (copy) id *resolvedAttributeNamesHandler; // ivar: _resolvedAttributeNamesHandler
@property (copy) id *restartGatherEndedHandler; // ivar: _restartGatherEndedHandler
@property (copy) id *restartedHandler; // ivar: _restartedHandler
@property (nonatomic) BOOL suspended; // ivar: _suspended
@property (nonatomic) BOOL userFSIndex; // ivar: _userFSIndex


+(id)_makeQueryErrorWithErrorCode:(NSInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 ;
+(void)initialize;
+(void)preheat:(id)arg0 ;
+(void)setConnectionName:(id)arg0 ;
+(void)userEngagedWithUniqueIdentifier:(id)arg0 bundleId:(id)arg1 forUserQuery:(id)arg2 interactionType:(int)arg3 ;
-(BOOL)addOrUpdateLiveOID:(NSInteger)arg0 bundleID:(id)arg1 identifier:(id)arg2 ;
-(BOOL)attribute;
-(BOOL)counting;
-(BOOL)grouped;
-(BOOL)internal;
-(BOOL)isTopHitQuery;
-(BOOL)live;
-(BOOL)removeLiveOID:(NSInteger)arg0 outBundleID:(*id)arg1 outIdentifier:(*id)arg2 ;
-(BOOL)removeUserFSLiveOID:(NSInteger)arg0 outBundleID:(*id)arg1 outIdentifier:(*id)arg2 ;
-(CGFloat)currentTime;
-(id)addOrUpdateUserFSLiveOID:(NSInteger)arg0 userFSDomain:(id)arg1 identifier:(id)arg2 ;
-(id)bundleIDs;
-(id)connection;
-(id)copyCSSearchableItemWithValues:(*id)arg0 valueCount:(NSUInteger)arg1 attrKeys:(*NSUInteger)arg2 protectionClass:(id)arg3 mappingStrategy:(id)arg4 attrInfo:(*short)arg5 requestedAttributeCount:(NSUInteger)arg6 unpackInfo:(struct CSUnpackInfo )arg7 userFSDomain:(id)arg8 ;
-(id)copyResultFromPlist:(id)arg0 protectionClass:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithQueryString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 options:(id)arg1 ;
-(id)options;
-(id)scopes;
-(void)_finishWithError:(id)arg0 ;
-(void)_removeIdentifiers:(id)arg0 withBundleID:(id)arg1 andQueryID:(NSInteger)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)didFinishWithError:(id)arg0 ;
-(void)didResolveFriendlyAttributeNames:(id)arg0 fromFetchAttributes:(id)arg1 ;
-(void)didReturnResults:(NSInteger)arg0 resultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleError:(id)arg0 ;
-(void)handleFoundAttributes:(id)arg0 values:(id)arg1 attributesHandler:(id)arg2 ;
-(void)handleFoundItems:(id)arg0 ;
-(void)processAttributesData:(id)arg0 update:(BOOL)arg1 protectionClass:(id)arg2 ;
-(void)processCompletionsResultsData:(id)arg0 protectionClass:(id)arg1 ;
-(void)processLiveResultsData:(id)arg0 oidData:(id)arg1 protectionClass:(id)arg2 ;
-(void)processRemoveResultsData:(id)arg0 protectionClass:(id)arg1 ;
-(void)processResultFromPlist:(id)arg0 atIndex:(NSUInteger)arg1 protectionClass:(id)arg2 oids:(*NSInteger)arg3 oidCount:(unsigned int)arg4 addItems:(*id)arg5 updateItems:(*id)arg6 moveItems:(*id)arg7 ;
-(void)processResultsData:(id)arg0 protectionClass:(id)arg1 ;
-(void)setBundleIDs:(id)arg0 ;
-(void)setScopes:(id)arg0 ;
-(void)setupFetchAttributesForSearch;
-(void)start;
-(void)userEngagedWithResult:(id)arg0 interactionType:(int)arg1 ;


@end


#endif