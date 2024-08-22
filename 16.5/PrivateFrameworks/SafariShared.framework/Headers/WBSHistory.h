// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORY_H
#define WBSHISTORY_H

@class NSMutableDictionary, NSCountedSet, NSArray, NSString, WBSHistoryTagMap;
@protocol WBSHistoryStoreDelegate, WBSHistoricalHighLevelDomainsProvider, OS_dispatch_queue, WBSHistoryStore;

#import <Foundation/Foundation.h>

#import "WBSHistoryActivityThrottler.h"

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate, WBSHistoricalHighLevelDomainsProvider>

 {
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    NSMutableDictionary *_entriesByURLString;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    BOOL _hasStartedLoadingHistory;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    id<WBSHistoryStore> *_historyStore;
    WBSHistoryActivityThrottler *_entryCreationThrottler;
}


@property (readonly) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAnyHistoryItems;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat historyAgeLimit; // ivar: _historyAgeLimit
@property (readonly, nonatomic) WBSHistoryTagMap *historyTagMap; // ivar: _historyTagMap
@property (readonly, nonatomic) NSUInteger numberOfHistoryItems;
@property (readonly, nonatomic) NSUInteger numberOfHistoryItemsOnHistoryQueue;
@property (readonly) Class superclass;


+(id)defaultHistoryDatabaseDirectoryURL;
+(id)existingSharedHistory;
+(id)historyDatabaseURL;
+(id)historyDatabaseWriteAheadLogURL;
+(id)historyPropertyListURL;
+(void)clearExistingSharedHistory;
-(BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)arg0 ;
-(BOOL)canRecordRedirectFromVisit:(id)arg0 to:(id)arg1 ;
-(BOOL)hasItemSince:(id)arg0 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg0 ;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(id)_removeItemForURLString:(id)arg0 ;
-(id)historyStore:(id)arg0 itemForURLString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)init;
-(id)itemForURL:(id)arg0 ;
-(id)itemForURLString:(id)arg0 ;
-(id)itemForURLString:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)itemRedirectedFrom:(id)arg0 to:(id)arg1 origin:(NSInteger)arg2 date:(id)arg3 ;
-(id)itemRedirectedFrom:(id)arg0 to:(id)arg1 origin:(NSInteger)arg2 date:(id)arg3 statusCode:(NSInteger)arg4 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 timeOfVisit:(CGFloat)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 origin:(NSInteger)arg6 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 timeOfVisit:(CGFloat)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 origin:(NSInteger)arg6 attributes:(NSUInteger)arg7 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 timeOfVisit:(CGFloat)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 statusCode:(NSInteger)arg6 origin:(NSInteger)arg7 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 timeOfVisit:(CGFloat)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 statusCode:(NSInteger)arg6 origin:(NSInteger)arg7 attributes:(NSUInteger)arg8 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 wasHTTPNonGet:(BOOL)arg2 wasFailure:(BOOL)arg3 increaseVisitCount:(BOOL)arg4 ;
-(id)itemVisitedAtURLString:(id)arg0 title:(id)arg1 wasHTTPNonGet:(BOOL)arg2 wasFailure:(BOOL)arg3 increaseVisitCount:(BOOL)arg4 statusCode:(NSInteger)arg5 ;
-(id)lastVisitForHighLevelDomain:(id)arg0 ;
-(void)_addItem:(id)arg0 addToStringsForUserTypedDomainExpansions:(BOOL)arg1 ;
-(void)_addItemToStringsForUserTypedDomainExpansion:(id)arg0 ;
-(void)_addVisitedLinkForItemIfNeeded:(id)arg0 withVisitOrigin:(NSInteger)arg1 ;
-(void)_dispatchHistoryCleared:(id)arg0 ;
-(void)_dispatchHistoryItemAdded:(id)arg0 withVisitOrigin:(NSInteger)arg1 ;
-(void)_dispatchHistoryItemDidChange:(id)arg0 byUserInitiatedAction:(BOOL)arg1 ;
-(void)_dispatchHistoryItemWillChange:(id)arg0 ;
-(void)_dispatchHistoryItemsLoaded:(id)arg0 ;
-(void)_dispatchHistoryItemsRemoved:(id)arg0 ;
-(void)_dispatchHistoryLoaded;
-(void)_dispatchHistoryVisitAdded:(id)arg0 ;
-(void)_loadHistory;
-(void)_loadHistoryWithCompletionHandler:(id)arg0 ;
-(void)_removeAllVisitedLinks;
-(void)_removeHistoryItemsInResponseToUserAction:(id)arg0 ;
-(void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg0 ;
-(void)_removeItemsInResponseToUserAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendNotification:(id)arg0 withItems:(id)arg1 ;
-(void)_setAttributes:(NSUInteger)arg0 forVisit:(id)arg1 ;
-(void)_unload;
-(void)_waitUntilHistoryHasLoadedMainThread;
-(void)addAttributes:(NSUInteger)arg0 toVisit:(id)arg1 ;
-(void)addAutocompleteTrigger:(id)arg0 forURLString:(id)arg1 ;
-(void)addTagWithIdentifier:(id)arg0 title:(id)arg1 toItemAtURL:(id)arg2 level:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)checkIfLocalVisitExistsInAnyOfItems:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearHistory;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)clearHistoryWithCompletionHandler:(id)arg0 ;
-(void)close;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)computeFrequentlyVisitedSites:(NSUInteger)arg0 minimalVisitCountScore:(NSUInteger)arg1 blockList:(id)arg2 allowList:(id)arg3 options:(NSUInteger)arg4 currentTime:(CGFloat)arg5 completionHandler:(id)arg6 ;
// -(void)enumerateItemsAsynchronouslyUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)fetchHistoricalHighLevelDomainsWithCompletionHandler:(id)arg0 ;
-(void)fetchTopicsFromStartDate:(id)arg0 toEndDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchTopicsFromStartDate:(id)arg0 toEndDate:(id)arg1 limit:(NSUInteger)arg2 minimumItemCount:(NSUInteger)arg3 sortOrder:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)getAutocompleteTriggersForURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 onlyFromThisDevice:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getItemCountBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)getVisitsCreatedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)historyLoader:(id)arg0 didLoadItems:(id)arg1 stringsForUserTypeDomainExpansion:(id)arg2 ;
-(void)historyLoaderDidFinishLoading:(id)arg0 ;
-(void)historyStore:(id)arg0 didAddVisits:(id)arg1 ;
-(void)historyStore:(id)arg0 didPrepareToDeleteWithDeletionPlan:(id)arg1 ;
-(void)historyStore:(id)arg0 didRemoveHighLevelDomains:(id)arg1 ;
-(void)historyStore:(id)arg0 didRemoveHostnames:(id)arg1 ;
-(void)historyStore:(id)arg0 didRemoveItems:(id)arg1 ;
-(void)historyStore:(id)arg0 didRemoveVisits:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg0 ;
-(void)historyStoreWasCleared:(id)arg0 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadHistoryAsynchronouslyIfNeeded;
-(void)performBlockAfterHistoryHasLoaded:(id)arg0 ;
-(void)performMaintenance;
-(void)performMaintenance:(id)arg0 ;
-(void)releaseCloudHistory:(id)arg0 ;
-(void)removeItemsInResponseToUserAction:(id)arg0 ;
-(void)savePendingChangesBeforeTerminationWithCompletionHandler:(id)arg0 ;
// -(void)searchForUserTypedString:(id)arg0 options:(NSUInteger)arg1 currentTime:(CGFloat)arg2 enumerationBlock:(id)arg3 completionHandler:(unk)arg4  ;
-(void)setTitle:(id)arg0 ofTag:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateTitle:(id)arg0 forVisit:(id)arg1 ;
-(void)vacuumHistoryWithCompletionHandler:(id)arg0 ;
-(void)waitUntilHistoryHasLoaded;


@end


#endif