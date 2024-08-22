// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLANIMATEDQUATERNIONARRAY_H
#define MDLANIMATEDQUATERNIONARRAY_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedQuaternionArray : MDLAnimatedValue

@property (nonatomic) NSUInteger elementCount; // ivar: _elementCount


-(NSUInteger)getDoubleQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getDoubleQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)getFloatQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloatQuaternionArray:(struct ? *)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementCount:(NSUInteger)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDoubleQuaternionArray:(struct ? *)arg0 count:(NSUInteger)arg1 atTimes:(*CGFloat)arg2 count:(NSUInteger)arg3 ;
-(void)resetWithFloatQuaternionArray:(struct ? *)arg0 count:(NSUInteger)arg1 atTimes:(*CGFloat)arg2 count:(NSUInteger)arg3 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDoubleQuaternionArray:(struct ? *)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setFloatQuaternionArray:(struct ? *)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;


@end


#endif