// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINECLOUDCACHE_H
#define CPLENGINECLOUDCACHE_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)_remapRecord:(id)arg0 inBatch:(id)arg1 error:(*id)arg2 ;
-(BOOL)ackownledgeRecordWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)addRecord:(id)arg0 isFinal:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)applyBatch:(id)arg0 isFinal:(BOOL)arg1 direction:(NSUInteger)arg2 withError:(*id)arg3 ;
-(BOOL)commitStagedChangesForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)confirmAllRecordsWithError:(*id)arg0 ;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg0 isFinal:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)discardStagedChangesForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardStagedChangesWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg0 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg0 ;
-(BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)arg0 newScopedIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateFinalRecord:(id)arg0 confirmed:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateStagedRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(NSUInteger)scopeType;
-(id)allRecordsIsFinal:(BOOL)arg0 ;
-(id)cloudChangeBatchFromBatch:(id)arg0 usingMapping:(id)arg1 isFinal:(BOOL)arg2 withError:(*id)arg3 ;
-(id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg0 ;
-(id)recordWithScopedIdentifier:(id)arg0 isConfirmed:(*BOOL)arg1 isStaged:(*BOOL)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)recordsOfClass:(Class)arg0 isFinal:(BOOL)arg1 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 isFinal:(BOOL)arg2 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)resourceOfType:(NSUInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 record:(*id)arg2 error:(*id)arg3 ;
-(void)getCommittedRecord:(*id)arg0 stagedRecord:(*id)arg1 forScopedIdentifier:(id)arg2 ;


@end


#endif