// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPCONTEXTDATASOURCE_H
#define IDSGROUPCONTEXTDATASOURCE_H

@class NSString;
@protocol ENGroupContextDataSource, ENGroupContextCacheMiddleware, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSGroupContextDataSource : NSObject <ENGroupContextDataSource, ENGroupContextCacheMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(NSInteger)middlewareCacheCostForContext:(id)arg0 ;
-(id)_groupContextCacheMiddleware;
-(id)_groupContextDataSource;
-(id)initWithQueue:(id)arg0 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg0 completion:(id)arg1 ;
-(void)deleteCachedValueForForGroupContext:(id)arg0 withGroupID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cacheGroup:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 cachedGroupWithID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 fetchAllKnownGroups:(id)arg1 ;
-(void)groupContext:(id)arg0 fetchGroupWithID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 latestCachedGroupWithStableID:(id)arg1 completion:(id)arg2 ;
-(void)groupContext:(id)arg0 upsertGroupWithInfo:(id)arg1 previousGroup:(id)arg2 completion:(id)arg3 ;
-(void)groupFromPublicDataRepresentation:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;
-(void)participantsForCypher:(id)arg0 completion:(id)arg1 ;
-(void)publicDataRepresentationForGroup:(id)arg0 inContext:(id)arg1 completion:(id)arg2 ;
-(void)validateCachedGroup:(id)arg0 isParentOfGroup:(id)arg1 completion:(id)arg2 ;


@end


#endif