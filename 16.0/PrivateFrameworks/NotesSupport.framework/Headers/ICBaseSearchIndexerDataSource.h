// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBASESEARCHINDEXERDATASOURCE_H
#define ICBASESEARCHINDEXERDATASOURCE_H

@class NSString, NSMutableOrderedSet, NSURL;
@protocol ICSearchIndexerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL needsReindexing; // ivar: _needsReindexing
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsBeingProcessed; // ivar: _objectIDsBeingProcessed
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsToProcess; // ivar: _objectIDsToProcess
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges; // ivar: _observingChanges
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSURL *stateFileURL;
@property (readonly, copy, nonatomic) NSString *stateFilename;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)isAccountReindexedForMigration:(id)arg0 ;
+(id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg0 ;
+(void)markAccountReindexedForMigration:(id)arg0 ;
-(BOOL)_loadStateDictionaryWithFileManager:(*id)arg0 fileURL:(*id)arg1 NSError:(*id)arg2 fileExists:(*BOOL)arg3 savedDictionary:(*id)arg4 ;
-(BOOL)addNewObjectsForProcessing:(id)arg0 ;
-(BOOL)isFolderWithServerShareChanged:(id)arg0 ;
-(BOOL)isPaperKitOrSynapseAttachment:(id)arg0 ;
-(BOOL)saveStateDictionary:(id)arg0 ;
-(BOOL)shouldIndexableObjectExistInIndexing:(id)arg0 ;
-(NSInteger)decisionOnObjectID:(id)arg0 searchableItemToIndex:(*id)arg1 additionalItemsToIndex:(*id)arg2 objectIDURIToDelete:(*id)arg3 additionalUniqueIdentifiersToDelete:(*id)arg4 context:(id)arg5 ;
-(NSUInteger)indexingPriority;
-(id)addNotesFromSubtree:(id)arg0 ;
-(id)additionalItemsForObject:(id)arg0 ;
-(id)additionalUniqueIdentifiersToDeleteForObject:(id)arg0 ;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg0 ;
-(id)dataSourceIdentifier;
-(id)indexableObjectIDsWithURIs:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)loadStateDictionary;
-(id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
-(id)newManagedObjectContext;
-(id)objectForManagedObjectIDURI:(id)arg0 context:(id)arg1 ;
-(id)objectForSearchableItem:(id)arg0 context:(id)arg1 ;
-(id)objectIDsFromSearchableItems:(id)arg0 ;
-(id)objectIDsNeedingProcessing;
-(id)persistentStoreCoordinator;
-(id)searchableItemResultForObject:(id)arg0 ;
-(void)clearObjectIDsToIgnoreAndStageForReindexing;
-(void)clearObjectIDsToProcess;
-(void)contextWillSave:(id)arg0 ;
-(void)loadOrClearStateIfNecessary;
-(void)logFileSizeForFileAtPath:(id)arg0 fileManager:(id)arg1 ;
-(void)resetContextObservers;
-(void)saveStateIfNecessary;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg0 error:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg0 error:(id)arg1 ;
-(void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg0 ;
-(void)searchIndexerWillIndexObjectIDs:(id)arg0 ;
-(void)stageForReindexingWithContext:(id)arg0 ;
-(void)stageObjectIDURIsForIndexing:(id)arg0 context:(id)arg1 ;
-(void)startObservingChanges;
-(void)stopObservingChanges;


@end


#endif