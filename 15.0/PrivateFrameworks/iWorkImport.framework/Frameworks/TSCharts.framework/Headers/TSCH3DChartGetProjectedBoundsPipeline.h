// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTGETPROJECTEDBOUNDSPIPELINE_H
#define TSCH3DCHARTGETPROJECTEDBOUNDSPIPELINE_H



#import "TSCH3DGetBoundsPipeline.h"
#import "TSCH3DCamera.h"
#import "TSCH3DChartScenePropertyAccessor.h"

@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline {
    ChartProjectedBoundsSpaces _spaces;
    TSCH3DCamera *_originalCamera;
    TSCH3DChartScenePropertyAccessor *_originalSceneAccessor;
    box<glm::detail::tvec3<float>> _shadowsLayoutBounds;
    box<glm::detail::tvec3<float>> _layoutBounds;
    box<glm::detail::tvec3<float>> _constantDepthBodyLayoutBounds;
    box<glm::detail::tvec3<float>> _bodyLayoutBounds;
    box<glm::detail::tvec3<float>> _labelsLayoutBounds;
    box<glm::detail::tvec3<float>> _chartBounds;
    box<glm::detail::tvec3<float>> _orientBounds;
    box<glm::detail::tvec3<float>> _drawingBounds;
    box<glm::detail::tvec3<float>> _labelsBounds;
}


@property (nonatomic) box<glm::detail::tvec2<float>> bodyLayoutInPage; // ivar: _bodyLayoutInPage
@property (nonatomic) box<glm::detail::tvec2<float>> containingViewport; // ivar: _containingViewport
@property (nonatomic) BOOL enableScaledDepth; // ivar: _enableScaledDepth
@property (nonatomic) int labelsMode; // ivar: _labelsMode
@property (nonatomic) box<glm::detail::tvec2<float>> layoutInPage; // ivar: _layoutInPage
@property (readonly, nonatomic) *void spaces;


-(BOOL)p_excludesLabels;
-(BOOL)p_updatesLabelsOnly;
-(BOOL)run;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)chartSceneObjectClasses;
-(id)drawingBoundsSceneObjectClasses;
-(id)labelsSceneObjectClasses;
-(id)updatedConstantDepthSceneFromScene:(id)arg0 ;
-(int)p_depthBoundsTypes;
-(struct box<glm::detail::tvec3<float>> )boundsFromObjectBoundsOfType:(int)arg0 ;
-(struct box<glm::detail::tvec3<float>> )getBoundsFromObjectBoundsForScene:(id)arg0 boundsType:(int)arg1 ;
-(struct box<glm::detail::tvec3<float>> )p_extendLabelsBoundsToBounds:(*void)arg0 ;
-(void)calculateBounds;
-(void)calculateBoundsIfNecessary;
-(void)calculateLabelsBounds;
-(void)calculateLabelsBoundsIfNecssary;
-(void)calculateLayoutBounds;
-(void)calculateLayoutBoundsSkippingLayoutSceneBounds:(BOOL)arg0 ;
-(void)calculateLayoutLabelsBounds;
-(void)dealloc;
-(void)updateBounds;
-(void)updateLayoutBounds;
-(void)updateLayoutBoundsIfNecessary;
-(void)updateRenderBounds;


@end


#endif