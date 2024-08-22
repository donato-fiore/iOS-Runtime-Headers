// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTILINGCONTROLLERZOOMANIMATIONCOORDINATOR_H
#define PXTILINGCONTROLLERZOOMANIMATIONCOORDINATOR_H

@protocol PXTilingControllerZoomAnimationCoordinatorDelegate;


#import "PXZoomAnimationCoordinator.h"
#import "PXTilingController.h"

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator

@property (readonly, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<PXTilingControllerZoomAnimationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController


-(id)init;
-(id)initWithTilingController:(id)arg0 context:(id)arg1 ;
// -(void)_animateTilesPassingTest:(id)arg0 forEndPointType:(unk)arg1 withZoomTransitionContext:(NSInteger)arg2 tileGeometryTransformer:(id)arg3  ;
// -(void)_animateTilesPassingTest:(id)arg0 fromEndPointType:(unk)arg1 toEndPointType:(NSInteger)arg2 alpha:(NSInteger)arg3 transform:(CGFloat)arg4 withOptions:(id)arg5 tileGeometryTransformer:(id)arg6 completionHandler:(id)arg7  ;
-(void)animateContentForEndPointType:(NSInteger)arg0 inView:(id)arg1 withLayerType:(NSInteger)arg2 zoomAnimationContext:(id)arg3 ;
-(void)animateContentForEndPointType:(NSInteger)arg0 withZoomAnimationContext:(id)arg1 ;
-(void)moveTile:(id)arg0 toView:(id)arg1 restorationBlock:(*id)arg2 ;


@end


#endif