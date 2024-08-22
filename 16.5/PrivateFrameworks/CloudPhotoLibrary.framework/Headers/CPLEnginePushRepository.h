// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEPUSHREPOSITORY_H
#define CPLENGINEPUSHREPOSITORY_H

@class NSMutableDictionary, NSString, NSDate;
@protocol CPLAbstractObject, OS_dispatch_queue;


#import "CPLEngineStorage.h"
#import "CPLBatchExtractionStrategy.h"
#import "CPLPlatformObject.h"

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject>

 {
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    CGFloat _lastApproximativeUploadRate;
    NSMutableDictionary *_pushObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumResourceSizePerBatch;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)acknowledgeContributorsUpdates:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkInBatchStorage:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAllChangesWithError:(*id)arg0 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteSharingFlagsWithMaxCount:(NSUInteger)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)discardChangeWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)getRelatedScopedIdentifier:(*id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasAnyChangeWithRelatedScopedIdentifier:(id)arg0 ;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg0 ;
-(BOOL)hasChangesWithPriorityLowerThanPriority:(NSUInteger)arg0 inScopeWithIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(BOOL)hasChangesWithScopeFilter:(id)arg0 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg0 ;
-(BOOL)reinjectChange:(id)arg0 dequeueOrder:(NSInteger)arg1 overwrittenRecord:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)reinjectExtractedBatch:(id)arg0 overwrittenRecordIdentifiers:(*id)arg1 error:(*id)arg2 ;
-(BOOL)storeChange:(id)arg0 pushContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeExtractedBatch:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfChangesInScopeWithIdentifier:(id)arg0 ;
-(NSUInteger)minimumPriorityForChangesInScopeWithIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(id)_outgoingResources;
-(id)_timingStatisticStatuses;
-(id)allChangesWithClass:(Class)arg0 relatedScopedIdentifier:(id)arg1 ;
-(id)allChangesWithScopeIdentifier:(id)arg0 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)checkOutBatchStorageWithPriority:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)contributorsUpdatesForScopeWithIdentifier:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)countPerFlagsForScopeWithIdentifier:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)scopedIdentifiersForChangesWithFlag:(NSInteger)arg0 forScopeWithIdentifier:(id)arg1 ;
-(id)status;
-(id)storedExtractedBatch;
// -(void)addPushObserver:(id)arg0 withIdentifier:(unk)arg1  ;
-(void)notePushRepositoryStoredSomeChanges;
-(void)removePushObserverWithIdentifier:(id)arg0 ;
-(void)updateApproximativeUploadRate:(CGFloat)arg0 ;
-(void)updateTimingStatisticForKey:(id)arg0 duration:(CGFloat)arg1 recordCount:(NSUInteger)arg2 error:(BOOL)arg3 cancelled:(BOOL)arg4 ;


@end


#endif