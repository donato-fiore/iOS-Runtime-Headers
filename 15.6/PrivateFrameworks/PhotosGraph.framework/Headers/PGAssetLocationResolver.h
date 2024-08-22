// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGASSETLOCATIONRESOLVER_H
#define PGASSETLOCATIONRESOLVER_H


#import <Foundation/Foundation.h>


@interface PGAssetLocationResolver : NSObject



+(id)closestAddressNodeFromMomentNodes:(id)arg0 toLocation:(id)arg1 withMaximumDistance:(CGFloat)arg2 allowRemoteLocations:(BOOL)arg3 ;
+(id)closestAssetLocationForAsset:(id)arg0 inAssetCollection:(id)arg1 ;


@end


#endif