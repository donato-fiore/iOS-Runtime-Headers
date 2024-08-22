// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENGROUPCONTEXTINMEMORYCACHE_H
#define ENGROUPCONTEXTINMEMORYCACHE_H

@class NSString, NSMutableDictionary;
@protocol ENGroupContextCacheMiddleware, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *groupIDtoGroup; // ivar: _groupIDtoGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup; // ivar: _latestStableGroupIDToGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(NSInteger)middlewareCacheCostForContext:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg0 completion:(id)arg1 ;
-(void)deleteCachedValueForForGroupContext:(id)arg0 withGroupID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cacheGroup:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cachedGroupWithID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 fetchAllKnownGroups:(id)arg1 ;
-(void)groupContext:(id)arg0 latestCachedGroupWithStableID:(id)arg1 completion:(id)arg2 ;


@end


#endif