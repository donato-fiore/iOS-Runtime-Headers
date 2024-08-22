// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATEDQUATERNION_H
#define MDLANIMATEDQUATERNION_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedQuaternion : MDLAnimatedValue



-(NSUInteger)getDoubleQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloatQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )doubleQuaternionAtTime:(CGFloat)arg0 ;
-(struct ? )floatQuaternionAtTime:(CGFloat)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDoubleQuaternionArray:(struct ? *)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithFloatQuaternionArray:(struct ? *)arg0 atTimes:(*CGFloat)arg1 count:(NSUInteger)arg2 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDoubleQuaternion:(struct ? )arg0 atTime:(CGFloat)arg1 ;
-(void)setFloatQuaternion:(struct ? )arg0 atTime:(CGFloat)arg1 ;


@end


#endif