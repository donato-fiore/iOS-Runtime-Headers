// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTOPDOWNSTROKEGROUPINGSTRATEGY_H
#define CHTOPDOWNSTROKEGROUPINGSTRATEGY_H

@class NSString, NSArray;


#import "CHStrokeGroupingStrategy.h"

@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSString *_strategyIdentifier;
    CGFloat _minimumDrawingSize;
    CGFloat _splitCostThreshold;
    CGFloat _transitionTimeWeight;
    CGFloat _transitionTimeUpperBound;
    CGFloat _verticalDistanceWeight;
    CGFloat _leftTransitionWeight;
    CGFloat _leftTransitionUpperBound;
    CGFloat _horizontalDistanceBarrier;
    CGFloat _horizontalDistanceWeight;
    CGFloat _aspectRatioWeight;
    CGFloat _writingDirectionWeight;
    CGFloat _writingDirectionUpperBound;
    CGFloat _writingDirectionMinCoeff;
    CGFloat _minLineHeightScore;
    CGFloat _minArcLengthScore;
    CGFloat _expectedSubstrokesPerLine;
    CGFloat _minSubstrokesForSplit;
    CGFloat _targetFitnessWeight;
    BOOL _reorderStrokes;
}


@property (readonly, nonatomic) NSArray *textInputTargets; // ivar: _textInputTargets


-(BOOL)_isSplitAcceptable:(id)arg0 arcLengthsByStrokeIdentifier:(id)arg1 outRejectionReason:(*id)arg2 ;
-(CGFloat)_accumulatedTimeDifferences:(id)arg0 ;
-(CGFloat)_estimateSplitScore:(id)arg0 withTextInputTargets:(id)arg1 arcLengthsByStrokeIdentifier:(id)arg2 ;
-(id)_findMostProbableTextInputTarget:(id)arg0 forGroupBounds:(struct CGRect )arg1 outOverlap:(*CGFloat)arg2 outDistance:(*CGFloat)arg3 ;
-(id)_strokeGroupWithStrokes:(id)arg0 orderedStrokeIdentifiers:(id)arg1 previousGroups:(id)arg2 shouldSearchForStableIdentifier:(BOOL)arg3 ;
-(id)_strokeIdentifersFromStrokes:(id)arg0 ;
-(id)initWithStrokeProvider:(id)arg0 locale:(id)arg1 textInputTargets:(id)arg2 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg0 translationVector:(struct CGVector )arg1 originalDrawing:(*id)arg2 orderedStrokesIDs:(*id)arg3 rescalingFactor:(*CGFloat)arg4 ;
-(id)strategyIdentifier;
-(id)updatedGroupingResult:(id)arg0 byAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 stableStrokeIdentifiers:(id)arg3 allSubstrokesByStrokeIdentifier:(id)arg4 withCancellationBlock:(id)arg5 ;


@end


#endif