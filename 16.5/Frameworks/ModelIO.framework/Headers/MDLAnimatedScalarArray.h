// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATEDSCALARARRAY_H
#define MDLANIMATEDSCALARARRAY_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedScalarArray : MDLAnimatedValue

@property (nonatomic) NSUInteger elementCount; // ivar: _elementCount


-(NSUInteger)getDoubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getDoubleArray:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)getFloatArray:(*float)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloatArray:(*float)arg0 maxCount:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementCount:(NSUInteger)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 atTimes:(*CGFloat)arg2 count:(NSUInteger)arg3 ;
-(void)resetWithFloatArray:(*float)arg0 count:(NSUInteger)arg1 atTimes:(*CGFloat)arg2 count:(NSUInteger)arg3 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDoubleArray:(*CGFloat)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;
-(void)setFloatArray:(*float)arg0 count:(NSUInteger)arg1 atTime:(CGFloat)arg2 ;


@end


#endif