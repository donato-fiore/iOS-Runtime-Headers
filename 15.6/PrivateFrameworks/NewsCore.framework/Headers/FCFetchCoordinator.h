// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFETCHCOORDINATOR_H
#define FCFETCHCOORDINATOR_H

@class NSHashTable, NSCountedSet, NFMutexLock, NSString;
@protocol FCBoostableOperationThrottlerDelegate, FCFetchCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "FCMapTable.h"
#import "FCBoostableOperationThrottler.h"

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate>

 {
    NSHashTable *_fetchGroups;
    NSCountedSet *_allKeys;
    FCMapTable *_fetchOperationsByGroup;
    NFMutexLock *_accessLock;
    FCBoostableOperationThrottler *_fetchThrottler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCFetchCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger maxConcurrentFetchCount; // ivar: _maxConcurrentFetchCount
@property (readonly) Class superclass;


-(id)fetchKey:(id)arg0 qualityOfService:(NSInteger)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(id)fetchKeys:(id)arg0 context:(id)arg1 qualityOfService:(NSInteger)arg2 relativePriority:(NSInteger)arg3 completionQueue:(id)arg4 completion:(id)arg5 ;
-(id)fetchKeysUnconditionally:(id)arg0 context:(id)arg1 qualityOfService:(NSInteger)arg2 relativePriority:(NSInteger)arg3 completionQueue:(id)arg4 completion:(id)arg5 ;
-(id)init;
-(void)operationThrottlerPerformOperation:(id)arg0 ;


@end


#endif