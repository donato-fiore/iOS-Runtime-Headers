// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATEDSCALAR_H
#define MDLANIMATEDSCALAR_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedScalar : MDLAnimatedValue



-(CGFloat)doubleAtTime:(CGFloat)arg0 ;
-(NSUInteger)getDoubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloatArray:(*float)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)precision;
-(float)floatAtTime:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDoubleArray:(*CGFloat)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithFloatArray:(*float)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble:(CGFloat)arg0 atTime:(CGFloat)arg1 ;
-(void)setFloat:(float)arg0 atTime:(CGFloat)arg1 ;


@end


#endif