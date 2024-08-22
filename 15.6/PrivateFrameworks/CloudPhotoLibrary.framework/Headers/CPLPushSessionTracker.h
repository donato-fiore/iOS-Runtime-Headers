// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPUSHSESSIONTRACKER_H
#define CPLPUSHSESSIONTRACKER_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSArray, NSDate, NSDictionary, NSSet;
@protocol CPLEngineIDMapping;

#import <Foundation/Foundation.h>

#import "CPLEngineScopeStorage.h"
#import "CPLChangeBatch.h"
#import "CPLPushChangeTasks.h"
#import "CPLEngineStore.h"

@interface CPLPushSessionTracker : NSObject {
    CPLEngineScopeStorage *_scopes;
    id<CPLEngineIDMapping> *_idMapping;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    BOOL _checkScopeIdentifier;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
}


@property (readonly, nonatomic) NSArray *addedRecords;
@property (readonly, nonatomic) BOOL applyHasBeenSuccessful; // ivar: _applyHasBeenSuccessful
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property (readonly, nonatomic) BOOL diffHasBeenSuccessful; // ivar: _diffHasBeenSuccessful
@property (readonly, nonatomic) CPLChangeBatch *diffedBatch; // ivar: _diffedBatch
@property (readonly, nonatomic) BOOL diffedBatchCanLowerQuota; // ivar: _diffedBatchCanLowerQuota
@property (readonly, nonatomic) BOOL expandHasBeenSuccessful; // ivar: _expandHasBeenSuccessful
@property (readonly, nonatomic) CPLChangeBatch *expandedBatch; // ivar: _expandedBatch
@property (readonly, nonatomic) BOOL hasPushChangeTasks;
@property (readonly, nonatomic) NSUInteger ignoredRecordCount; // ivar: _ignoredRecordCount
@property (readonly, nonatomic) CPLChangeBatch *incomingBatch; // ivar: _incomingBatch
@property (copy, nonatomic) NSDate *now; // ivar: _now
@property (readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks; // ivar: _pushChangeTasks
@property (readonly, nonatomic) NSDictionary *recordWithStatusChangesToNotify; // ivar: _recordWithStatusChangesToNotify
@property (readonly, nonatomic) NSDictionary *resourcesToUpload;
@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store
@property (readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers; // ivar: _unquarantinedRecordScopedIdentifiers
@property (readonly, nonatomic) NSArray *updatedRecords;


+(BOOL)notifyClientOfStore:(id)arg0 ofStatusChanges:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkScopeIdentifier:(id)arg0 ;
-(BOOL)computeDiff;
-(BOOL)computeExpandedBatchWithError:(*id)arg0 ;
-(BOOL)hasClientRecordWithLocalScopedIdentifier:(id)arg0 ;
-(BOOL)hasCloudRecordWithLocalScopedIdentifier:(id)arg0 ;
-(BOOL)knowsClientRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)notifyClientOfStatusChangesIfNecessaryWithError:(*id)arg0 ;
-(BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)arg0 ;
-(id)_realChangeFromChange:(id)arg0 comparedToStoredRecord:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)_resourceIdentitiesFromChange:(id)arg0 ;
-(id)deletedRecordIdentifiers;
-(id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)arg0 ;
-(id)initWithIncomingBatch:(id)arg0 store:(id)arg1 error:(*id)arg2 ;
-(id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg0 ;
-(id)storedClientRecordWithLocalScopedIdentifier:(id)arg0 ;
-(id)storedCloudRecordWithLocalScopedIdentifier:(id)arg0 ;
-(void)acknowledgeNewClientRecord:(id)arg0 withScopedIdentifier:(id)arg1 ;
-(void)enumerateDiffWithBlock:(id)arg0 ;


@end


#endif