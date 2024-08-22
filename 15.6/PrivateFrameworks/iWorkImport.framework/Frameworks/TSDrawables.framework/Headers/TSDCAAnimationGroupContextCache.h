// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCAANIMATIONGROUPCONTEXTCACHE_H
#define TSDCAANIMATIONGROUPCONTEXTCACHE_H

@class NSArray;


#import "TSDCAAnimationContextCache.h"

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache

@property (readonly, nonatomic) NSArray *animationContextCaches; // ivar: _animationContextCaches
@property (readonly, nonatomic) NSArray *animations; // ivar: _animations


+(id)p_flattenedBestAnimationContextCachesForKeyPath:(id)arg0 atTime:(CGFloat)arg1 inContextCaches:(id)arg2 ;
-(CGFloat)p_groupTimingFactorAtTime:(CGFloat)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(id)p_bestAnimationContextCachesForKeyPath:(id)arg0 atTime:(CGFloat)arg1 ;
-(id)valueForKeyPath:(id)arg0 atTime:(CGFloat)arg1 animationCache:(id)arg2 ;


@end


#endif