// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICEDATABASEPROXY_H
#define WBSHISTORYSERVICEDATABASEPROXY_H

@class NSString;
@protocol WBSHistoryServiceDatabaseProtocol, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceDatabaseProxy : NSObject <WBSHistoryServiceDatabaseProtocol>

 {
    id<NSXPCProxyCreating> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_defaultProxyErrorHandlerWithSimpleReplyHandler:(SEL)arg0 ;
-(id)initWithProxy:(id)arg0 ;
-(void)addAutocompleteTrigger:(id)arg0 forURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)assignURLString:(id)arg0 toTopicTagsWithIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearHistoryItems:(id)arg0 afterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg0 beforeDate:(id)arg1 tombstoneMode:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)computeFrequentlyVisitedSites:(NSUInteger)arg0 minimalVisitCountScore:(NSUInteger)arg1 blockList:(id)arg2 allowList:(id)arg3 options:(NSUInteger)arg4 currentTime:(CGFloat)arg5 completionHandler:(id)arg6 ;
-(void)convertTombstoneWithGenerationToSecureFormat:(NSInteger)arg0 lastSyncedGeneration:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)createTagsForIdentifiers:(id)arg0 withTitles:(id)arg1 type:(NSUInteger)arg2 level:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)dispatchEvent:(id)arg0 listenersToIgnore:(id)arg1 persistForDelayedDispatching:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)expireOldVisits:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)fetchAllTombstonesWithCompletionHandler:(id)arg0 ;
-(void)fetchAutocompleteTriggersForURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCloudClientVersionTable:(id)arg0 ;
-(void)fetchDatabaseURL:(id)arg0 ;
-(void)fetchDomainExpansions:(id)arg0 ;
-(void)fetchEventsForListener:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchMetadataForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchWithOptions:(NSUInteger)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 onlyFromThisDevice:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getItemCountBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(id)arg0 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg0 endDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)lastSeenDateForCloudClientVersion:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)markEventsAsReceivedByListener:(id)arg0 eventIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)performMaintenanceWithAgeLimit:(CGFloat)arg0 itemCountLimit:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)pruneTombstonesWithEndDatePriorToDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)recomputeItemScoresWithCompletionHandler:(id)arg0 ;
-(void)recordVisitWithIdentifier:(id)arg0 sourceVisit:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 loadSuccessful:(BOOL)arg4 origin:(NSInteger)arg5 attributes:(NSUInteger)arg6 statusCode:(NSInteger)arg7 completionHandler:(id)arg8 ;
-(void)replayAndAddTombstones:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetCloudHistoryDataWithCompletionHandler:(id)arg0 ;
-(void)searchForUserTypedString:(id)arg0 options:(NSUInteger)arg1 currentTime:(CGFloat)arg2 writeHandle:(id)arg3 completionHandler:(id)arg4 ;
-(void)setLastSeenDate:(id)arg0 forCloudClientVersion:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTitle:(id)arg0 ofTagWithID:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateDatabaseAfterSuccessfulSyncWithGeneration:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateVisitWithIdentifier:(id)arg0 removeAttributes:(NSUInteger)arg1 addAttributes:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)updateVisitWithIdentifier:(id)arg0 title:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithType:(NSUInteger)arg0 addOrModifyObjects:(id)arg1 updateCurrentGeneration:(id)arg2 updateLastSyncGeneration:(id)arg3 updateLastMaintenance:(id)arg4 completionHandler:(id)arg5 ;
-(void)vacuumHistoryWithCompletionHandler:(id)arg0 ;
-(void)visitIdentifiersMatchingExistingVisits:(id)arg0 completionHandler:(id)arg1 ;
-(void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(CGFloat)arg0 completionHandler:(id)arg1 ;


@end


#endif