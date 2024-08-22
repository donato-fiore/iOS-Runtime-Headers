// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTPIEBENDEDLINELABELPLACEMENT_H
#define TSCHCHARTPIEBENDEDLINELABELPLACEMENT_H



#import "TSCHChartPieLabelPlacement.h"

@interface TSCHChartPieBendedLineLabelPlacement : TSCHChartPieLabelPlacement



-(BOOL)conflictBetweenWedgeLayoutInfo:(id)arg0 nextWedgeLayoutInfo:(id)arg1 ;
-(BOOL)innermostWedgeLayoutInfoWillUsePerpendicularAngle:(id)arg0 ;
-(BOOL)wedgeLayoutInfoShouldShiftForCleanUp:(id)arg0 withCleanUpOption:(NSUInteger)arg1 ;
-(BOOL)wedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg0 ;
-(BOOL)wedgeLayoutInfoShouldShiftToPreventTooShortCalloutLineFirstHalf:(id)arg0 ;
-(BOOL)wedgeLayoutInfoShouldUsePerpendicularAngle:(id)arg0 defaultMidpoint:(struct CGPoint )arg1 ;
-(CGFloat)amountLabelsInQuadrantNeedToShift:(id)arg0 cleanUpOption:(NSUInteger)arg1 ;
-(CGFloat)amountWedgeLayoutInfoShouldShiftForCleanUp:(id)arg0 withCleanUpOption:(NSUInteger)arg1 ;
-(CGFloat)amountWedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg0 ;
-(CGFloat)amountWedgeLayoutInfoShouldShiftToPreventShortFirstHalf:(id)arg0 ;
-(CGFloat)shiftAmountForWedgeLayoutInfo:(id)arg0 adjacentWedgeLayoutInfo:(id)arg1 adjacentShouldBeAbove:(BOOL)arg2 ;
-(CGFloat)totalHeightOverlapWithArray:(id)arg0 ;
-(id)arrayOfConflictingLabelsWithWedgeLayoutInfosOnOneSide:(id)arg0 ;
-(id)bottomLeftQuadrant;
-(id)bottomRightQuadrant;
-(id)innermostWedgeLayoutInfo:(id)arg0 ;
-(id)newCalloutLinePaths:(id)arg0 startLineEnd:(id)arg1 outStartLineEndPath:(*id)arg2 endLineEnd:(id)arg3 outEndLineEndPath:(*id)arg4 stroke:(id)arg5 outStroke:(*id)arg6 context:(struct CGContext *)arg7 contextScale:(float)arg8 ;
-(id)topLeftQuadrant;
-(id)topRightQuadrant;
-(id)updateLabelTransformsToPreventOverlap;
-(id)wedgeLayoutInfosInHorizontalHalfDiskWithWedgeLayoutInfos:(id)arg0 horizontalHalfDisk:(NSUInteger)arg1 ;
-(id)wedgeLayoutInfosInOneQuadrant:(id)arg0 verticalHalfDisk:(NSUInteger)arg1 horizontalHalfDisk:(NSUInteger)arg2 ;
-(id)wedgeLayoutInfosInVerticalHalfDiskWithWedgeLayoutInfos:(id)arg0 verticalHalfDisk:(NSUInteger)arg1 ;
-(id)wedgeLayoutInfosThatNeedShiftingToCleanUpQuadrant:(id)arg0 cleanUpOption:(NSUInteger)arg1 ;
-(struct CGAffineTransform )transformToShiftWedgeLayoutInfoAwayFromAdjacentWedgeLayoutInfo:(id)arg0 adjacentWedgeLayoutInfo:(id)arg1 adjacentShouldBeAbove:(BOOL)arg2 totalHeightOverlap:(CGFloat)arg3 ;
-(struct CGPoint )calloutLineEndpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )calloutLineMidPointForWedgeLayoutInfo:(id)arg0 startPoint:(struct CGPoint )arg1 endPoint:(struct CGPoint )arg2 ;
-(struct CGPoint )calloutLineStartpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )defaultCalloutLineMidPointForWedgeLayoutInfo:(id)arg0 startPoint:(struct CGPoint )arg1 endPoint:(struct CGPoint )arg2 ;
-(struct CGPoint )firstHalfOfBendedLineVectorNormalizedWithWedgeLayoutInfo:(id)arg0 shouldBeUpwards:(BOOL)arg1 ;
-(void)fixConflictsInOneQuadrantOfPieChartWithArray:(id)arg0 quadrantInHorizontalHalfDisk:(NSUInteger)arg1 ;
-(void)fixOverlapsOnOneVerticalSideWithConflictingLabelsArray:(id)arg0 ;
-(void)fixOverlapsOutsideWedges;
-(void)fixOverlapsWithWedgeLayoutInfos:(id)arg0 inVerticalHalfDisk:(NSUInteger)arg1 ;
-(void)preventOverlapsWithinWedges;
-(void)shiftLabelsVerticallyInOneQuadrantWithWedgeLayoutInfos:(id)arg0 shiftAmount:(CGFloat)arg1 quadrantInHorizontalHalfDisk:(NSUInteger)arg2 ;
-(void)shiftLabelsVerticallyInQuadrantIfNecessary:(id)arg0 withCleanUpOption:(NSUInteger)arg1 ;
-(void)shiftLabelsVerticallyToCleanUpPlacement;
-(void)shiftLabelsVerticallyToCleanUpPlacementWithCleanUpOption:(NSUInteger)arg0 ;


@end


#endif