// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDRESOURCEPRUNEMANAGER_H
#define PLCLOUDRESOURCEPRUNEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"
#import "PLCloudPhotoLibraryManager.h"

@interface PLCloudResourcePruneManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    BOOL _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}




-(NSInteger)_fetchResourcesForPruningWithBudget:(NSInteger)arg0 urgency:(NSInteger)arg1 batchHandler:(id)arg2 ;
-(NSInteger)_localResourcesSize;
-(NSInteger)_purgeableAmountWithBudget:(NSInteger)arg0 debugString:(id)arg1 ;
-(NSInteger)_totalPurgeableAmountForUrgency:(NSInteger)arg0 ;
-(NSInteger)diskSpaceToPrune;
-(NSInteger)pruneResources:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)_identifierForResource:(id)arg0 ;
-(id)_predicateForPruneWithUrgency:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCPLManager:(id)arg0 library:(id)arg1 ;
-(id)pruneStatusForDebug:(BOOL)arg0 ;
-(struct __CFDictionary *)_handleCacheDeletePurge:(int)arg0 info:(struct __CFDictionary *)arg1 ;
-(struct __CFDictionary *)_handleCacheDeletePurgeable:(int)arg0 info:(struct __CFDictionary *)arg1 ;
-(void)_handleCacheDeleteRegistration;
-(void)_runOnWorkQueueWithTransaction:(id)arg0 block:(id)arg1 ;
-(void)_updateLocalStateForPrunedResources:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(void)startAutomaticPruneWithBudget:(NSInteger)arg0 urgency:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)stop;
-(void)updateCacheDeletePurgeableAmount;


@end


#endif