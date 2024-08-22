// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSTAGEDAXISSCENE_H
#define TSCH3DCHARTSTAGEDAXISSCENE_H



#import "TSCH3DChartScene.h"

@interface TSCH3DChartStagedAxisScene : TSCH3DChartScene



+(BOOL)supportsValueAxisLabelAlignmentCaching;
-(void)addChartTitlesToScene;
-(void)addGridlinesToScene;
-(void)addLabelsToScene;
-(void)addObjectsToScene;
-(void)addPartsForEnumerator:(id)arg0 styleIndex:(NSUInteger)arg1 ;
-(void)addSageBoundsToScene;


@end


#endif