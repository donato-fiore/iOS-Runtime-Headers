// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYNCHRONIZECLOUDCRITICALDATAOPERATION_H
#define SBSYNCHRONIZECLOUDCRITICALDATAOPERATION_H

@class SBBootDefaults, NSOperationQueue, BSMonotonicReferenceTime, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface SBSynchronizeCloudCriticalDataOperation : NSObject {
    BOOL _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    NSUInteger _queue_operationCount;
    BOOL _queue_isComplete;
    BSMonotonicReferenceTime *_queue_cloudSyncStartReferenceTime;
    NSMutableArray *_blockingTestOperations;
    NSMutableArray *_nonblockingTestOperations;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete;


-(BOOL)waitForSynchronizeToCompleteWithTimeout:(CGFloat)arg0 ;
-(NSUInteger)_pendingOperationCount;
-(id)_queue_fetchCloudAccountOperation;
-(id)_queue_fetchCloudDefaultsOperation;
-(id)_queue_fetchMDMProfilesOperation;
-(id)_queue_migrateSoundPreferencesOperation;
-(id)init;
-(id)initWithDefaults:(id)arg0 userManager:(id)arg1 ;
-(void)_addTestOperation:(id)arg0 shouldBlock:(BOOL)arg1 ;
-(void)_fetchDomains:(id)arg0 fromIndex:(NSInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_queue_addOperation:(id)arg0 shouldBlock:(BOOL)arg1 ;
-(void)_queue_startFetchingCloudCriticalData;
-(void)startSynchronize;


@end


#endif