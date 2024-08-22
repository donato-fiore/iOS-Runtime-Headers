// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHBOTTOMUPSTROKEGROUPINGSTRATEGY_H
#define CHBOTTOMUPSTROKEGROUPINGSTRATEGY_H

@class NSString, NSArray;


#import "CHStrokeGroupingStrategy.h"

@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    CGVector _defaultOrientationVector;
    CGVector _defaultDeviationVector;
    NSString *_strategyIdentifier;
    CGFloat _strokeDeviationCapCoeff;
    CGFloat _groupingMergingCostThresh;
    CGFloat _groupingMergingEndCostLowThresh;
    CGFloat _groupingSimilarCostThresh;
    NSInteger _groupingContextSize;
    CGFloat _mergeEndDxCostCoeff;
    CGFloat _mergeEndDyCostCoeff;
    CGFloat _mergeEndBelowModifier;
    CGFloat _mergeEndLeftModifier;
    CGFloat _mergeMiddleDxCostCoeff;
    CGFloat _mergeMiddleDyCostCoeff;
    CGFloat _mergeMiddleBelowModifier;
    NSInteger _splitMinimumStrokeCount;
    NSInteger _splitMaxNaturalIndexDiffThreshold;
    BOOL _shouldLimitDefaultWritingOrientationDeviation;
    BOOL _shouldAdjustDeviationOfSmallGroups;
    BOOL _shouldCoalesceLastSubstrokes;
}


@property (readonly, nonatomic) BOOL isInlineContinuousMode; // ivar: _isInlineContinuousMode
@property (readonly, nonatomic) NSArray *textInputTargets; // ivar: _textInputTargets


+(struct vector<CGRect, std::allocator<CGRect>> )_boundingBoxesOfStrokesInGroup:(id)arg0 rotatedAroundPoint:(struct CGPoint )arg1 byAngle:(CGFloat)arg2 ;
-(?)flippedCenters:(?)arg0 ofSubstrokes:(?)arg1 maxStrokesGapbegnning;
-(BOOL)refineWritingOrientationAndResortSubstrokes:(id)arg0 averageWritingOrientation:(struct CGVector *)arg1 ;
-(CGFloat)_scaleFactorForBoundsHeight:(CGFloat)arg0 ;
-(CGFloat)_strokeGroupConfidenceForSortedSubstrokes:(id)arg0 writingDirectionSortedStrokeIdentifiers:(id)arg1 localStrokeWritingOrientations:(*void)arg2 averageWritingOrientation:(struct CGVector )arg3 averageStrokeDeviation:(struct CGVector )arg4 ;
-(CGFloat)_verticalOffsetForBoundsHeight:(CGFloat)arg0 andScaleFactor:(CGFloat)arg1 ;
-(NSInteger)compareDistanceInWritingSequenceOfStroke:(id)arg0 andStroke:(id)arg1 toReferenceStroke:(id)arg2 ;
-(id)_averageAngleAndReliabilityForStrokeGroup:(id)arg0 ;
-(id)_lastSubstrokeCoalescedWithOverlappingSubstrokes:(id)arg0 strokeDeviation:(struct CGVector )arg1 ;
-(id)_newTextLineStrokeGroupWithStroke:(id)arg0 withSubstrokePlacements:(id)arg1 reusableIDRemovedGroups:(id)arg2 ;
-(id)_textLineStrokeGroupByAddingStroke:(id)arg0 withSubstrokePlacements:(id)arg1 intoStrokeGroup:(id)arg2 mergingEndSubgroup:(BOOL)arg3 bestStrokeMergeEnd:(id)arg4 ;
-(id)_writingDirectionSortedStrokeIdentifiersFromSubstrokes:(id)arg0 localWritingOrientations:(*void)arg1 ;
-(id)initWithStrokeProvider:(id)arg0 defaultWritingOrientation:(NSInteger)arg1 locales:(id)arg2 isInlineContinuousMode:(BOOL)arg3 inlineContinuousModeTargets:(id)arg4 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg0 translationVector:(struct CGVector )arg1 originalDrawing:(*id)arg2 orderedStrokesIDs:(*id)arg3 rescalingFactor:(*CGFloat)arg4 ;
-(id)strategyIdentifier;
-(id)tryRegroupingStrokesInGroup:(id)arg0 substrokePlacementsByStrokeIdentifier:(id)arg1 cancellationBlock:(id)arg2 ;
-(id)updatedGroupingResult:(id)arg0 byAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 stableStrokeIdentifiers:(id)arg3 allSubstrokesByStrokeIdentifier:(id)arg4 withCancellationBlock:(id)arg5 ;
-(struct CGRect )_normalizedBoundsForWritingDirectionSortedStrokes:(id)arg0 strokeWritingOrientations:(*void)arg1 firstStrokeDeviation:(struct CGVector )arg2 originalDrawing:(*id)arg3 rotatedSortedStrokes:(*void)arg4 ;
-(struct CGVector )_averageVectorFromCoalescedSubstrokes:(id)arg0 toSubstroke:(id)arg1 withOrientation:(struct CGVector )arg2 strokeRef:(id)arg3 strokeDest:(id)arg4 ;
-(struct CGVector )clippedWritingOrientation:(struct CGVector )arg0 ;
-(void)_applyDefaultGroupingParameters;
-(void)_applyStrictGroupingParameters;
-(void)_getMergingEndOfLineCost:(*CGFloat)arg0 mergingEndOfLineStroke:(*id)arg1 forStroke:(id)arg2 consistingOfSubstrokes:(id)arg3 toLineGroup:(id)arg4 refSubstrokeIndex:(NSInteger)arg5 ;
-(void)_getMergingLowerBoundCost:(*CGFloat)arg0 withStrokeBounds:(struct CGRect )arg1 toLineGroup:(id)arg2 ;
-(void)_updateGroups:(id)arg0 createdGroups:(id)arg1 deletedGroups:(id)arg2 forAddedStroke:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4 reusableIDRemovedGroups:(id)arg5 trySplit:(BOOL)arg6 cancellationBlock:(id)arg7 ;
-(void)estimateWritingDirectionAndSortSubstrokesAccordingly:(*id)arg0 averageWritingOrientation:(struct CGVector *)arg1 averageStrokeDeviation:(struct CGVector *)arg2 ;
-(void)getMergingEndOfLineCost:(*CGFloat)arg0 mergingEndOfLineStroke:(*id)arg1 forStroke:(id)arg2 consistingOfSubstrokes:(id)arg3 toLineGroup:(id)arg4 ;
-(void)getMergingMiddleOfLineCost:(*CGFloat)arg0 mergingMiddleOfLineStroke:(*id)arg1 forStroke:(id)arg2 consistingOfSubstrokes:(id)arg3 toLineGroup:(id)arg4 ;
-(void)mergeGroupsPostProcessing:(id)arg0 createdGroups:(id)arg1 deletedGroups:(id)arg2 ;
-(void)refineLocalWritingOrientationsForSubstrokes:(id)arg0 useCoalescedCenter:(BOOL)arg1 ;
-(void)smoothLocalWritingOrientations:(*void)arg0 ;
-(void)sortSubstrokesByWritingDirection:(id)arg0 averageWritingOrientation:(struct CGVector *)arg1 ;
-(void)updateLocalStrokeDeviationsForSubstrokes:(id)arg0 averageStrokeDeviation:(struct CGVector *)arg1 ;
-(void)updateLocalWritingOrientationsForSubstrokes:(id)arg0 useCoalescedCenter:(BOOL)arg1 ;


@end


#endif