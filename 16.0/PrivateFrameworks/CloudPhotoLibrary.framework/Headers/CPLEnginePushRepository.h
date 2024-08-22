// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINEPUSHREPOSITORY_H
#define CPLENGINEPUSHREPOSITORY_H

@class NSMutableDictionary, NSString, NSDate;
@protocol CPLAbstractObject, CPLBatchExtractionStrategyStorage, OS_dispatch_queue;


#import "CPLEngineStorage.h"
#import "CPLBatchExtractionStrategy.h"
#import "CPLPlatformObject.h"

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage>

 {
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    CGFloat _lastApproximativeUploadRate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumResourceSizePerBatch;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly, nonatomic) BOOL shouldManageExtractedBatch;
@property (readonly, nonatomic) BOOL shouldManageOutgoingResources;
@property (readonly) Class superclass;


-(BOOL)deleteAllChangesWithError:(*id)arg0 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteSharingFlagsWithMaxCount:(NSUInteger)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)discardChangeWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)getRelatedScopedIdentifier:(*id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(BOOL)hasChangesWithScopeFilter:(id)arg0 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg0 ;
-(BOOL)reinjectChange:(id)arg0 dequeueOrder:(NSInteger)arg1 overwrittenRecord:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)reinjectExtractedBatch:(id)arg0 overwrittenRecordIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)removeChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeChange:(id)arg0 pushContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeExtractedBatch:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfChangesInScopeWithIdentifier:(id)arg0 ;
-(NSUInteger)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(id)_outgoingResources;
-(id)_timingStatisticStatuses;
-(id)allChangesWithClass:(Class)arg0 relatedScopedIdentifier:(id)arg1 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 trashed:(BOOL)arg2 ;
-(id)allChangesWithClass:(Class)arg0 secondaryScopedIdentifier:(id)arg1 ;
-(id)allChangesWithScopeIdentifier:(id)arg0 ;
-(id)allNonDeletedChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)countPerFlagsForScopeWithIdentifier:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)scopedIdentifiersForChangesWithFlag:(NSInteger)arg0 forScopeWithIdentifier:(id)arg1 ;
-(id)status;
-(id)storedExtractedBatch;
-(void)beginExtractingBatch;
-(void)cleanupAfterExtractingBatch;
-(void)notePushRepositoryStoredSomeChanges;
-(void)updateApproximativeUploadRate:(CGFloat)arg0 ;
-(void)updateTimingStatisticForKey:(id)arg0 duration:(CGFloat)arg1 recordCount:(NSUInteger)arg2 error:(BOOL)arg3 cancelled:(BOOL)arg4 ;


@end


#endif