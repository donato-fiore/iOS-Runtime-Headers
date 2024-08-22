// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINETRANSIENTREPOSITORY_H
#define CPLENGINETRANSIENTREPOSITORY_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>



@property (readonly, nonatomic) NSUInteger countOfUnmingledRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUnmingledChanges;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumCountOfRecordsInBatches; // ivar: _maximumCountOfRecordsInBatches
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(id)orderedClassesForChanges;
+(id)orderedClassesForChangesForLargeSync;
+(id)orderedClassesForDelete;
-(BOOL)_appendBatchToStorage:(id)arg0 alreadyMingled:(BOOL)arg1 countOfAssetChanges:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)appendBatch:(id)arg0 alreadyMingled:(BOOL)arg1 countOfAssetChanges:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)hasMingledRecordsForScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)hasUnmingledChangesForScope:(id)arg0 ;
-(BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasUnmingledRecordsWithScopeFilter:(id)arg0 ;
-(BOOL)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)popChangeBatchOfRemappedRecords:(*id)arg0 scope:(id)arg1 maximumCount:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)resetMingledRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetMingledRecordsWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldKeepDeleteChange:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(NSUInteger)scopeType;
-(id)_sharedDeleteFromDelete:(id)arg0 ;
-(id)allUnmingledChangesWithClass:(Class)arg0 relatedScopedIdentifier:(id)arg1 ;
-(id)allUnmingledChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)allUnmingledChangesWithScopeIdentifier:(id)arg0 ;
-(id)allUnmingledDeletedChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)allUnmingledNonDeletedChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)batchStorageForScope:(id)arg0 ;
-(id)cachedRecordWithScopedIdentifier:(id)arg0 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)nextBatchOfRemappedRecordsInScope:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)unmingledChangeWithScopedIdentifier:(id)arg0 ;


@end


#endif