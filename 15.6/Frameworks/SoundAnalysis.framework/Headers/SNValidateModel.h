// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNVALIDATEMODEL_H
#define SNVALIDATEMODEL_H


#import <Foundation/Foundation.h>


@interface SNValidateModel : NSObject



+(BOOL)ensureFeatureWithDescription:(id)arg0 isOptional:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)ensureFeatureWithDescription:(id)arg0 isOptional:(BOOL)arg1 isFreelyShapedMultiArrayWithDataType:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)ensureFeatureWithDescription:(id)arg0 isOptional:(BOOL)arg1 isMultiArrayWithDataType:(NSInteger)arg2 dimensionSizeRanges:(id)arg3 error:(*id)arg4 ;
+(BOOL)ensureFeatureWithDescription:(id)arg0 isOptional:(BOOL)arg1 isMultiArrayWithDataType:(NSInteger)arg2 shapeOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)ensureModelDescription:(id)arg0 hasInputFeatureNames:(id)arg1 hasOutputFeatureNames:(id)arg2 error:(*id)arg3 ;
+(BOOL)ensureMultiArrayConstraint:(id)arg0 hasDataType:(NSInteger)arg1 andDimensionSizeRanges:(id)arg2 error:(*id)arg3 ;
+(BOOL)ensureMultiArrayConstraint:(id)arg0 hasDataType:(NSInteger)arg1 andShapeOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)ensureMultiArrayConstraint:(id)arg0 hasDataType:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)ensureMultiArrayIsFreelyShapedByShapeConstraint:(id)arg0 error:(*id)arg1 ;
+(BOOL)ensureMultiArrayIsFreelyShapedWithConstraint:(id)arg0 hasDataType:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)ensureMultiArrayIsRequiredByFeatureDescription:(id)arg0 error:(*id)arg1 ;
+(BOOL)ensureMultiArrayShapeConstraint:(id)arg0 hasDimensionSizeRanges:(id)arg1 error:(*id)arg2 ;
+(BOOL)ensureMultiArrayShapeConstraint:(id)arg0 hasShapeOptions:(id)arg1 error:(*id)arg2 ;


@end


#endif