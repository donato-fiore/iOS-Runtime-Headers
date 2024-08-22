// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLJALISCOSERVERSOURCE_H
#define BLJALISCOSERVERSOURCE_H

@class NSPersistentStoreCoordinator, NSManagedObjectModel, NSPersistentHistoryToken, NSString;

#import <Foundation/Foundation.h>


@interface BLJaliscoServerSource : NSObject {
    NSInteger _modelSentinel;
    NSInteger _pscSentinel;
    NSPersistentStoreCoordinator *_psc;
    NSManagedObjectModel *_model;
}


@property (readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;
@property (retain, nonatomic) NSString *databaseContainerPath; // ivar: _databaseContainerPath
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)sharedSource;
+(void)preWarmSync;
+(void)setSharedSource:(id)arg0 ;
-(BOOL)_setupCoreDataStack;
-(BOOL)p_createPersistentDirectoryIfNeeded;
-(BOOL)p_databaseExistsAtPrivateiBooksContainerLocation;
-(BOOL)p_databaseExistsAtSharediBooksContainerLocation;
-(BOOL)truncateDatabaseError:(*id)arg0 ;
-(BOOL)workaround_18397698;
-(id)_itemsFetchRequestIncludingHiddenItems:(BOOL)arg0 dsids:(id)arg1 ;
-(id)_persistentStoreOptions;
-(id)allItemsFetchRequestForDSIDs:(id)arg0 ;
-(id)existingEntitiesWithName:(id)arg0 matchingPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 limit:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)existingServerDatabaseWithPredicate:(id)arg0 fromManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)existingServerInfoWithPredicate:(id)arg0 fromManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)existingServerItemWithPredicate:(id)arg0 fromManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)fetchRequestForAllBookletsIDsWithParentStoreIDs:(id)arg0 ;
-(id)fetchRequestForAllCloudIDs:(id)arg0 dsids:(id)arg1 ;
-(id)fetchRequestForAllStoreIDs:(id)arg0 ;
-(id)fetchRequestForAllStoreIDs:(id)arg0 dsids:(id)arg1 ;
-(id)fetchRequestForAllStoreIDs:(id)arg0 dsids:(id)arg1 isImported:(BOOL)arg2 ;
-(id)fetchRequestForAllStoreIDs:(id)arg0 dsids:(id)arg1 isImported:(BOOL)arg2 includeHidden:(BOOL)arg3 ;
-(id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)arg0 dsids:(id)arg1 ;
-(id)fetchRequestForBookletItemsForStoreIDs:(id)arg0 ;
-(id)fetchRequestForBuyParameters:(id)arg0 ;
-(id)fetchRequestForNeedsImport:(BOOL)arg0 ;
-(id)fetchRequestForNotInStoreAccountIDs:(id)arg0 ;
-(id)fetchRequestForStoreIDs:(id)arg0 dsids:(id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 databaseContainerPath:(id)arg1 ;
-(id)itemsFetchRequestForDSIDs:(id)arg0 ;
-(id)managedObjectModel;
-(id)newManagedObjectContext;
-(id)newManagedObjectContextWithPrivateQueueConcurrency;
-(id)p_oldPersistentStoreDirectory;
-(id)p_persistentStoreDirectory;
-(id)p_persistentStoreFullPathAtPrivateiBooksLocation;
-(id)p_persistentStoreFullPathAtSharediBooksLocation;
-(id)persistentStoreCoordinator;
-(id)persistentStoreCoordinatorWithError:(*id)arg0 ;
-(id)predicateForBookletItems:(BOOL)arg0 dsids:(id)arg1 ;
-(id)predicateForItems:(BOOL)arg0 dsids:(id)arg1 ;
-(id)predicateForNeedsImport:(BOOL)arg0 ;
-(id)predicateForStoreAccountID:(id)arg0 storeIDs:(id)arg1 ;
-(id)serverDatabaseForDSID:(id)arg0 fromManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)serverDatabaseForDSID:(id)arg0 withIdentifier:(id)arg1 fromManagedObjectContext:(id)arg2 error:(*id)arg3 ;
-(id)serverInfoForDSID:(id)arg0 fromManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)serverItemWithStoreID:(id)arg0 inDatabaseWithIdentifier:(id)arg1 forDSID:(id)arg2 fromManagedObjectContext:(id)arg3 error:(*id)arg4 ;
-(void)dealloc;
-(void)refreshStoreWithCompletion:(id)arg0 ;


@end


#endif