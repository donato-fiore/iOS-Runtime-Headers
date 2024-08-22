// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAFLOATMATRIX_H
#define MAFLOATMATRIX_H


#import <Foundation/Foundation.h>

#import "_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper.h"

@interface MAFloatMatrix : NSObject

@property (readonly, nonatomic) NSInteger columns;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSInteger rows;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *wrapper; // ivar: _wrapper


+(id)onesWithRows:(NSInteger)arg0 columns:(NSInteger)arg1 ;
+(id)zerosWithRows:(NSInteger)arg0 columns:(NSInteger)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 ;
-(BOOL)isApproximatelyEqualTo:(id)arg0 epsilon:(float)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)floatAtRow:(NSInteger)arg0 column:(NSInteger)arg1 ;
-(float)mean;
-(float)sum;
-(float)sumOfSquares;
-(id)array;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithData:(id)arg0 rows:(NSInteger)arg1 columns:(NSInteger)arg2 ;
-(id)initWithFloats:(*float)arg0 rows:(NSInteger)arg1 columns:(NSInteger)arg2 ;
-(id)initWithWrapper:(id)arg0 ;
-(id)matrixByAddingScalar:(float)arg0 ;
-(id)matrixByAppendingColumn:(id)arg0 ;
-(id)matrixByAppendingColumnsOfMatrix:(id)arg0 ;
-(id)matrixByAppendingRow:(id)arg0 ;
-(id)matrixBySubtractingMatrix:(id)arg0 ;
-(id)matrixBySubtractingScalar:(float)arg0 ;
-(id)meanAlongAxis:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)row:(NSInteger)arg0 ;
-(id)sumAlongAxis:(NSUInteger)arg0 ;


@end


#endif