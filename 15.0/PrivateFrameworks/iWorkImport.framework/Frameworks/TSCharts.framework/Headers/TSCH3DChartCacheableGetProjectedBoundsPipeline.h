// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTCACHEABLEGETPROJECTEDBOUNDSPIPELINE_H
#define TSCH3DCHARTCACHEABLEGETPROJECTEDBOUNDSPIPELINE_H



#import "TSCH3DChartGetProjectedBoundsPipeline.h"
#import "TSCH3DGetBoundsProjector.h"

@interface TSCH3DChartCacheableGetProjectedBoundsPipeline : TSCH3DChartGetProjectedBoundsPipeline {
    BOOL _layoutBoundsValid;
    box<glm::detail::tvec3<float>> _shadowsLayout3DBounds;
    box<glm::detail::tvec3<float>> _layout3DBounds;
    box<glm::detail::tvec3<float>> _bodyLayout3DBounds;
    box<glm::detail::tvec3<float>> _constantDepthBodyLayout3DBounds;
    TSCH3DGetBoundsProjector *_projector;
}


@property (nonatomic) BOOL useIndividualBounds; // ivar: _useIndividualBounds


+(BOOL)includesDepthForUnitScaleForScene:(id)arg0 ;
+(void)setIncludesDepthForUnitScale:(BOOL)arg0 forScene:(id)arg1 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)updatedConstantDepthSceneFromScene:(id)arg0 ;
-(struct box<glm::detail::tvec3<float>> )boundsFromObjectBoundsOfType:(int)arg0 ;
-(void)calculateBounds;
-(void)calculateLayoutBounds;
-(void)calculateLayoutLabelsBounds;
-(void)invalidateCachedBounds;
-(void)updateBounds;
-(void)updateLayoutBounds;
-(void)updateRenderBounds;


@end


#endif