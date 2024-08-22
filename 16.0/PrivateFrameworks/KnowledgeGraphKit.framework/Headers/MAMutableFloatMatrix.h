// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAMUTABLEFLOATMATRIX_H
#define MAMUTABLEFLOATMATRIX_H



#import "MAFloatMatrix.h"
#import "_TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper.h"

@interface MAMutableFloatMatrix : MAFloatMatrix

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper *wrapper;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addScalar:(float)arg0 ;
-(void)appendRow:(id)arg0 ;
-(void)setFloat:(float)arg0 atRow:(NSInteger)arg1 column:(NSInteger)arg2 ;
-(void)subtractMatrix:(id)arg0 ;
-(void)subtractScalar:(float)arg0 ;


@end


#endif