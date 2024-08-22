// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTIMETRANSFORMSLOWMO_H
#define NUTIMETRANSFORMSLOWMO_H

@protocol NUSlowMotionTimeRangeMapper;


#import "NUGeometryTransform.h"

@interface NUTimeTransformSlowMo : NUGeometryTransform

@property (readonly, nonatomic) BOOL isInverse; // ivar: _isInverse
@property (readonly, nonatomic) NSObject<NUSlowMotionTimeRangeMapper> *timeMapper; // ivar: _timeMapper


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithSlowMoBeginTime:(struct ? )arg0 endTime:(struct ? )arg1 rate:(float)arg2 assetDuration:(CGFloat)arg3 ;
-(id)initWithSlowMoTimeMapper:(id)arg0 isInverse:(BOOL)arg1 ;
-(id)inverseTransform;
-(struct ? )transformTime:(struct ? )arg0 ;


@end


#endif