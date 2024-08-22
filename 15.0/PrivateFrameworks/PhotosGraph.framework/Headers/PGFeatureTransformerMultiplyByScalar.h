// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATURETRANSFORMERMULTIPLYBYSCALAR_H
#define PGFEATURETRANSFORMERMULTIPLYBYSCALAR_H



#import "PGFeatureSliceTransformer.h"

@interface PGFeatureTransformerMultiplyByScalar : PGFeatureSliceTransformer

@property (readonly, nonatomic) float scalarToMultiply; // ivar: _scalarToMultiply


+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)name;
-(id)applyTransformationToFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)initWithScalarToMultiply:(float)arg0 ;
-(id)initWithScalarToMultiply:(float)arg0 fromIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2 ;


@end


#endif