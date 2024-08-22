// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLANIMATEDMATRIX4X4_H
#define MDLANIMATEDMATRIX4X4_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue



-(NSUInteger)getDouble4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloat4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )double4x4AtTime:(CGFloat)arg0 ;
-(struct ? )float4x4AtTime:(CGFloat)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDouble4x4Array:(struct ? *)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithFloat4x4Array:(struct ? *)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble4x4:(struct ? )arg0 atTime:(CGFloat)arg1 ;
-(void)setFloat4x4:(struct ? )arg0 atTime:(CGFloat)arg1 ;


@end


#endif