// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILECACHERESERVED_H
#define GEOTILECACHERESERVED_H


#import <Foundation/Foundation.h>


@interface GEOTileCacheReserved : NSObject {
    mutex _reservedLock;
    list<CacheItem, std::allocator<CacheItem>> _reservedList;
    unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> _reservedMap;
    NSUInteger _reservedMaxCapacity;
    NSUInteger _reservedMaxCost;
    NSUInteger _reservedCurrentCost;
    NSUInteger _reservedCurrentCount;
}




-(void)dealloc;


@end


#endif