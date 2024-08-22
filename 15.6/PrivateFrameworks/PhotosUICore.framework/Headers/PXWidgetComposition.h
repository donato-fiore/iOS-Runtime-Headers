// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXWIDGETCOMPOSITION_H
#define PXWIDGETCOMPOSITION_H

@class NSArray, NSString;
@protocol PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver, PXWidgetCompositionDelegate;


#import "PXTilingControllerComposition.h"
#import "PXTilingController.h"
#import "PXScrollViewController.h"
#import "PXWidgetCompositionSpec.h"

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver>

 {
    ? _delegateFlags;
    BOOL _isPerformingWidgetLoadingChange;
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setDidLayoutWidgets:) BOOL _didLayoutWidgets; // ivar: __didLayoutWidgets
@property (copy, nonatomic, setter=_setElements:) NSArray *_elements; // ivar: __elements
@property (retain, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController; // ivar: __focusedTilingController
@property (nonatomic, setter=_setLastContentAdjustmentOffset:) CGPoint _lastContentAdjustmentOffset; // ivar: __lastContentAdjustmentOffset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXWidgetCompositionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger minimumWidgetLoadingPriority; // ivar: _minimumWidgetLoadingPriority
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (nonatomic) BOOL shouldLoadAllWidgets; // ivar: _shouldLoadAllWidgets
@property (nonatomic) BOOL shouldLoadVisibleWidgets; // ivar: _shouldLoadVisibleWidgets
@property (nonatomic) BOOL shouldUnloadAllWidgets; // ivar: _shouldUnloadAllWidgets
@property (retain, nonatomic) PXWidgetCompositionSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *widgets; // ivar: _widgets


-(BOOL)_shouldFocusOnTilingController:(id)arg0 ;
-(BOOL)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg0 ;
-(BOOL)element:(id)arg0 requestViewControllerDismissalAnimated:(BOOL)arg1 ;
-(BOOL)element:(id)arg0 transitionToViewController:(id)arg1 withTransitionType:(NSInteger)arg2 ;
-(NSInteger)_loadingPriorityForElement:(id)arg0 ;
-(id)elementViewController:(id)arg0 ;
-(id)footerTilingControllerForWidget:(id)arg0 ;
-(id)headerTilingControllerForWidget:(id)arg0 ;
-(id)init;
-(id)initWithScrollViewController:(id)arg0 ;
-(id)tilingControllers;
-(id)widgetAtLocation:(struct CGPoint )arg0 ;
-(struct CGRect )frameForWidget:(id)arg0 ;
-(void)_invalidateElements;
-(void)_invalidateElementsSpec;
-(void)_invalidateElementsToLoad;
-(void)_setNeedsUpdateWidgetLoading;
-(void)_updateElements;
-(void)_updateElementsSpec;
-(void)_updateElementsToLoadIfNeeded;
-(void)_updateFocusedTilingController;
-(void)_updateWidgetLoadingIfNeeded;
-(void)elementHasLoadedContentDataDidChange:(id)arg0 ;
-(void)elementNeedsLayout:(id)arg0 preferredAnimationOptions:(id)arg1 originatingTilingController:(id)arg2 ;
-(void)invalidateFocusedTilingController;
-(void)invalidatePreferredContentHeightForAllWidgets;
-(void)performWidgetLoadingChange:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)updateComposition;


@end


#endif