// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLANIMATEDVECTOR3ARRAY_H
#define MDLANIMATEDVECTOR3ARRAY_H



#import "MDLAnimatedValue.h"

@interface MDLAnimatedVector3Array : MDLAnimatedValue

@property (nonatomic) NSUInteger elementCount; // ivar: _elementCount


-(NSUInteger)getDouble3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)getDouble3Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)getFloat3Array:(*NSUInteger)arg0 maxCount;
-(NSUInteger)getFloat3Array:(*NSUInteger)arg0 maxCount:(CGFloat)arg1 atTime;
-(NSUInteger)precision;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementCount:(NSUInteger)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)resetWithDouble3Array:(*NSUInteger)arg0 count:(*CGFloat)arg1 atTimes:(NSUInteger)arg2 count;
-(void)resetWithFloat3Array:(*NSUInteger)arg0 count:(*CGFloat)arg1 atTimes:(NSUInteger)arg2 count;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)setDouble3Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;
-(void)setFloat3Array:(*NSUInteger)arg0 count:(CGFloat)arg1 atTime;


@end


#endif