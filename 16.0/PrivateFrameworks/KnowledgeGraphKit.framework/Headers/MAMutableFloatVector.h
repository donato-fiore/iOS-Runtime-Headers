// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAMUTABLEFLOATVECTOR_H
#define MAMUTABLEFLOATVECTOR_H



#import "MAFloatVector.h"
#import "_TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper.h"

@interface MAMutableFloatVector : MAFloatVector

@property (readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper *wrapper;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addScalar:(float)arg0 ;
-(void)addVector:(id)arg0 ;
-(void)appendArray:(id)arg0 ;
-(void)appendDoubles:(*CGFloat)arg0 count:(NSInteger)arg1 ;
-(void)appendFloat:(float)arg0 ;
-(void)appendFloats:(*float)arg0 count:(NSInteger)arg1 ;
-(void)appendVector:(id)arg0 ;
-(void)divideByScalar:(float)arg0 ;
-(void)elementwiseMultiplyByVector:(id)arg0 ;
-(void)elementwiseRaiseToExponent:(float)arg0 ;
-(void)multiplyByScalar:(float)arg0 ;
-(void)setFloat:(float)arg0 atIndex:(NSInteger)arg1 ;
-(void)subtractScalar:(float)arg0 ;
-(void)subtractVector:(id)arg0 ;


@end


#endif