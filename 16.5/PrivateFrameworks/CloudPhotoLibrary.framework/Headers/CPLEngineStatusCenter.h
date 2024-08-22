// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINESTATUSCENTER_H
#define CPLENGINESTATUSCENTER_H

@class NSDate, NSMutableSet, NSMutableDictionary, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject>

 {
    NSUInteger _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedScopedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStatusChanges;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)acknowledgeChangedStatuses:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)discardNotificationForRecordWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)notifyStatusForRecordHasChanged:(id)arg0 persist:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)notifyStatusForRecordViewHasChanged:(id)arg0 persist:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)notifyStatusForRecordWithScopedIdentifierHasChanged:(id)arg0 recordClass:(Class)arg1 persist:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)scopeType;
-(id)_allScopedIdentifierInCollection:(id)arg0 withScopeIdentifier:(id)arg1 ;
-(id)_statusFromCachesWithRecordScopedIdentifier:(id)arg0 ;
-(id)allStatusChanges;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)recordForStatusWithScopedIdentifier:(id)arg0 ;
-(id)recordViewForStatusWithScopedIdentifier:(id)arg0 ;
-(id)status;
-(id)statusChanges;
-(id)statusesForRecordsWithIdentifiers:(id)arg0 ;
-(id)statusesForRecordsWithScopedIdentifiers:(id)arg0 ;
-(void)_fillStatus:(id)arg0 ;
-(void)_fillStatus:(id)arg0 withClientCacheRecordView:(id)arg1 cloudCacheRecord:(id)arg2 isConfirmed:(BOOL)arg3 isStaged:(BOOL)arg4 isInIDMapping:(BOOL)arg5 ;
-(void)_removeScopedIdentifiersFromSet:(id)arg0 withScopeIdentifier:(id)arg1 ;
-(void)_removeStatusesInDictionary:(id)arg0 withScopeIdentifier:(id)arg1 ;
-(void)resetAllTransientStatuses;
-(void)resetTransientStatusesWithScopeIdentifier:(id)arg0 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif