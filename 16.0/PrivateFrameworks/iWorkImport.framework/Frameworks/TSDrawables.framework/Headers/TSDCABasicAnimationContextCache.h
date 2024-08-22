// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCABASICANIMATIONCONTEXTCACHE_H
#define TSDCABASICANIMATIONCONTEXTCACHE_H



#import "TSDCAPropertyAnimationContextCache.h"

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache

@property (readonly, nonatomic) id *fromValue; // ivar: _fromValue
@property (readonly, nonatomic) id *toValue; // ivar: _toValue


-(CGFloat)percentAtTime:(CGFloat)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(id)valueAtTime:(CGFloat)arg0 initialValue:(id)arg1 groupTimingFactor:(CGFloat)arg2 ;


@end


#endif