// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLSPARSEMATRIX_H
#define PMLSPARSEMATRIX_H


#import <Foundation/Foundation.h>


@interface PMLSparseMatrix : NSObject

@property (nonatomic) BOOL isSymmetric; // ivar: _isSymmetric
@property (nonatomic) *sparse_m_float matrix; // ivar: _matrix
@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfRows;


+(id)sparseMatrixFromNumbers:(id)arg0 ;
+(id)sparseMatrixWithNumberOfRows:(NSUInteger)arg0 numberOfColumns:(NSUInteger)arg1 ;
-(float)maxValue;
-(float)minValue;
-(float)valueAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSparseMatrix:(struct sparse_m_float *)arg0 ;
-(void)_enumerateSparseRowsWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)enumerateNonZeroValuesForRow:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)enumerateNonZeroValuesWithBlock:(id)arg0 ;


@end


#endif