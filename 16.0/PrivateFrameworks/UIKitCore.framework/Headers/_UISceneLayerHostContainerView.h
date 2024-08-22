// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENELAYERHOSTCONTAINERVIEW_H
#define _UISCENELAYERHOSTCONTAINERVIEW_H

@class NSMutableOrderedSet, NSMutableSet, FBSSceneSettings, CAContext, NSString, NSSet, FBScene;
@protocol FBSceneLayerManagerObserver, BSInvalidatable, _UISceneLayerHostContainerViewDataSource;


#import "UIView.h"
#import "UIScenePresentationContext.h"
#import "_UISceneLayerHostContainerView.h"
#import "_UIContextLayerHostView.h"

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, BSInvalidatable>

 {
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
    UIView *_innerLayerContainer;
    UIView *_backgroundView;
    CAContext *_asyncRenderGroupingContext;
    _UISceneLayerHostContainerView *_asyncRenderGroupingContainerView;
    _UIContextLayerHostView *_asyncRenderGroupingHostView;
    NSString *_debugDescription;
    BOOL _invalidated;
}


@property (readonly, weak, nonatomic) NSObject<_UISceneLayerHostContainerViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hostedLayers;
@property (readonly, nonatomic) NSSet *nonHostedLayers;
@property (readonly, weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(BOOL)_canShowKeyboardLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_asyncContext;
-(id)_asyncRenderingContainerView;
-(id)_asyncRenderingHostView;
-(id)_backgroundView;
-(id)_createHostViewForLayer:(id)arg0 ;
-(id)_filteredLayersToPresent;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)_hostViews;
-(id)_presentationContext;
-(id)_presentationContextForLayer:(id)arg0 ;
-(id)_realHostedLayers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithScene:(id)arg0 debugDescription:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)window;
-(void)_adjustHostViewFrameAlignment:(id)arg0 ;
-(void)_applyBackgroundViewToHierarchy;
-(void)_invalidateAndRemoveAsyncViewsFromHierarchy;
-(void)_presentationContextChangedFrom:(id)arg0 toContext:(id)arg1 force:(BOOL)arg2 ;
-(void)_rebuildLayersForAsyncPresentationWithReason:(id)arg0 withFence:(id)arg1 ;
-(void)_rebuildLayersForNormalPresentationWithReason:(id)arg0 withFence:(id)arg1 ;
-(void)_rebuildLayersForReason:(id)arg0 withFence:(id)arg1 ;
-(void)_refreshDataSource;
-(void)_setBackgroundView:(id)arg0 ;
-(void)_setPresentationContext:(id)arg0 ;
-(void)_toggleClippingDisabledWithNewContext:(id)arg0 ;
-(void)_toggleInheritsSecurityWithNewContext:(id)arg0 ;
-(void)_toggleResizesHostedContextWithNewContext:(id)arg0 ;
-(void)_toggleStopsHitTestTransformAccumulationWithNewContext:(id)arg0 ;
-(void)_updateAsyncDrawingOptionsInAsyncPresentation;
-(void)_updateRenderingModeForLayersInNormalPresentation;
-(void)dealloc;
-(void)invalidate;
-(void)popDataSource:(id)arg0 ;
-(void)pushDataSource:(id)arg0 ;
-(void)refreshDataSource:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)updateForGeometrySettingsChanges:(id)arg0 ;


@end


#endif