// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DCHARTBOUNDSLAYOUT_H
#define TSCH3DCHARTBOUNDSLAYOUT_H


#import <Foundation/Foundation.h>

#import "TSCH3DScene.h"
#import "TSCH3DChartGetProjectedBoundsPipeline.h"
#import "TSCH3DChartBoundsLayoutSceneDelegate.h"

@interface TSCH3DChartBoundsLayout : NSObject {
    TSCH3DScene *_bounds;
    TSCH3DChartGetProjectedBoundsPipeline *_getBounds;
    TSCH3DChartBoundsLayoutSceneDelegate *_sceneDelegate;
}


@property (nonatomic) box<glm::detail::tvec2<float>> bodyLayoutInPage; // ivar: _bodyLayoutInPage
@property (nonatomic) tvec2<int> containingViewport;
@property (retain, nonatomic) Class getBoundsClass; // ivar: _getBoundsClass
@property (nonatomic) box<glm::detail::tvec2<float>> layoutInPage; // ivar: _layoutInPage
@property (readonly, nonatomic) ? layoutSettings; // ivar: _layoutSettings
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) tvec2<int> originalContainingViewport; // ivar: _originalContainingViewport
@property (readonly, nonatomic) TSCH3DScene *scene; // ivar: _scene


-(*void)p_projectedBoundsWithLabelsMode:(int)arg0 ;
-(*void)projectedBounds;
-(BOOL)isInward;
-(BOOL)isSage;
-(id)cacheableGetBoundsPipeline;
-(id)debugBounds;
-(id)init;
-(id)initWithScene:(id)arg0 containingViewport:(*void)arg1 originalContainingViewport:(*void)arg2 layoutSettings:(struct ? *)arg3 ;
-(struct ResizingSize )resizingSize;
-(void)invalidateBounds;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg0 boundsIndex:(NSInteger)arg1 ;
-(void)p_updateLabelWrapBoundsPass;


@end


#endif