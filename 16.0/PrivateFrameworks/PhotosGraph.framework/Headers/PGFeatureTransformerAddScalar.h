// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATURETRANSFORMERADDSCALAR_H
#define PGFEATURETRANSFORMERADDSCALAR_H



#import "PGFeatureSliceTransformer.h"

@interface PGFeatureTransformerAddScalar : PGFeatureSliceTransformer

@property (readonly, nonatomic) float scalarToAdd; // ivar: _scalarToAdd


+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)name;
-(id)applyTransformationToFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)initWithScalarToAdd:(float)arg0 ;
-(id)initWithScalarToAdd:(float)arg0 fromIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2 ;


@end


#endif