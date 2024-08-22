// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLANIMATEDVECTOR2_H
#define MDLANIMATEDVECTOR2_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedVector2 : MDLAnimatedValue



-(NSUInteger)getDouble2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)getFloat2Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)double2AtTime;
-(id)float2AtTime;
-(struct VtValue )defaultVtValue;
-(void)resetWithDouble2Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithFloat2Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble2:(CGFloat)arg0 atTime;
-(void)setFloat2:(CGFloat)arg0 atTime;


@end


#endif