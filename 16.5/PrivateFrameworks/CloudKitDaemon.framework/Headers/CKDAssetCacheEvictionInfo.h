// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDASSETCACHEEVICTIONINFO_H
#define CKDASSETCACHEEVICTIONINFO_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface CKDAssetCacheEvictionInfo : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // ivar: _assetHandleItemIDsToDelete
@property BOOL clearRegisteredItems; // ivar: _clearRegisteredItems
@property (readonly, nonatomic) BOOL evictNow; // ivar: _evictNow
@property (readonly, nonatomic) BOOL forced; // ivar: _forced
@property (readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // ivar: _itemIDsToUnregister


-(id)initWithForced:(BOOL)arg0 evictNow:(BOOL)arg1 ;


@end


#endif