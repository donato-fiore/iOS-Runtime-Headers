// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTCOREDATASTORE_H
#define _KSTEXTREPLACEMENTCOREDATASTORE_H

@class NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _KSTextReplacementCoreDataStore : NSObject {
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
}


@property (retain, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


+(id)localCloudEntryFromMocObject:(id)arg0 ;
-(BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)arg0 excludeSavesToCloud:(BOOL)arg1 ;
-(BOOL)deleteTextReplacementsWithPredicate:(id)arg0 ;
-(BOOL)didMakeInitialPull;
-(BOOL)markDeletesForTextReplacementEntries:(id)arg0 ;
-(BOOL)recordTextReplacementEntries:(id)arg0 ;
-(NSUInteger)countEntriesWithPredicate:(id)arg0 ;
-(id)fetchTextReplacementEntry:(id)arg0 context:(id)arg1 ;
-(id)fetchTextReplacementWithUniqueName:(id)arg0 context:(id)arg1 ;
-(id)getCKFetchToken;
-(id)init;
-(id)initWithDirectoryPath:(id)arg0 ;
-(id)persistentStore;
-(id)queryEntriesWithPredicate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)queryManagedObjectsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)syncStateEntryShouldSave:(BOOL)arg0 fetchToken:(id)arg1 ;
-(id)textReplacementEntriesWithLimit:(NSUInteger)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)fetchAndMergeTextReplacementEntry:(id)arg0 context:(id)arg1 ;
-(void)saveCKFetchToken:(id)arg0 ;


@end


#endif