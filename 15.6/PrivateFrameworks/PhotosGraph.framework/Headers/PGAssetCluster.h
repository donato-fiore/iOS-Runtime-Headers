// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGASSETCLUSTER_H
#define PGASSETCLUSTER_H

@class NSArray, CLCircularRegion;

#import <Foundation/Foundation.h>


@interface PGAssetCluster : NSObject

@property (readonly, retain, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, retain, nonatomic) CLCircularRegion *region; // ivar: _region


-(id)initWithAssets:(id)arg0 region:(id)arg1 ;


@end


#endif