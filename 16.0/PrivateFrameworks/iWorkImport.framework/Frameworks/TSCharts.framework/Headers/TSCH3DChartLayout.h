// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTLAYOUT_H
#define TSCH3DCHARTLAYOUT_H



#import "TSCH2DChartLayout.h"
#import "TSCH3DChartSceneAreaLayoutItem.h"
#import "TSCH3DScene.h"

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (readonly, nonatomic) TSCH3DChartSceneAreaLayoutItem *areaItem;
@property (readonly, nonatomic) BOOL hasProjectedBounds;
@property (readonly, nonatomic) *void projectedBounds;
@property (readonly, nonatomic) TSCH3DScene *scene;


+(id)p_allScaleProperties;
+(id)p_propertiesThatInvalidateShadows;
+(id)p_propertiesThatResetSeriesStorage;
+(id)propertiesThatInvalidateLayout;
+(void)upgradeSceneDepthSettingsForChartInfo:(id)arg0 hasConstantDepth:(BOOL)arg1 willModifyBlock:(id)arg2 ;
-(BOOL)p_shouldClearSceneForLayoutSettings:(struct ? )arg0 ;
-(id)containingViewportVector;
-(id)infoChartScale;
-(id)initWithChartInfo:(id)arg0 ;
-(id)p_layoutTree;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGRect )boundsForResize;
-(void)dealloc;
-(void)layoutForResizingSize:(struct CGSize )arg0 ;
-(void)modelInvalidated:(id)arg0 ;
-(void)p_ensureValidForInwardLayout;
-(void)p_resetSeriesStorage;
-(void)setLayoutSettings:(struct ? )arg0 ;
-(void)setSeriesIndexedPieWedgeExplosions:(id)arg0 ;


@end


#endif