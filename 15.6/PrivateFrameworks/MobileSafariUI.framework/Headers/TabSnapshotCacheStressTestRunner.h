// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABSNAPSHOTCACHESTRESSTESTRUNNER_H
#define TABSNAPSHOTCACHESTRESSTESTRUNNER_H

@class NSMutableOrderedSet, NSString;
@protocol TabSnapshotCacheDelegate, TabSnapshotCacheStressTestRunnerDelegate;

#import <Foundation/Foundation.h>

#import "TabSnapshotCache.h"

@interface TabSnapshotCacheStressTestRunner : NSObject <TabSnapshotCacheDelegate>



@property (retain, nonatomic) TabSnapshotCache *cache; // ivar: _cache
@property (nonatomic) NSUInteger cachesUntilNextIteration; // ivar: _cachesUntilNextIteration
@property (retain, nonatomic) NSMutableOrderedSet *currentUUIDs; // ivar: _currentUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TabSnapshotCacheStressTestRunnerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (nonatomic) NSUInteger maxIterations; // ivar: _maxIterations
@property (readonly) Class superclass;


-(BOOL)tabSnapshotCache:(id)arg0 shouldRequestSavedSnapshotWithIdentifier:(id)arg1 ;
-(BOOL)tabSnapshotCacheShouldDeferNextSnapshotRequest:(id)arg0 ;
-(NSUInteger)capacityForTabSnapshotCache:(id)arg0 ;
-(id)_mutableOrderedSetOfUUIDsWithCount:(NSUInteger)arg0 ;
-(id)_mutatedUUIDsFromUUIDs:(id)arg0 ;
-(id)snapshotsToPresistOnDiskForTabSnapshotCache:(id)arg0 ;
-(void)_runIteration;
-(void)start;
-(void)tabSnapshotCache:(id)arg0 didCacheSnapshotWithIdentifier:(id)arg1 ;
-(void)tabSnapshotCache:(id)arg0 didEvictSnapshotWithIdentifier:(id)arg1 ;
-(void)tabSnapshotCache:(id)arg0 requestSnapshotWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)tabSnapshotCacheDidFinishUpdating:(id)arg0 ;


@end


#endif