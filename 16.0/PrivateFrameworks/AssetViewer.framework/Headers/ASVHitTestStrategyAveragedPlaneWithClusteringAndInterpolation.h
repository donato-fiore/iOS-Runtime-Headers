// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVHITTESTSTRATEGYAVERAGEDPLANEWITHCLUSTERINGANDINTERPOLATION_H
#define ASVHITTESTSTRATEGYAVERAGEDPLANEWITHCLUSTERINGANDINTERPOLATION_H



#import "ASVHitTestStrategy.h"

@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy {
    float _currentPlaneHeight;
    ? _currentPlaneNormal;
}




-(BOOL)decisionHistoryContainsPlaneChange:(id)arg0 relativeToNewDecision:(id)arg1 ;
-(BOOL)hasFormedClusterForInitialPlacement:(*float)arg0 planeNormal;
-(BOOL)hasFormedClusterForMovement:(*float)arg0 planeNormal;
-(BOOL)resultsContainPoorQualityEstimatedResults:(id)arg0 ;
-(id)decisionForHitTestOfType:(NSInteger)arg0 atScreenPoint:(id)arg1 inFrame:(struct CGSize )arg2 withViewportSize:(float)arg3 assetPositionmaxDistance;
-(id)decisionForHitTestOfType:(NSInteger)arg0 atScreenPoint:(id)arg1 inSession:(struct CGSize )arg2 withViewportSize:(float)arg3 assetPositionmaxDistance;
-(id)decisionForHitTestOfType:(NSInteger)arg0 originalResult:(id)arg1 atImagePoint:(id)arg2 inFrame:(struct CGSize )arg3 withViewportSize:(float)arg4 assetPositionmaxDistance;
-(id)decisionForMovementFromOriginalResult:(id)arg0 atImagePoint:(id)arg1 inFrame:(struct CGSize )arg2 withViewportSize:(float)arg3 assetPositionmaxDistance;
-(id)decisionForPlacementFromOriginalResult:(id)arg0 afterPlacementTimeout:(BOOL)arg1 atImagePoint:(id)arg2 inFrame:(struct CGSize )arg3 withViewportSize:(float)arg4 assetPositionmaxDistance;
-(id)init;
-(id)interpolatedDecisionForDecision:(id)arg0 ;
-(id)reprojectOntoCurrentPlaneAtImagePoint:(id)arg0 inFrame:(struct CGSize )arg1 withViewportSize:(float)arg2 assetPositionmaxDistance;
-(void)clearHistory;


@end


#endif