// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTILEPOOL_H
#define GEOTILEPOOL_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOTileCache.h"

@interface GEOTilePool : NSObject {
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _pool;
    _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _decodedPool;
    GEOTileCache *_cache;
}


@property (readonly, nonatomic) NSUInteger currentCost;
@property (readonly, nonatomic) NSUInteger currentCount;
@property NSUInteger maxCapacity;
@property NSUInteger maxCost;


-(BOOL)containsKey:(struct _GEOTileKey *)arg0 cost:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithSideCacheEnabled:(BOOL)arg0 ;
-(id)tileForKey:(struct _GEOTileKey *)arg0 ;
-(void)_enteredBackground:(id)arg0 ;
-(void)_receivedMemoryNotification;
-(void)enumerate:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeTileForKey:(struct _GEOTileKey *)arg0 ;
-(void)removeTilesMatchingPredicate:(id)arg0 ;
-(void)removeTilesWithKeys:(id)arg0 ;
-(void)setTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1 cost:(NSUInteger)arg2 ;


@end


#endif