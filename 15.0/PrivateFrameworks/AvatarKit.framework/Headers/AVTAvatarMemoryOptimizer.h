// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARMEMORYOPTIMIZER_H
#define AVTAVATARMEMORYOPTIMIZER_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>

#import "AVTMemoji.h"

@interface AVTAvatarMemoryOptimizer : NSObject {
    AVTMemoji *_memoji;
    NSMapTable *_requiredVariantsPerMorpher;
    NSMutableArray *_requiredPresetVariantComponents;
    NSMutableArray *_presetVariantPrefixes;
}




+(void)optimizeMemoji:(id)arg0 ;
-(BOOL)clearCPUDataAfterUpload;
-(BOOL)keepCreasesAndCorners;
-(id)flattenTarget0:(id)arg0 weight0:(float)arg1 target1:(id)arg2 weight1:(float)arg3 inMorphTarget:(id)arg4 originalMorphTarget:(id)arg5 ;
-(id)initWithMemoji:(id)arg0 ;
-(void)applyMorphTarget:(id)arg0 weight:(float)arg1 toBaseGeometryBuffer:(*void)arg2 vertexCount:(NSUInteger)arg3 ;
-(void)applyMorphTarget:(id)arg0 weight:(float)arg1 toMorphTargetBuffer:(struct ? *)arg2 vertexCount:(NSUInteger)arg3 ;
-(void)changeTargetsAndInBetweens:(id)arg0 weights:(id)arg1 inBetweenCounts:(id)arg2 inBetweenWeights:(id)arg3 ofNode:(id)arg4 targetsToFlattenInBaseGeometry:(id)arg5 targetsToFlattenInOtherTarget:(id)arg6 nonOneWeightsOfTargetsToFlatten:(id)arg7 ;
-(void)optimize;
-(void)optimizeNode:(id)arg0 ;
-(void)optimizeNodeHierarchy:(id)arg0 ;
-(void)performFlatteningInNode:(id)arg0 targetsAndInBetweens:(id)arg1 targetsToFlattenInBaseGeometry:(id)arg2 targetsToFlattenInOtherTarget:(id)arg3 nonOneWeightsOfTargetsToFlatten:(id)arg4 ;
-(void)preprocess;
-(void)registerRequiredVariant:(id)arg0 weight:(float)arg1 inHierarchy:(id)arg2 ;
-(void)resolveInBetweensForTopLevelTargetAtIndex:(NSUInteger)arg0 topLevelTargetWeight:(float)arg1 topLevelTarget:(id)arg2 inBetweenWeights:(id)arg3 inBetweenTargets:(id)arg4 block:(id)arg5 ;


@end


#endif