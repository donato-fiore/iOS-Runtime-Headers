// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTPIESTRAIGHTLINELABELPLACEMENT_H
#define TSCHCHARTPIESTRAIGHTLINELABELPLACEMENT_H

@class NSDictionary, NSMutableDictionary;


#import "TSCHChartPieLabelPlacement.h"

@interface TSCHChartPieStraightLineLabelPlacement : TSCHChartPieLabelPlacement {
    NSDictionary *_seriesIndexToWedgeLayoutInfo;
    NSDictionary *_seriesIndexToAllWedgeLayoutInfosToTheLeft;
    NSUInteger _CGPointCellSize;
    NSMutableDictionary *_spatialMap;
    NSMutableDictionary *_seriesIndexToConflictingWedgeLayoutInfos;
}




-(BOOL)conflictsExist;
-(BOOL)shouldShiftWedgeLayoutInfo:(id)arg0 ;
-(CGFloat)shiftAmountForWedgeLayoutInfo:(id)arg0 ;
-(NSUInteger)spatialMapCellSize;
-(id)newCalloutLinePaths:(id)arg0 startLineEnd:(id)arg1 outStartLineEndPath:(*id)arg2 endLineEnd:(id)arg3 outEndLineEndPath:(*id)arg4 stroke:(id)arg5 outStroke:(*id)arg6 context:(struct CGContext *)arg7 contextScale:(float)arg8 ;
-(id)setOfKeysForWedgeLayoutInfo:(id)arg0 ;
-(id)updateLabelTransformsToPreventOverlap;
-(id)wedgeLayoutInfo:(id)arg0 conflictsWithWedgeLayoutInfos:(id)arg1 ;
-(id)wedgeLayoutInfosThatShareCellsWithWedgeLayoutInfo:(id)arg0 ;
-(id)wedgeLayoutInfosToTheLeftOfWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )calloutLineEndpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )calloutLineStartpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )cellForPoint:(struct CGPoint )arg0 ;
-(void)createSeriesIndexToAllWedgeLayoutInfosToTheLeftMap;
-(void)createSeriesIndexToConflictingWedgeLayoutInfosMap;
-(void)createSeriesIndexToWedgeLayoutInfoMap;
-(void)createSpatialMap;
-(void)fixConflictsForWedgeLayoutInfos;
-(void)fixTitleConflictsIfNeeded;
-(void)invalidateWedgeLayoutInfo:(id)arg0 oldSetOfKeysForWedgeLayoutInfo:(id)arg1 ;
-(void)setUpCaches;
-(void)shiftLabelOutwards:(id)arg0 shiftAmount:(CGFloat)arg1 invalidateCahes:(BOOL)arg2 ;
-(void)updateConflictsForWedgeLayoutInfo:(id)arg0 wedgeLayoutInfosThatShareCells:(id)arg1 ;
-(void)updateSeriesIndexToConflictingWedgeLayoutInfosMapForInvalidatedWedgeLayoutInfo:(id)arg0 oldSetOfKeysForWedgeLayoutInfo:(id)arg1 ;
-(void)updateSpatialMapWithInvalidatedWedgeLayoutInfo:(id)arg0 oldSetOfKeysForWedgeLayoutInfo:(id)arg1 ;


@end


#endif