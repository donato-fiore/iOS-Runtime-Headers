// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUTABLEFLOATARRAY_H
#define MUTABLEFLOATARRAY_H



#import "FloatArray.h"

@interface MutableFloatArray : FloatArray {
    *float _start;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) *float mutableFloats;


-(*float)floats;
-(float)floatAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCount:(NSUInteger)arg0 ;
-(id)initWithCount:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithFloat:(float)arg0 repeatCount:(NSUInteger)arg1 capacity:(NSUInteger)arg2 ;
-(id)initWithZeros:(NSUInteger)arg0 ;
-(id)initWithZeros:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(void)addConstant:(float)arg0 ;
-(void)appendFloat:(float)arg0 ;
-(void)removeFromStart:(NSUInteger)arg0 ;
-(void)setFloat:(float)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFloat:(float)arg0 inRange:(struct _NSRange )arg1 ;
-(void)setFloats:(*float)arg0 inRange:(struct _NSRange )arg1 ;


@end


#endif