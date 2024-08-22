// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINETRANSIENTREPOSITORY_H
#define CPLENGINETRANSIENTREPOSITORY_H

@class NSMutableArray, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>

 {
    NSUInteger _popState;
    NSMutableArray *_remainingClassesToBePopped;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumCountOfRecordsInBatches; // ivar: _maximumCountOfRecordsInBatches
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(id)orderedClassesForChanges;
+(id)orderedClassesForChangesForLargeSync;
+(id)orderedClassesForDelete;
-(BOOL)_appendBatchToStorage:(id)arg0 alreadyMingled:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_popChangeBatchOfChangedRecords:(*id)arg0 maximumCount:(NSUInteger)arg1 stop:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_popChangeBatchOfDeletedRecords:(*id)arg0 maximumCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)appendBatch:(id)arg0 alreadyMingled:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)hasMingledRecordsForScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasUnmingledRecordsWithScopeFilter:(id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)popChangeBatch:(*id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForMinglingWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetMingledRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetMingledRecordsWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldKeepDeleteChange:(id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(NSUInteger)countOfAssetChanges;
-(NSUInteger)countOfUnmingledRecords;
-(NSUInteger)scopeType;
-(id)cachedRecordWithScopedIdentifier:(id)arg0 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;


@end


#endif