// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCOWNERIDENTIFIERMANAGER_H
#define HDCLOUDSYNCOWNERIDENTIFIERMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDCloudSyncManager.h"

@interface HDCloudSyncOwnerIdentifierManager : NSObject {
    HDCloudSyncManager *_cloudSyncManager;
    os_unfair_lock_s _lock;
    NSInteger _lock_fetchEpoch;
    NSMutableDictionary *_lock_deviceIDsByContainerIdentifier;
    NSMutableDictionary *_lock_cachedOwnerIdentifiersByContainerIdentifier;
    NSMutableDictionary *_lock_containersByIdentifier;
    NSObject<OS_dispatch_queue> *_writeQueue;
}




-(id)cachedOwnerIdentifierForContainer:(id)arg0 ;
-(id)initWithCloudSyncManager:(id)arg0 ;
-(void)_scheduleOwnershipRollForLocalDataLoss;
-(void)cacheOwnerIdentifiersForContainers:(id)arg0 completion:(id)arg1 ;
-(void)discardCachedIdentifiers;
-(void)fetchOwnerIdentifierForContainer:(id)arg0 completion:(id)arg1 ;
-(void)rollOwnerDifferentiatorAfterCloudSyncDisableWithCompletion:(id)arg0 ;
-(void)rollOwnerDifferentiatorForReason:(id)arg0 completion:(id)arg1 ;


@end


#endif