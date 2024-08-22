// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPOINTARRAYCACHE_H
#define TSCHPOINTARRAYCACHE_H

@class NSIndexSet, NSData;

#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"

@interface TSCHPointArrayCache : NSObject {
    TSCHChartSeries *_series;
    CGRect _areaFrame;
    NSIndexSet *_groupIndexSet;
    BOOL _cull;
    NSData *_data;
}




+(id)p_getCacheCreate:(BOOL)arg0 ;
+(struct ? *)cachedPointsForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 cullBadPoints:(BOOL)arg3 outCount:(*NSUInteger)arg4 ;
+(void)clearCache;
+(void)setCachedPointsForSeries:(id)arg0 inAreaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 cullBadPoints:(BOOL)arg3 points:(struct ? *)arg4 count:(NSUInteger)arg5 ;
-(BOOL)matchesSeries:(id)arg0 areaFrame:(struct CGRect )arg1 groupIndexSet:(id)arg2 cull:(BOOL)arg3 ;


@end


#endif