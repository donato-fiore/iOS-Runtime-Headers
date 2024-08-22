// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATURETRANSFORMERTOUNITNORM_H
#define PGFEATURETRANSFORMERTOUNITNORM_H



#import "PGFeatureSliceTransformer.h"

@interface PGFeatureTransformerToUnitNorm : PGFeatureSliceTransformer



+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)name;
-(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg0 error:(*id)arg1 ;


@end


#endif