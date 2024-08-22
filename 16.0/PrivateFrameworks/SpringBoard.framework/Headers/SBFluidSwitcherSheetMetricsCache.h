// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERSHEETMETRICSCACHE_H
#define SBFLUIDSWITCHERSHEETMETRICSCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBFluidSwitcherSheetMetricsCache : NSObject {
    NSMutableDictionary *_cacheKeyToSizeValueMap;
    NSMutableDictionary *_boundsToTransformMap;
}




-(struct CGAffineTransform )transformForCardUnderSheetForBoundsSize:(struct CGSize )arg0 ;
-(struct CGSize )pageSheetMetricsForBoundsSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 configuration:(NSInteger)arg2 ;
-(struct CGSize )pageSheetMetricsForBoundsSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 configuration:(NSInteger)arg2 userInterfaceIdiom:(NSInteger)arg3 displayScale:(CGFloat)arg4 displayEdgeInfo:(id)arg5 ;


@end


#endif