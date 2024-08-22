// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DRAYPICKPIPELINE_H
#define TSCH3DRAYPICKPIPELINE_H

@class NSArray;
@protocol TSCH3DSceneObjectDelegator;


#import "TSCH3DSceneRenderPipeline.h"
#import "TSCH3DRayPickPipelineDelegate.h"
#import "TSCH3DPickedPoint.h"

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>

 {
    tvec2<float> _pickPosition;
    TSCH3DRayPickPipelineDelegate *_sceneObjectDelegate;
}


@property (readonly, nonatomic) TSCH3DPickedPoint *pickedPoint;
@property (readonly, nonatomic) NSArray *pickedPoints;
@property (nonatomic) float slack;


+(id)pipelineWithScene:(id)arg0 position:(*void)arg1 ;
-(BOOL)run;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)initWithScene:(id)arg0 position:(*void)arg1 ;
-(id)makeDelegateWithScene:(id)arg0 ;
-(id)makeDelegateWithSceneObject:(id)arg0 scene:(id)arg1 ;
-(id)p_closestPickedPoint;
-(id)p_frontMostPickedPoint;
-(id)p_renderProcessor;
-(id)p_unsortedPickedPoints;
-(void)rayPick:(id)arg0 ;


@end


#endif