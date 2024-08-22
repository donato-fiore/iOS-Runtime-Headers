// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATIONCACHE_H
#define PGCURATIONCACHE_H

@class CLSDBCache;



@interface PGCurationCache : CLSDBCache



+(id)defaultCacheName;
-(id)_curatedAssetIdentifiersforMomentUUID:(id)arg0 options:(id)arg1 ;
-(id)_curatedKeyAssetIdentifierforMomentUUID:(id)arg0 options:(id)arg1 ;
-(id)_fetchCurationObjectForEntityName:(id)arg0 predicate:(id)arg1 ;
-(id)curatedAssetIdentifiersForMoment:(id)arg0 options:(id)arg1 ;
-(id)curatedKeyAssetIdentifierForCollectionUUID:(id)arg0 options:(id)arg1 ;
-(id)curatedKeyAssetIdentifierForMoment:(id)arg0 options:(id)arg1 ;
-(id)dataModelName;
-(id)initAtURL:(id)arg0 ;
-(void)_invalidateCacheForMomentWithUUID:(id)arg0 ;
-(void)_invalidateCacheForMomentWithUUID:(id)arg0 precision:(NSUInteger)arg1 ;
-(void)_invalidateCacheForMomentsWithUUIDs:(id)arg0 ;
-(void)_setCuratedAssets:(id)arg0 forMomentUUID:(id)arg1 options:(id)arg2 ;
-(void)_setCuratedKeyAsset:(id)arg0 forMomentUUID:(id)arg1 options:(id)arg2 ;
-(void)_setProperties:(id)arg0 forCurationObjectWithEntityName:(id)arg1 momentUUID:(id)arg2 precision:(NSUInteger)arg3 predicate:(id)arg4 ;
-(void)invalidateCacheForMomentUUID:(id)arg0 ;
-(void)invalidateCacheForMomentUUID:(id)arg0 precision:(NSUInteger)arg1 ;
-(void)invalidateCacheForMomentUUIDs:(id)arg0 ;
-(void)setCuratedAssets:(id)arg0 forMoment:(id)arg1 options:(id)arg2 ;
-(void)setCuratedKeyAsset:(id)arg0 forCollectionUUID:(id)arg1 options:(id)arg2 ;
-(void)setCuratedKeyAsset:(id)arg0 forMoment:(id)arg1 options:(id)arg2 ;


@end


#endif