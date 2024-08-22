// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATEDVECTOR3_H
#define MDLANIMATEDVECTOR3_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedVector3 : MDLAnimatedValue



-(NSUInteger)getDouble3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)getFloat3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)double3AtTime;
-(id)float3AtTime;
-(struct VtValue )defaultVtValue;
-(void)resetWithDouble3Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithFloat3Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble3:(CGFloat)arg0 atTime;
-(void)setFloat3:(CGFloat)arg0 atTime;


@end


#endif