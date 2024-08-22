// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETCACHEEVICTIONINFO_H
#define CKDASSETCACHEEVICTIONINFO_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface CKDAssetCacheEvictionInfo : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // ivar: _assetHandleItemIDsToDelete
@property BOOL clearRegisteredItems; // ivar: _clearRegisteredItems
@property BOOL evictNow; // ivar: _evictNow
@property BOOL forced; // ivar: _forced
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // ivar: _itemIDsToUnregister


-(id)initWithForced:(BOOL)arg0 evictNow:(BOOL)arg1 ;


@end


#endif