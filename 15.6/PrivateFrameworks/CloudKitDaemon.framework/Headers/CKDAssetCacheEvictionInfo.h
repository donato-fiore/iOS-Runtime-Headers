// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDASSETCACHEEVICTIONINFO_H
#define CKDASSETCACHEEVICTIONINFO_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"

@interface CKDAssetCacheEvictionInfo : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // ivar: _assetHandleItemIDsToDelete
@property BOOL clearRegisteredItems; // ivar: _clearRegisteredItems
@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property BOOL evictNow; // ivar: _evictNow
@property BOOL forced; // ivar: _forced
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // ivar: _itemIDsToUnregister


-(id)initWithContainer:(id)arg0 forced:(BOOL)arg1 evictNow:(BOOL)arg2 ;


@end


#endif