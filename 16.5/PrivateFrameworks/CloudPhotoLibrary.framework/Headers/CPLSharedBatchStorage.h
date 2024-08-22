// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSHAREDBATCHSTORAGE_H
#define CPLSHAREDBATCHSTORAGE_H

@class NSMutableDictionary, NSDate, NSString;
@protocol CPLEngineIDMapping, CPLSharedRecordMerger;


#import "CPLEngineTransientRepositoryBatchStorage.h"
#import "CPLEngineCloudCache.h"
#import "CPLEngineRemappedRecords.h"
#import "CPLEngineIgnoredRecords.h"
#import "CPLEngineScope.h"

@interface CPLSharedBatchStorage : CPLEngineTransientRepositoryBatchStorage <CPLEngineIDMapping>

 {
    CPLEngineCloudCache *_cloudCache;
    CPLEngineRemappedRecords *_remappedRecords;
    CPLEngineIgnoredRecords *_ignoredRecords;
    NSMutableDictionary *_alreadyProcessedChanges;
    NSDate *_now;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CPLSharedRecordMerger> *merger; // ivar: _merger
@property (readonly, nonatomic) CPLEngineScope *sharedScope; // ivar: _sharedScope
@property (readonly) Class superclass;


-(BOOL)_keepIgnoredRecord:(id)arg0 shadowingRecord:(id)arg1 inScope:(id)arg2 error:(*id)arg3 ;
-(BOOL)_transferIgnoredRecordToTransientPullRepository:(id)arg0 error:(*id)arg1 ;
-(BOOL)addCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)hasChangesInScopeWithIdentifier:(id)arg0 ;
-(BOOL)isRecordWithScopedIdentifierStashed:(id)arg0 ;
-(BOOL)removeChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)stashChange:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg0 ;
-(id)_allChangesMatchingChangeType:(NSUInteger)arg0 enumerator:(id)arg1 ;
-(id)_correctPrivateScopedIdentifierForSharedScopedIdentifier:(id)arg0 currentPrivateScopedIdentifier:(id)arg1 ;
-(id)_mergedRecordWithPrivateChange:(id)arg0 sharedScopedIdentifier:(*id)arg1 ;
-(id)_mergedRecordWithSharedChange:(id)arg0 target:(id)arg1 ;
-(id)_privateScopedIdentifierForSharedScopedIdentifier:(id)arg0 ;
-(id)_remapSharedRecord:(id)arg0 target:(id)arg1 ;
-(id)_sharedRecordAsPrivateRecord:(id)arg0 target:(id)arg1 ;
-(id)_targetForPrivateScopedIdentifier:(id)arg0 ;
-(id)_targetForSharedScopedIdentifier:(id)arg0 ;
// -(id)_unionEnumerationWithPrivateRecordEnumeratorGenerator:(id)arg0 sharedRecordGenerator:(unk)arg1  ;
-(id)_updatePrivateScopedIdentifierForUnknownTarget:(id)arg0 ;
-(id)allChangesWithClass:(Class)arg0 relatedScopedIdentifier:(id)arg1 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 trashed:(BOOL)arg2 ;
-(id)allChangesWithClass:(Class)arg0 secondaryScopedIdentifier:(id)arg1 ;
-(id)allChangesWithScopeIdentifier:(id)arg0 ;
-(id)allNonDeletedChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg0 ;
-(id)initWithTransientRepository:(id)arg0 scope:(id)arg1 sharedScope:(id)arg2 merger:(id)arg3 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg0 ;
-(id)setupCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)beginExtractingBatch;
-(void)cleanupAfterExtractingBatch;


@end


#endif