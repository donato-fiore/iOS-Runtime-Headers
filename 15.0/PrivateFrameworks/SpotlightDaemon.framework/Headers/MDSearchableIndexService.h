// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDSEARCHABLEINDEXSERVICE_H
#define MDSEARCHABLEINDEXSERVICE_H

@class CSIndexingQueue, NSString;
@protocol CSSearchableIndexInterface, CSSearchableIndexServiceInterface, OS_xpc_object, OS_dispatch_queue, MDIndexer;

#import <Foundation/Foundation.h>


@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface>

 {
    CSIndexingQueue *_activityQueue;
}


@property (readonly, nonatomic) CSIndexingQueue *activityQueue;
@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (retain, nonatomic) NSObject<OS_xpc_object> *clientConnection; // ivar: _clientConnection
@property (copy, nonatomic) NSString *clientPersonaID; // ivar: _clientPersonaID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (nonatomic) unsigned int clientUID; // ivar: _clientUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MDIndexer> *indexer; // ivar: _indexer
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, nonatomic) NSString *processDescription;
@property (copy, nonatomic) NSString *protectionClass; // ivar: _protectionClass
@property (nonatomic) BOOL quotaDisabled; // ivar: _quotaDisabled
@property (nonatomic) BOOL searchInternal; // ivar: _searchInternal
@property (readonly) Class superclass;


-(BOOL)_canProcessIndexDataForBundle:(id)arg0 itemsDecoder:(id)arg1 deletesDecoder:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 outError:(*id)arg5 ;
-(BOOL)_deleteInteractions:(id)arg0 forGroup:(BOOL)arg1 ;
-(BOOL)_jobForIndex:(NSInteger)arg0 ;
-(BOOL)addInteraction:(id)arg0 ;
-(BOOL)changeState:(id)arg0 ;
-(BOOL)checkIn:(id)arg0 ;
-(BOOL)dataMigration:(id)arg0 ;
-(BOOL)deleteActionsBeforeTime:(id)arg0 ;
-(BOOL)deleteActionsWithIdentifiers:(id)arg0 ;
-(BOOL)deleteAllInteractions:(id)arg0 ;
-(BOOL)deleteAllUserActivities:(id)arg0 ;
-(BOOL)deleteBundle:(id)arg0 ;
-(BOOL)deleteDomains:(id)arg0 ;
-(BOOL)deleteSinceDate:(id)arg0 ;
-(BOOL)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 ;
-(BOOL)donateRelevantActions:(id)arg0 ;
-(BOOL)fetchAttributes:(id)arg0 ;
-(BOOL)fetchClientState:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 ;
-(BOOL)issueCommand:(id)arg0 ;
-(BOOL)processActivities:(id)arg0 ;
-(BOOL)processIndexData:(id)arg0 ;
-(BOOL)willModify:(id)arg0 ;
-(id)_checkBundleIDHelper:(id)arg0 ;
-(id)_checkItems:(id)arg0 identifiers:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 ;
-(id)_checkNonEmptyBundle:(id)arg0 protectionClass:(id)arg1 ;
-(void)_deleteAllSearchableItemsWithBundleID:(id)arg0 protectionClass:(id)arg1 shouldGC:(BOOL)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)_dispatchActivities:(id)arg0 ;
-(void)_dispatchActivities:(id)arg0 bundleID:(id)arg1 ;
-(void)_dispatchToReceiversWithBundleID:(id)arg0 protectionClass:(id)arg1 options:(NSInteger)arg2 items:(id)arg3 itemsText:(id)arg4 itemsHTML:(id)arg5 deletes:(id)arg6 ;
-(void)_forceAppWithBundleID:(id)arg0 toPerformJob:(id)arg1 ;
-(void)_issueCommand:(id)arg0 searchContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_makeActivityQueueIfNecessary;
-(void)_processIndexDataForBundle:(id)arg0 protectionClass:(id)arg1 personaID:(id)arg2 options:(NSInteger)arg3 items:(id)arg4 itemsText:(id)arg5 clientState:(id)arg6 clientStateName:(id)arg7 deletes:(id)arg8 completionHandler:(id)arg9 ;
-(void)addInteraction:(id)arg0 intentClassName:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 forUTIType:(id)arg4 options:(NSInteger)arg5 ;
-(void)checkInWithProtectionClass:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteActionsBeforeTime:(CGFloat)arg0 options:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)deleteActionsWithIdentifiers:(id)arg0 options:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg0 protectionClass:(id)arg1 shouldGC:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg0 forBundleID:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteAllUserActivities:(id)arg0 options:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)donateRelevantActions:(id)arg0 bundleID:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchAttributes:(id)arg0 protectionClass:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 reply:(id)arg5 completionHandler:(id)arg6 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg0 forBundleID:(id)arg1 clientStateName:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)flushUserActivities;
-(void)indexFromBundle:(id)arg0 protectionClass:(id)arg1 options:(NSInteger)arg2 items:(id)arg3 itemsText:(id)arg4 itemsHTML:(id)arg5 clientState:(id)arg6 clientStateName:(id)arg7 deletes:(id)arg8 completionHandler:(id)arg9 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 clientStateName:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)indexSearchableItems:(id)arg0 deleteSearchableItemsWithIdentifiers:(id)arg1 clientState:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 options:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)performDataMigrationWithTimeout:(id)arg0 completionHandler:(id)arg1 ;
-(void)performIndexJob:(id)arg0 protectionClass:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)provideDataForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)provideFileURLForBundle:(id)arg0 identifier:(id)arg1 type:(id)arg2 completionHandler:(id)arg3 ;
-(void)userPerformedAction:(id)arg0 withItem:(id)arg1 protectionClass:(id)arg2 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg0 protectionClass:(id)arg1 forBundleID:(id)arg2 options:(NSInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif