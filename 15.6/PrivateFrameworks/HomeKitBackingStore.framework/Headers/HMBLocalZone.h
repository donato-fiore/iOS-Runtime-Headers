// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALZONE_H
#define HMBLOCALZONE_H

@class HMFObject, NSString, NSHashTable, NSMutableDictionary, HMFUnfairLock, NAFuture;
@protocol HMFLogging, HMBLocalZoneDelegate, HMBMirrorProtocol, HMBLocalZoneID;


#import "HMBLocalZoneConfiguration.h"
#import "HMBLocalDatabase.h"
#import "HMBModelContainer.h"
#import "HMBLocalSQLContext.h"

@interface HMBLocalZone : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMBLocalZoneConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMBLocalZoneDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStartedUp; // ivar: _hasStartedUp
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (readonly, nonatomic) NSObject<HMBMirrorProtocol> *mirror; // ivar: _mirror
@property (readonly, nonatomic) NSHashTable *mirrorOutputObservers; // ivar: _mirrorOutputObservers
@property (readonly, nonatomic) HMBModelContainer *modelContainer; // ivar: _modelContainer
@property (readonly, nonatomic) NSMutableDictionary *modelObserversByModelID; // ivar: _modelObserversByModelID
@property (readonly, nonatomic) NSHashTable *observersForAllModels; // ivar: _observersForAllModels
@property (readonly, nonatomic) HMFUnfairLock *propertyLock; // ivar: _propertyLock
@property (retain, nonatomic) NAFuture *shutdownFuture; // ivar: _shutdownFuture
@property (readonly, nonatomic) HMBLocalSQLContext *sql; // ivar: _sql
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HMBLocalZoneID> *zoneID; // ivar: _zoneID
@property (readonly, nonatomic) NSUInteger zoneRow; // ivar: _zoneRow


+(BOOL)shouldMirrorInputExternalData:(id)arg0 overwriteExistingExternalData:(id)arg1 ;
+(id)logCategory;
+(id)outputBlockRowForTuple:(id)arg0 activity:(id)arg1 ;
+(id)outputModelFromUpdateModel:(id)arg0 mergedModel:(id)arg1 ;
-(BOOL)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(NSUInteger)arg0 context:(id)arg1 type:(NSUInteger)arg2 modelIDs:(id)arg3 currentDepth:(NSUInteger)arg4 maximumDepth:(NSUInteger)arg5 options:(id)arg6 error:(*id)arg7 ;
-(BOOL)destroyWithError:(*id)arg0 ;
-(BOOL)removeAllRecordsWithError:(*id)arg0 ;
-(BOOL)removeBlockWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeOutputBlockWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)shouldLogPrivateInformation;
-(NSUInteger)insertBlockToRemoveAllModelsWithType:(NSUInteger)arg0 modelTypes:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)insertBlockToRemoveChildModelsWithType:(NSUInteger)arg0 parentModelID:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)insertBlockToRemoveModelsAndDescendantModelsWithType:(NSUInteger)arg0 modelIDs:(id)arg1 depth:(NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)insertBlockWithType:(NSUInteger)arg0 options:(id)arg1 items:(id)arg2 error:(*id)arg3 ;
-(id)addModels:(id)arg0 andRemoveModelIDs:(id)arg1 options:(id)arg2 ;
-(id)addModels:(id)arg0 options:(id)arg1 ;
-(id)allMirrorOutputObservers;
-(id)countModelsUsingQuery:(id)arg0 arguments:(id)arg1 error:(*id)arg2 ;
-(id)createInputBlockWithType:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)createLocalInputWithError:(*id)arg0 ;
-(id)createMirrorInputWithError:(*id)arg0 ;
-(id)createModels:(id)arg0 options:(id)arg1 ;
-(id)createOutputBlockWithError:(*id)arg0 ;
-(id)externalDataForExternalID:(id)arg0 error:(*id)arg1 ;
-(id)externalDataForModelID:(id)arg0 error:(*id)arg1 ;
-(id)externalIDForModelID:(id)arg0 error:(*id)arg1 ;
-(id)fetchAllModelsWithError:(*id)arg0 ;
-(id)fetchItemsInBlock:(id)arg0 error:(*id)arg1 ;
-(id)fetchModelWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)fetchModelWithModelID:(id)arg0 ofType:(Class)arg1 error:(*id)arg2 ;
-(id)fetchModelWithModelID:(id)arg0 recordRow:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)fetchModelWithRecordRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)fetchModels;
-(id)fetchModelsOfType:(Class)arg0 error:(*id)arg1 ;
-(id)fetchModelsWithParentModelID:(id)arg0 error:(*id)arg1 ;
-(id)fetchModelsWithParentModelID:(id)arg0 ofType:(Class)arg1 error:(*id)arg2 ;
-(id)fetchOptionsForOutputBlock:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)fetchReadyBlocksWithType:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)fetchRecordRowWithExternalID:(id)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)fetchRecordRowWithModelID:(id)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)fetchRecordRowsWithModelIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRecordsForOutputBlock:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)flush;
-(id)initWithLocalDatabase:(id)arg0 zoneID:(id)arg1 zoneRow:(NSUInteger)arg2 configuration:(id)arg3 mirror:(id)arg4 ;
-(id)logIdentifier;
-(id)markGroupAsSentWithOutputBlock:(NSUInteger)arg0 tuples:(id)arg1 ;
-(id)modelIDForExternalID:(id)arg0 error:(*id)arg1 ;
-(id)objectFromData:(id)arg0 encoding:(NSUInteger)arg1 storageLocation:(NSUInteger)arg2 recordRowID:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)observersForModelWithID:(id)arg0 ;
-(id)queryAllRowRecordsReturning:(NSUInteger)arg0 ;
-(id)queryModelsOfType:(Class)arg0 ;
-(id)queryModelsOfType:(Class)arg0 filter:(id)arg1 ;
-(id)queryModelsOfType:(Class)arg0 predicate:(id)arg1 ;
-(id)queryModelsOfType:(Class)arg0 properties:(id)arg1 filter:(id)arg2 ;
-(id)queryModelsRecursivelyStartingWithModelID:(id)arg0 ;
-(id)queryModelsUsingQuery:(id)arg0 ;
-(id)queryModelsUsingQuery:(id)arg0 arguments:(id)arg1 ;
-(id)queryModelsWithParentModelID:(id)arg0 ;
-(id)queryModelsWithParentModelID:(id)arg0 ofType:(Class)arg1 ;
-(id)remove:(id)arg0 ;
-(id)removeAllModelsOfTypes:(id)arg0 options:(id)arg1 ;
-(id)removeModelIDs:(id)arg0 options:(id)arg1 ;
-(id)removeModelsAndDescendantModelsWithIDs:(id)arg0 depth:(NSUInteger)arg1 options:(id)arg2 ;
-(id)removeModelsWithParentModelID:(id)arg0 options:(id)arg1 ;
-(id)setExternalData:(id)arg0 forExternalID:(id)arg1 ;
-(id)setExternalData:(id)arg0 forModelID:(id)arg1 ;
-(id)setExternalID:(id)arg0 externalData:(id)arg1 forRecordRow:(NSUInteger)arg2 ;
-(id)shutdown;
-(id)triggerProcessForBlockRow:(NSUInteger)arg0 ;
-(id)update:(id)arg0 ;
-(id)update:(id)arg0 remove:(id)arg1 ;
-(id)updateModels:(id)arg0 andRemoveModelIDs:(id)arg1 options:(id)arg2 ;
-(id)updateModels:(id)arg0 options:(id)arg1 ;
-(void)addMirrorOutputObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 forModelWithID:(id)arg1 ;
-(void)addObserverForAllModels:(id)arg0 ;
-(void)dealloc;
-(void)migrateUnsupportedModels;
-(void)queueIncompleteProcesses;
-(void)rebuildIndexesIfNeeded;
-(void)removeMirrorOutputObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forModelWithID:(id)arg1 ;
-(void)removeObserverForAllModels:(id)arg0 ;
-(void)startUp;


@end


#endif