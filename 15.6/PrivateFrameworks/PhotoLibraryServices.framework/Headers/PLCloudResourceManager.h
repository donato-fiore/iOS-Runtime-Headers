// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDRESOURCEMANAGER_H
#define PLCLOUDRESOURCEMANAGER_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLCloudResourcePrefetchManager.h"
#import "PLCloudResourcePruneManager.h"

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}




-(CGFloat)_minimumIntervalBetweenOperations;
-(id)init;
-(id)initWithCPLManager:(id)arg0 library:(id)arg1 ;
-(id)statusForDebug:(BOOL)arg0 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg0 block:(id)arg1 ;
-(void)clearPrefetchState;
-(void)handleCPLConfigurationChange;
-(void)handleCPLStatusChange;
-(void)handleOptimizeModeChange;
-(void)invalidate;
-(void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg0 ;
-(void)stop;
-(void)updateCacheDeletePurgeableAmount;


@end


#endif