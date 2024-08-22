// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSCENE_H
#define TSCH3DCHARTSCENE_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartSceneInfo.h"

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo *_sceneInfo;
}




+(BOOL)supportsValueAxisLabelAlignmentCaching;
+(void)addObjectsToSceneWithSceneInfo:(id)arg0 ;
-(id)chartInfo;
-(id)chartType;
-(id)initWithSceneInfo:(id)arg0 ;
-(id)scene;
-(id)seriesType;
-(id)styleProvidingSource;
-(struct ? )layoutSettings;
-(void)addAllLabelsToScene;
-(void)addAllObjectsToScene;
-(void)addChartTitlesToScene;
-(void)addLabelsToScene;
-(void)addObjectsToScene;
-(void)addSeriesObjectsToScene;
-(void)adjustSceneSettings;


@end


#endif