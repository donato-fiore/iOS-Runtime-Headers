// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEWLAYOUT_H
#define PXSTORYVIEWLAYOUT_H

@class NSString;
@protocol PXChangeObserver, PXPhotosViewDelegate, PXPhotosContentControllerDelegate, PXStoryViewModeTransitionsHelperDelegate, PXTapToRadarDiagnosticProvider;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXStoryRelatedOverlayItemDecorationSource.h"
#import "PXGDecoratingLayout.h"
#import "PXPhotosContentController.h"
#import "PXGLayout.h"
#import "PXStoryViewModeTransition.h"
#import "PXStoryModel.h"
#import "PXStoryLayout.h"
#import "PXStoryViewModeTransitionsHelper.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXPhotosViewDelegate, PXPhotosContentControllerDelegate, PXStoryViewModeTransitionsHelperDelegate, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    unsigned short _contentVersion;
    BOOL _isUpdatingSublayouts;
    BOOL _isUpdatingGridLayout;
    PXStoryRelatedOverlayItemDecorationSource *_relatedDecorationSource;
    PXGDecoratingLayout *_relatedDecoratingLayout;
}


@property (readonly, nonatomic) NSInteger chromeLayoutIndex; // ivar: _chromeLayoutIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger diagnosticHUDLayoutIndex; // ivar: _diagnosticHUDLayoutIndex
@property (readonly, nonatomic) PXPhotosContentController *gridContentController; // ivar: _gridContentController
@property (readonly, nonatomic) NSInteger gridLayoutIndex; // ivar: _gridLayoutIndex
@property (readonly, nonatomic) PXGLayout *gridPlaceholderLayout; // ivar: _gridPlaceholderLayout
@property (retain, nonatomic) PXStoryViewModeTransition *gridViewModeTransition; // ivar: _gridViewModeTransition
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inGridViewMode;
@property (readonly, nonatomic) NSInteger legibilityOverlayLayoutIndex; // ivar: _legibilityOverlayLayoutIndex
@property (readonly, nonatomic) id *mainItemReference;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryLayout *mainStoryLayout; // ivar: _mainStoryLayout
@property (readonly, nonatomic) NSInteger mainStoryLayoutIndex; // ivar: _mainStoryLayoutIndex
@property (readonly, nonatomic) PXGLayout *mainStoryPlaceholderLayout; // ivar: _mainStoryPlaceholderLayout
@property (nonatomic) ? presentedGridTransform; // ivar: _presentedGridTransform
@property (readonly, nonatomic) NSInteger relatedOverlayLayoutIndex; // ivar: _relatedOverlayLayoutIndex
@property (readonly, nonatomic) NSInteger scrubberLayoutIndex; // ivar: _scrubberLayoutIndex
@property (nonatomic) BOOL shouldScrollGridToPlaybackPosition; // ivar: _shouldScrollGridToPlaybackPosition
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStoryViewModeTransitionsHelper *viewModeTransitionsHelper; // ivar: _viewModeTransitionsHelper
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)allowsRepeatedSublayoutsUpdates;
-(BOOL)photosContentController:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)photosContentController:(id)arg0 pushViewController:(id)arg1 ;
-(BOOL)photosViewController:(id)arg0 didPickAssetReference:(id)arg1 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSUInteger)contentChangeTrend;
-(id)axLocalizedLabel;
-(id)createDefaultAnimationForCurrentContext;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)preferredFocusLayouts;
-(id)presentingViewControllerForContentController:(id)arg0 ;
-(id)transitionsHelper:(id)arg0 regionOfInterestForTransition:(id)arg1 ;
-(id)transitionsHelper:(id)arg0 timelineLayoutSnapshotForViewMode:(NSInteger)arg1 ;
-(struct CGRect )_scrubberBounds;
-(void)_axMoveCursorToPlayer;
-(void)_invalidateContentSize;
-(void)_invalidateGridLayout;
-(void)_invalidateGridTransform;
-(void)_invalidateHiddenGridAssets;
-(void)_invalidateMainModel;
-(void)_invalidateMainStoryLayout;
-(void)_invalidateSublayoutFrames;
-(void)_invalidateSublayoutOrigins;
-(void)_invalidateTransitionsHelper;
-(void)_invalidateTransitionsHelperAfterSublayouts;
-(void)_setFrame:(struct CGRect )arg0 relativeZPosition:(CGFloat)arg1 depth:(CGFloat)arg2 forSublayoutAtIndex:(NSInteger)arg3 ;
-(void)_updateContentSize;
-(void)_updateGridLayout;
-(void)_updateGridTransform;
-(void)_updateHeaderSpacing;
-(void)_updateHiddenGridAssets;
-(void)_updateMainModel;
-(void)_updateMainStoryLayout;
-(void)_updateSublayoutFrames;
-(void)_updateSublayoutOrigins;
-(void)_updateTransitionsHelper;
-(void)_updateTransitionsHelperAfterSublayouts;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateSublayout:(id)arg0 ;
-(void)dismissPresentedViewControllerForContentController:(id)arg0 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)transitionsHelperNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif