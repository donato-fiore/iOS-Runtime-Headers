// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTILECACHE_H
#define GEOTILECACHE_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOTileCacheReserved.h"

@interface GEOTileCache : NSObject {
    GEOTileCacheReserved *_reserved;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}


@property (readonly, nonatomic) NSUInteger currentCost;
@property (readonly, nonatomic) NSUInteger currentCount;
@property NSUInteger maxCapacity;
@property NSUInteger maxCost;


-(BOOL)containsKey:(struct _GEOTileKey *)arg0 cost:(*NSUInteger)arg1 ;
-(id)_description;
-(id)description;
-(id)init;
-(id)tileForKey:(struct _GEOTileKey *)arg0 ;
-(void)_enteredBackground:(id)arg0 ;
-(void)_evictWithMaxCost:(NSUInteger)arg0 maxCapacity:(NSUInteger)arg1 ;
-(void)_receivedMemoryNotification;
-(void)_removeTileForKey:(struct _GEOTileKey *)arg0 ;
-(void)dealloc;
-(void)enumerate:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeTileForKey:(struct _GEOTileKey *)arg0 ;
-(void)removeTilesMatchingPredicate:(id)arg0 ;
-(void)removeTilesWithKeys:(id)arg0 ;
-(void)setTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1 cost:(NSUInteger)arg2 ;


@end


#endif