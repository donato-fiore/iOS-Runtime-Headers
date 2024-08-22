// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATURETRANSFORMERTOMASK_H
#define PGFEATURETRANSFORMERTOMASK_H



#import "PGFeatureSliceTransformer.h"

@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer

@property (readonly, nonatomic) float maskingValue; // ivar: _maskingValue


+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)name;
-(id)applyTransformationToFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)initWithMaskingFloatValue:(float)arg0 ;
-(id)initWithMaskingFloatValue:(float)arg0 fromIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2 ;


@end


#endif