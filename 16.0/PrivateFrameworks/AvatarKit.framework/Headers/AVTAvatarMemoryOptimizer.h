// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARMEMORYOPTIMIZER_H
#define AVTAVATARMEMORYOPTIMIZER_H

@class NSMapTable, NSMutableArray, NSMutableSet, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AVTMemoji.h"

@interface AVTAvatarMemoryOptimizer : NSObject {
    AVTMemoji *_memoji;
    NSMapTable *_requiredVariantsPerMorpher;
    NSMutableArray *_requiredMorphVariantComponents;
    NSMutableSet *_presetVariantPrefixes;
    NSArray *_oldWeights;
    NSArray *_oldMainTargets;
    BOOL _hasInBetweens;
    NSMutableArray *_newWeights;
    NSMutableArray *_newTargetsAndInBetweens;
    NSMutableArray *_newInBetweenCounts;
    NSMutableArray *_newInBetweenWeights;
    NSMutableArray *_indicesOfTargetsToFlattenInBaseGeometry;
    NSMutableDictionary *_indicesOfTargetsToFlattenInOtherTarget;
    NSMutableDictionary *_nonOneWeightsOfTargetsToFlatten;
    NSArray *_oldCorrectives;
    NSArray *_oldCorrectiveDriverCounts;
    NSArray *_oldCorrectiveDriverIndices;
    BOOL _hasCorrectives;
    BOOL _hasCorrectiveInBetweens;
    NSMutableArray *_newCorrectivesAndInBetweens;
    NSMutableArray *_newCorrectiveDriverCounts;
    NSMutableArray *_newCorrectiveDriverIndices;
    NSMutableArray *_newCorrectiveInBetweenCounts;
    NSMutableArray *_newCorrectiveInBetweenWeights;
    NSMutableArray *_indicesOfCorrectivesToFlattenInBaseGeometry;
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInMainTarget;
    NSMutableDictionary *_indicesOfCorrectivesToFlattenInOtherCorrective;
    NSMutableDictionary *_nonOneWeightsOfCorrectivesToFlatten;
}




-(BOOL)shouldClearCPUDataAfterUpload;
-(BOOL)shouldKeepCreasesAndCorners;
-(id)flattenTarget0:(id)arg0 weight0:(float)arg1 target1:(id)arg2 weight1:(float)arg3 inMorphTarget:(id)arg4 originalMorphTarget:(id)arg5 ;
-(id)initWithMemoji:(id)arg0 ;
-(void)applyMorphTarget:(id)arg0 weight:(float)arg1 toBaseGeometryBuffer:(*void)arg2 vertexCount:(NSUInteger)arg3 ;
-(void)applyMorphTarget:(id)arg0 weight:(float)arg1 toMorphTargetBuffer:(struct ? *)arg2 vertexCount:(NSUInteger)arg3 ;
-(void)classifyTargetsOfMorpher:(id)arg0 node:(id)arg1 ;
-(void)flattenCorrectiveAtIndex:(NSUInteger)arg0 inBaseGeometryUsingWeight:(float)arg1 ;
-(void)flattenCorrectiveAtIndex:(NSUInteger)arg0 inCorrectiveAtIndex:(NSUInteger)arg1 weight:(float)arg2 ;
-(void)flattenCorrectiveAtIndex:(NSUInteger)arg0 inTargetAtIndex:(NSUInteger)arg1 weight:(float)arg2 ;
-(void)flattenCorrectivesAtIndices:(id)arg0 inCorrective:(id)arg1 weight:(float)arg2 morpher:(id)arg3 ;
-(void)flattenCorrectivesAtIndices:(id)arg0 inCorrectiveAtIndex:(NSUInteger)arg1 morpher:(id)arg2 ;
-(void)flattenRelevantTargetsInOtherTargetsOfMorpher:(id)arg0 ;
-(void)flattenRelevantTargetsOfMorpher:(id)arg0 inBaseGeometryOfNode:(id)arg1 ;
-(void)flattenTargetAtIndex:(NSUInteger)arg0 inBaseGeometryUsingWeight:(float)arg1 ;
-(void)flattenTargetAtIndex:(NSUInteger)arg0 inTargetAtIndex:(NSUInteger)arg1 weight:(float)arg2 ;
-(void)flattenTargetsAtIndices:(id)arg0 correctivesAtIndices:(id)arg1 inTarget:(id)arg2 weight:(float)arg3 morpher:(id)arg4 ;
-(void)flattenTargetsAtIndices:(id)arg0 correctivesAtIndices:(id)arg1 inTargetAtIndex:(NSUInteger)arg2 morpher:(id)arg3 ;
-(void)flattenTargetsOfMorpher:(id)arg0 node:(id)arg1 ;
-(void)keepCorrectiveAtIndex:(NSUInteger)arg0 morpher:(id)arg1 ;
-(void)keepCorrectiveAtIndex:(NSUInteger)arg0 withDriverIndices:(id)arg1 morpher:(id)arg2 ;
-(void)keepTargetAtIndex:(NSUInteger)arg0 morpher:(id)arg1 ;
-(void)optimizeMemoji;
-(void)optimizeNode:(id)arg0 ;
-(void)optimizeNodeHierarchy:(id)arg0 ;
-(void)preprocessMemoji;
-(void)registerRequiredVariant:(id)arg0 weight:(float)arg1 inHierarchy:(id)arg2 ;
-(void)resolveInBetweensForTarget:(id)arg0 weight:(float)arg1 inBetweenWeights:(id)arg2 inBetweenTargets:(id)arg3 block:(id)arg4 ;


@end


#endif