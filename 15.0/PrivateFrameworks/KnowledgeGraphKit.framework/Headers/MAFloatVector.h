// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAFLOATVECTOR_H
#define MAFLOATVECTOR_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "_TtC17KnowledgeGraphKit20MAFloatVectorWrapper.h"

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *wrapper; // ivar: _wrapper


+(id)meanVectorWithFloatVectors:(id)arg0 ;
+(id)onesOfCount:(NSInteger)arg0 ;
+(id)vectorRepeatingFloat:(float)arg0 count:(NSInteger)arg1 ;
+(id)zerosOfCount:(NSInteger)arg0 ;
-(BOOL)_isArrayOfFloats:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 epsilon:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)dotProductWithVector:(id)arg0 ;
-(float)floatAtIndex:(NSInteger)arg0 ;
-(float)mean;
-(float)standardDeviation;
-(float)sum;
-(float)sumOfSquares;
-(id)array;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFloats:(*float)arg0 count:(NSInteger)arg1 ;
-(id)initWithWrapper:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sliceFromStart:(NSInteger)arg0 toEnd:(NSInteger)arg1 ;
-(id)vectorByAddingScalar:(float)arg0 ;
-(id)vectorByAddingVector:(id)arg0 ;
-(id)vectorByAppendingArray:(id)arg0 ;
-(id)vectorByAppendingDoubles:(*CGFloat)arg0 count:(NSInteger)arg1 ;
-(id)vectorByAppendingFloat:(float)arg0 ;
-(id)vectorByAppendingFloats:(*float)arg0 count:(NSInteger)arg1 ;
-(id)vectorByAppendingVector:(id)arg0 ;
-(id)vectorByDividingByScalar:(float)arg0 ;
-(id)vectorByElementwiseMultiplyingByVector:(id)arg0 ;
-(id)vectorByElementwiseNaturalLogarithm;
-(id)vectorByElementwiseNaturalLogarithmIfPositive;
-(id)vectorByElementwiseRaisingToExponent:(float)arg0 ;
-(id)vectorByMultiplyingByScalar:(float)arg0 ;
-(id)vectorBySubtractingScalar:(float)arg0 ;
-(id)vectorBySubtractingVector:(id)arg0 ;


@end


#endif