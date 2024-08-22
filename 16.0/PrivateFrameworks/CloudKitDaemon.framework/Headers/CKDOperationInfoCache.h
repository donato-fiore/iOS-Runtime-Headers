// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATIONINFOCACHE_H
#define CKDOPERATIONINFOCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "CKDSQLiteCache.h"

@interface CKDOperationInfoCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue; // ivar: _cacheDelegateQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID; // ivar: _delegateWrappersByOperationID


+(id)cacheDatabaseSchema;
+(id)dbFileName;
+(id)sharedCache;
-(id)_locked_operationInfoForID:(id)arg0 ;
-(id)allOutstandingOperationIDsForAppContainerAccountTuple:(id)arg0 ;
-(id)initWithCacheDir:(id)arg0 ;
-(id)operationInfoMetadataForOperationWithID:(id)arg0 ;
-(id)outstandingOperationInfosForIDs:(id)arg0 ;
-(id)resumableOperationInfosByAppContainerAccountTuplesWithProgressPurged:(BOOL)arg0 ;
-(void)_lockedArchiveCallback:(id)arg0 forOperationID:(id)arg1 ;
-(void)_lockedSetOperationInfo:(id)arg0 forOperationID:(id)arg1 appContainerAccountTuple:(id)arg2 ;
-(void)_locked_enumerateCallbacksForOperationWithID:(id)arg0 usingBlock:(id)arg1 ;
-(void)archiveCallback:(id)arg0 forOperationID:(id)arg1 ;
-(void)deleteAllInfoForOperationWithID:(id)arg0 ;
-(void)enumerateCallbacksForOperationWithID:(id)arg0 usingBlock:(id)arg1 ;
-(void)expungeOperationInfoForDeletedAccountID:(id)arg0 ;
-(void)registerAttemptForOperationWithID:(id)arg0 ;
-(void)registerCacheEvictionActivity;
-(void)registerDelegate:(id)arg0 forOperationWithID:(id)arg1 ;
-(void)setOperationInfo:(id)arg0 forOperationID:(id)arg1 appContainerAccountTuple:(id)arg2 ;
-(void)unregisterDelegate:(id)arg0 forOperationWithID:(id)arg1 ;


@end


#endif