// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYFOOTERCONTROLLER_H
#define PXCURATEDLIBRARYFOOTERCONTROLLER_H

@class NSTimer, NSString, UIView;
@protocol PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate, PXCuratedLibraryFooterControllerDelegate;


#import "PXObservable.h"
#import "PXCuratedLibraryFooterViewModel.h"
#import "PXPhotosGlobalFooterView.h"
#import "PXGView.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXCuratedLibraryLayout.h"
#import "PXCuratedLibraryStyleGuide.h"
#import "PXUpdater.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryFooterController : PXObservable <PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate>

 {
    CGFloat _lastUserScrollTime;
    BOOL _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    NSInteger _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    BOOL _isUpdatingFooter;
    BOOL _needsFooterFrameChangeAnimation;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryFooterControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFooterFullyMasked) BOOL footerFullyMasked; // ivar: _footerFullyMasked
@property (readonly, nonatomic) CGFloat footerMaskVerticalOffset; // ivar: _footerMaskVerticalOffset
@property (retain, nonatomic) UIView *footerMaskView; // ivar: _footerMaskView
@property (nonatomic) BOOL footerNeedsReveal; // ivar: _footerNeedsReveal
@property (retain, nonatomic) PXPhotosGlobalFooterView *footerView; // ivar: _footerView
@property (retain, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded; // ivar: _footerViewModelIfLoaded
@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView
@property (readonly, nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (nonatomic) BOOL hasAppearedOnce; // ivar: _hasAppearedOnce
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFooterVisible; // ivar: _isFooterVisible
@property (readonly, nonatomic) BOOL isGridViewVisible;
@property (readonly, nonatomic) BOOL isPullingFooter;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // ivar: _itemCountsController
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout; // ivar: _layout
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // ivar: _styleGuide
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wantsFooter; // ivar: _wantsFooter
@property (readonly, nonatomic) BOOL wantsFooterMask; // ivar: _wantsFooterMask


+(NSInteger)_modeForZoomLevel:(NSInteger)arg0 ;
-(BOOL)_shouldRevealPhotosFooterView;
-(BOOL)_shouldShowFooterForGridViewState;
-(BOOL)_shouldShowFooterForPresentedZoomLevel;
-(CGFloat)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg0 ;
-(id)init;
-(id)initWithGridView:(id)arg0 layout:(id)arg1 viewModel:(id)arg2 itemsCountsController:(id)arg3 ;
-(id)presentingViewControllerForFooterViewModel:(id)arg0 ;
-(void)_conditionallyRevealPhotosFooterView;
-(void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(CGFloat)arg0 ;
-(void)_footerHasImportantInformationDidChange;
-(void)_invalidateFooter;
-(void)_invalidateFooterAlpha;
-(void)_invalidateFooterAndMaskVisibility;
-(void)_invalidateFooterMaskViewFrame;
-(void)_invalidateFooterMode;
-(void)_invalidateIsFooterVisible;
-(void)_invalidateWantsFooter;
-(void)_setNeedsUpdate;
-(void)_updateFooter;
-(void)_updateFooterAlpha;
-(void)_updateFooterAndMaskVisibility;
-(void)_updateFooterMaskViewFrame;
-(void)_updateFooterMode;
-(void)_updateIsFooterVisible;
-(void)_updateWantsFooter;
-(void)_viewDidStartScrolling;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)photosGlobalFooterView:(id)arg0 presentViewController:(id)arg1 ;
-(void)photosGlobalFooterViewDidChangeHeight:(id)arg0 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)viewDidAppear;


@end


#endif