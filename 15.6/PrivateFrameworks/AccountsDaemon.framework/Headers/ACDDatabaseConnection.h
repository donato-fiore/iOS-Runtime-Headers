// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDDATABASECONNECTION_H
#define ACDDATABASECONNECTION_H

@class NSCache, NSNumber, NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject, ACDDatabaseConnectionDelegate;

#import <Foundation/Foundation.h>


@interface ACDDatabaseConnection : NSObject {
    id<NSObject> *_managedObjectContextDidSaveObserver;
    NSCache *_cache;
}


@property (weak, nonatomic) NSObject<ACDDatabaseConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSNumber *keychainVersion;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (retain, nonatomic) NSNumber *version;


+(id)new;
-(BOOL)saveWithError:(*id)arg0 ;
-(BOOL)saveWithError:(*id)arg0 rollbackOnFailure:(BOOL)arg1 ;
-(NSUInteger)countOfEntityNamed:(id)arg0 withPredicate:(id)arg1 ;
-(id)_accountPropertyWithKey:(id)arg0 owner:(id)arg1 ;
-(id)_managedObjectModel;
-(id)_managedObjectModificationDescription:(id)arg0 ;
-(id)_persistentStore;
-(id)existingObjectWithURI:(id)arg0 ;
-(id)fetchObjectsForEntityNamed:(id)arg0 ;
-(id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(id)arg1 sortDescriptor:(id)arg2 ;
-(id)fetchObjectsForEntityNamed:(id)arg0 withPredicate:(id)arg1 sortDescriptor:(id)arg2 prefetchKeypaths:(id)arg3 ;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 ;
-(id)insertNewObjectForEntityForName:(id)arg0 ;
-(id)managedObjectIDForURI:(id)arg0 ;
-(id)objectForObjectURI:(id)arg0 ;
-(void)_beginObservingManagedObjectContextDidSaveNotifications;
-(void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg0 ;
-(void)_endObservingManagedObjectContextDidSaveNotifications;
-(void)_handleManagedObjectContextError:(id)arg0 ;
-(void)_managedObjectContextDidSave:(id)arg0 ;
-(void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg0 ;
-(void)_traceDatabaseEvents;
-(void)dealloc;
-(void)deleteAccountPropertyWithKey:(id)arg0 owner:(id)arg1 ;
-(void)deleteObject:(id)arg0 ;
-(void)rollback;
-(void)setAccountPropertyWithKey:(id)arg0 value:(id)arg1 owner:(id)arg2 ;


@end


#endif