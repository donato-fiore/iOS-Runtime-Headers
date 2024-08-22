// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLJALISCOREADONLYDAAPCLIENT_H
#define BLJALISCOREADONLYDAAPCLIENT_H

@class NSNumber, NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;
@protocol BUUserAccountObserving;

#import <Foundation/Foundation.h>


@interface BLJaliscoReadOnlyDAAPClient : NSObject <BUUserAccountObserving>



@property (retain, nonatomic) NSNumber *currentAccountDSID; // ivar: _currentAccountDSID
@property (copy, nonatomic) NSString *databaseContainerPath; // ivar: _databaseContainerPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property (retain, nonatomic) NSManagedObjectModel *model; // ivar: _model
@property (retain, nonatomic) NSPersistentStoreCoordinator *psc; // ivar: _psc
@property (readonly) Class superclass;


+(id)predicateForNonExplicitItems;
+(id)sharedClient;
+(id)sortByTitleDescriptor;
-(BOOL)_setupCoreDataStack;
-(BOOL)p_createPersistentDirectoryIfNeeded;
-(id)_itemsFetchRequestForDSIDs:(id)arg0 excludeStoreIDs:(id)arg1 isExplicitRestricted:(BOOL)arg2 ;
-(id)fetchAllServerItemsForDSIDs:(id)arg0 ;
-(id)fetchAllServerItemsWithPredicate:(id)arg0 sortDescriptor:(id)arg1 ;
-(id)fetchItemsForDSIDs:(id)arg0 excludeStoreIDs:(id)arg1 isExplicitRestricted:(BOOL)arg2 ;
-(id)fetchItemsForStoreIDs:(id)arg0 ;
-(id)fetchServerItemsForStoreIDs:(id)arg0 andDSIDS:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 databaseContainerPath:(id)arg1 ;
-(id)p_allItemsFetchRequestForDSIDs:(id)arg0 ;
-(id)p_allItemsFetchRequestForDSIDs:(id)arg0 matchingSearchString:(id)arg1 isExplicitRestricted:(BOOL)arg2 ;
-(id)p_fetchRequestForStoreIDs:(id)arg0 dsids:(id)arg1 ;
-(id)p_itemsFetchRequestIncludingHiddenItems:(BOOL)arg0 dsids:(id)arg1 ;
-(id)p_persistentStoreDirectory;
-(id)p_persistentStoreFullPathAtSharediBooksLocation;
-(id)predicateForItems:(BOOL)arg0 dsids:(id)arg1 ;
-(id)predicateToExcludeStoreIDs:(id)arg0 ;
-(id)searchAllServerItemsForDSIDs:(id)arg0 matchingSearchString:(id)arg1 isExplicitRestricted:(BOOL)arg2 ;
-(void)dealloc;
-(void)userAccount:(NSUInteger)arg0 didChangeWithReason:(NSUInteger)arg1 ;


@end


#endif