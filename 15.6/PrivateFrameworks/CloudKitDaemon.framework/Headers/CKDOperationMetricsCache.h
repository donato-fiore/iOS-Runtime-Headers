// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDOPERATIONMETRICSCACHE_H
#define CKDOPERATIONMETRICSCACHE_H

@protocol OS_dispatch_queue;


#import "CKDSQLiteCache.h"

@interface CKDOperationMetricsCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (readonly) BOOL hasMetrics;


+(id)cacheDatabaseSchema;
+(id)dbFileName;
-(id)initWithCacheDir:(id)arg0 ;
-(void)addOperationCombinedMetrics:(id)arg0 forOperationID:(id)arg1 operationType:(NSInteger)arg2 operationGroupID:(id)arg3 operationGroupName:(id)arg4 operationGroupQuantity:(NSUInteger)arg5 operationQualityOfService:(NSInteger)arg6 appContainerTuple:(id)arg7 ;
-(void)flushMetricsToPowerLog;


@end


#endif