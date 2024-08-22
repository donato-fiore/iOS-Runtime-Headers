// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYMANAGEDDATASTORECONTROLLER_H
#define TRANSPARENCYMANAGEDDATASTORECONTROLLER_H

@class NSManagedObjectContext, NSHashTable, NSPersistentContainer;

#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStore.h"

@interface TransparencyManagedDataStoreController : NSObject {
    uint8_t _sequenceId;
}


@property (readonly) NSManagedObjectContext *backgroundContext;
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (readonly) BOOL loadedStore;
@property (retain) NSManagedObjectContext *mainQueueContext; // ivar: _mainQueueContext
@property (retain) TransparencyManagedDataStore *mainQueueDataStore; // ivar: _mainQueueDataStore
@property (retain) NSHashTable *mocStore; // ivar: _mocStore
@property BOOL movedDatabase; // ivar: _movedDatabase
@property (retain) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly) *uint8_t sequenceId;
@property (retain) NSManagedObjectContext *topLevelContext; // ivar: _topLevelContext
@property (retain) TransparencyManagedDataStore *xpcQueueDataStore; // ivar: _xpcQueueDataStore


+(void)reportCoreDataEventForEntity:(id)arg0 hardFailure:(BOOL)arg1 write:(BOOL)arg2 code:(NSInteger)arg3 underlyingError:(id)arg4 ;
+(void)reportCoreDataEventForEntity:(id)arg0 write:(BOOL)arg1 code:(NSInteger)arg2 underlyingError:(id)arg3 ;
-(BOOL)createContexts:(*id)arg0 ;
-(BOOL)createDataStores:(*id)arg0 ;
-(BOOL)moveAsideDatabase:(id)arg0 ;
-(BOOL)saveContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldMoveAsideDatabase:(id)arg0 ;
-(NSInteger)currentSequenceId:(*id)arg0 ;
-(id)bundleURL;
-(id)init;
-(void)handleDidSaveNotification:(id)arg0 ;
-(void)loadPersistentStores;
-(void)saveTopLevelContext;


@end


#endif