// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILELOADERINTERNAL_H
#define GEOTILELOADERINTERNAL_H


#import <Foundation/Foundation.h>

#import "GEOTilePool.h"

@interface GEOTileLoaderInternal : NSObject {
    list<LoadItem, std::allocator<LoadItem>> _loadItems;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>> _timer;
    list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    uint8_t _memoryHits;
    uint8_t _diskHits;
    uint8_t _networkHits;
    deque<ErrorInfo, std::allocator<ErrorInfo>> _recentErrors;
}






@end


#endif