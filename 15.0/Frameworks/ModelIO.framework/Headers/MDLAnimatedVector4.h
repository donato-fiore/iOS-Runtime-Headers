// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLANIMATEDVECTOR4_H
#define MDLANIMATEDVECTOR4_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedVector4 : MDLAnimatedValue



-(NSUInteger)getDouble4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)getFloat4Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)double4AtTime;
-(id)float4AtTime;
-(struct VtValue )defaultVtValue;
-(void)resetWithDouble4Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithFloat4Array:(**CGFloat)arg0 atTimes:(NSUInteger)arg1 count;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble4:(CGFloat)arg0 atTime;
-(void)setFloat4:(CGFloat)arg0 atTime;


@end


#endif