// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTSCENEAREALAYOUTITEM_H
#define TSCH3DCHARTSCENEAREALAYOUTITEM_H



#import "TSCHChartAbstractAreaLayoutItem.h"
#import "TSCH3DChartResizerHelper.h"
#import "TSCH3DVector.h"
#import "TSCH3DScene.h"

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {
    TSCH3DChartResizerHelper *_resizerHelper;
    tvec2<float> _chartBodyLayoutOffsetInChartAreaLayoutSpace;
    BOOL _isInvalidated;
    tvec4<float> _initialInfoChartScale;
}


@property (nonatomic) CGRect chartBodyLayoutRect; // ivar: _chartBodyLayoutRect
@property (readonly, nonatomic) tvec2<int> containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (nonatomic) BOOL isInvariant; // ivar: _isInvariant
@property (readonly, nonatomic) *void projectedBounds;
@property (readonly, nonatomic) TSCH3DScene *scene; // ivar: _scene


+(id)worldBoundsDescriptionForScene:(id)arg0 ;
-(*void)projectedBoundsWithScene:(id)arg0 forcesAccurateBounds:(BOOL)arg1 allowsEmptyBodyLayoutBounds:(BOOL)arg2 ;
-(BOOL)p_inwardLayoutCanUseCacheItem:(id)arg0 ;
-(BOOL)p_needsRefinementForInwardLayout;
-(BOOL)p_outwardLayoutCanUseCacheItem:(id)arg0 ;
-(BOOL)p_validCacheItem:(id)arg0 inward:(BOOL)arg1 ;
-(id)boundsLayout;
-(id)boundsLayout:(struct CGRect )arg0 scene:(id)arg1 forcesAccurateBounds:(BOOL)arg2 allowsEmptyBodyLayoutBounds:(BOOL)arg3 ;
-(id)debug_rotationBounds;
-(id)initWithParent:(id)arg0 ;
-(id)p_cache;
-(id)p_cacheInwardLayout;
-(id)p_cacheOutwardLayout;
-(id)p_updatedResizerHelper;
-(id)p_updatedResizerHelperForcingAccurateBounds:(BOOL)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )p_frameForSelectionPath:(id)arg0 sceneObjectClass:(Class)arg1 ;
-(struct CGRect )titleFrame;
-(struct tvec2<int> )p_currentModelSize;
-(void)clearAll;
-(void)clearScene;
-(void)invalidateBounds;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(NSInteger)arg1 ;
-(void)layoutInward;
-(void)layoutOutward;
-(void)p_updateBodyLayoutRect;
-(void)p_updateFromCacheItem:(id)arg0 ;
-(void)p_updateLayoutSize:(struct CGSize )arg0 chartBodyLayoutOffsetInChartAreaLayoutSpace:(*void)arg1 ;
-(void)p_validate;
-(void)setChartBodyLayoutSize:(struct CGSize )arg0 ;
-(void)setLayoutOffset:(struct CGPoint )arg0 ;
-(void)setStabilizedChartBodyLayoutRectUsingConverter:(*void)arg0 ;


@end


#endif