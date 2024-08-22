// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSBUSINESSCATEGORYCACHE_H
#define CLSBUSINESSCATEGORYCACHE_H

@class NSPredicate;


#import "CLSDBCache.h"

@interface CLSBusinessCategoryCache : CLSDBCache

@property (readonly, nonatomic) NSPredicate *predicateEntryWithUpdateTimestamp; // ivar: _predicateEntryWithUpdateTimestamp


-(BOOL)hasRegion:(id)arg0 ;
-(NSUInteger)numberOfBusinessItemsForRegion:(id)arg0 ;
-(id)_businessItemInRegion:(id)arg0 matchingCategories:(id)arg1 maximumDistance:(CGFloat)arg2 forBusinessItems:(id)arg3 ;
-(id)_fetchBusinessItemsForMUIDs:(id)arg0 ;
-(id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg0 ;
-(id)businessItemFromManagedObject:(id)arg0 ;
-(id)businessItemsForMuid:(NSUInteger)arg0 ;
-(id)businessItemsForMuids:(id)arg0 ;
-(id)businessItemsForRegion:(id)arg0 ;
-(id)businessItemsInRegion:(id)arg0 categories:(id)arg1 maximumDistance:(CGFloat)arg2 ;
-(id)dataModelName;
-(id)initWithDiskCacheName:(id)arg0 ;
-(id)nearestItemForRegion:(id)arg0 inItems:(id)arg1 ;
-(id)predicateForEntryNearbyRegion:(id)arg0 ;
-(id)predicateForRegion:(id)arg0 ;
-(id)updateBusinessItems:(id)arg0 ;
-(void)_updateManagedBusinessItem:(id)arg0 withBusinessItem:(id)arg1 ;
-(void)insertBatchesOfBusinessItems:(id)arg0 forRegions:(id)arg1 ;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg0 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(CGFloat)arg0 ;


@end


#endif