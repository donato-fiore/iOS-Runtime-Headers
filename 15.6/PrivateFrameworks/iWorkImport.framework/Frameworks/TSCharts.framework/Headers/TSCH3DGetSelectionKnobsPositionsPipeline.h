// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINE_H
#define TSCH3DGETSELECTIONKNOBSPOSITIONSPIPELINE_H

@class TSCH3DChartRep, NSArray;
@protocol TSCH3DSceneObjectDelegator;


#import "TSCH3DSceneRenderPipeline.h"
#import "TSCH3DGetSelectionKnobsPositionsPipelineDelegate.h"

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>

 {
    TSCH3DChartRep *_rep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *_sceneObjectDelegate;
    NSArray *_selection;
    float _normalizedKnobRadius;
}


@property (readonly, nonatomic) NSArray *projectedPoints; // ivar: _projectedPoints


+(id)pipelineWithRep:(id)arg0 scene:(id)arg1 selection:(id)arg2 normalizedKnobRadius:(float)arg3 ;
-(BOOL)render;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)initWithRep:(id)arg0 scene:(id)arg1 selection:(id)arg2 normalizedKnobRadius:(float)arg3 ;
-(id)makeDelegateWithScene:(id)arg0 ;
-(id)makeDelegateWithSceneObject:(id)arg0 scene:(id)arg1 ;
-(void)getSelectionKnobsPositions:(id)arg0 ;


@end


#endif