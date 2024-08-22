// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETUSERACTIVITYPROPERTIES_H
#define PHASSETUSERACTIVITYPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetUserActivityProperties : PHAssetPropertySet

@property (nonatomic) NSInteger pendingPlayCount; // ivar: _pendingPlayCount
@property (nonatomic) NSInteger pendingShareCount; // ivar: _pendingShareCount
@property (nonatomic) NSInteger pendingViewCount; // ivar: _pendingViewCount
@property (readonly, nonatomic) NSInteger playCount;
@property (readonly, nonatomic) NSInteger shareCount;
@property (nonatomic) NSInteger syncedPlayCount; // ivar: _syncedPlayCount
@property (nonatomic) NSInteger syncedShareCount; // ivar: _syncedShareCount
@property (nonatomic) NSInteger syncedViewCount; // ivar: _syncedViewCount
@property (readonly, nonatomic) NSInteger viewCount;


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif