// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCAKEYFRAMEANIMATIONCONTEXTCACHE_H
#define TSDCAKEYFRAMEANIMATIONCONTEXTCACHE_H

@class NSArray;


#import "TSDCAPropertyAnimationContextCache.h"

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache

@property (readonly, nonatomic) NSArray *keyTimes; // ivar: _keyTimes
@property (readonly, nonatomic) NSArray *timingFunctions; // ivar: _timingFunctions
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(CGFloat)percentAtTime:(CGFloat)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(id)valueAtTime:(CGFloat)arg0 initialValue:(id)arg1 groupTimingFactor:(CGFloat)arg2 ;


@end


#endif