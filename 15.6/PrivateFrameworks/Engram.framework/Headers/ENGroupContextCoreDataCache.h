// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENGROUPCONTEXTCOREDATACACHE_H
#define ENGROUPCONTEXTCOREDATACACHE_H

@class NSPersistentContainer, NSString;
@protocol ENGroupContextCacheMiddleware, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware>



@property (retain, nonatomic) NSPersistentContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(NSInteger)middlewareCacheCostForContext:(id)arg0 ;
-(id)initInMemoryCacheWithQueue:(id)arg0 ;
-(id)initOnDiskCacheWithContainerURL:(id)arg0 Queue:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 containerURL:(id)arg1 queue:(id)arg2 ;
-(void)_groupFromCypher:(id)arg0 groupID:(id)arg1 applicationData:(id)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg0 completion:(id)arg1 ;
-(void)deleteCachedValueForForGroupContext:(id)arg0 withGroupID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cacheGroup:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cachedGroupWithID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 fetchAllKnownGroups:(id)arg1 ;
-(void)groupContext:(id)arg0 latestCachedGroupWithStableID:(id)arg1 completion:(id)arg2 ;
-(void)loadWithCompletion:(id)arg0 ;


@end


#endif