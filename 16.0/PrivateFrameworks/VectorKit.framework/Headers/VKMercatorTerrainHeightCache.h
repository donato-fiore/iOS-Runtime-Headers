// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKMERCATORTERRAINHEIGHTCACHE_H
#define VKMERCATORTERRAINHEIGHTCACHE_H

@protocol VKMercatorTerrainHeightProvider;

#import <Foundation/Foundation.h>


@interface VKMercatorTerrainHeightCache : NSObject {
    map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>> _anchorToHeight;
}


@property (weak, nonatomic) NSObject<VKMercatorTerrainHeightProvider> *heightProvider; // ivar: _heightProvider


-(CGFloat)heightForAnchor:(*void)arg0 ;
-(void)invalidateRect:(*void)arg0 ;
-(void)removeCachedValueForAnchor:(*void)arg0 ;


@end


#endif