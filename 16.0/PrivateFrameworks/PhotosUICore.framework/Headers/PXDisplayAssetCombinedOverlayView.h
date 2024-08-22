// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETCOMBINEDOVERLAYVIEW_H
#define PXDISPLAYASSETCOMBINEDOVERLAYVIEW_H

@class UIView, NSString;
@protocol PXChangeObserver, PXLivePhotoBadgeViewDelegate, PXDisplayAsset;


#import "PXDisplayAssetImageAnalysisOverlayView.h"
#import "PXLivePhotoBadgeView.h"
#import "PXLoadingFailureBadgeView.h"
#import "PXRoundProgressView.h"
#import "PXUpdater.h"
#import "PXDisplayAssetViewModel.h"

@interface PXDisplayAssetCombinedOverlayView : UIView <PXChangeObserver, PXLivePhotoBadgeViewDelegate>

 {
    BOOL _isPerformingLayout;
}


@property (nonatomic) BOOL canShowLoadingProgress; // ivar: _canShowLoadingProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXDisplayAssetImageAnalysisOverlayView *imageAnalysisOverlayView; // ivar: _imageAnalysisOverlayView
@property (readonly, nonatomic) PXLivePhotoBadgeView *livePhotoBadgeView; // ivar: _livePhotoBadgeView
@property (retain, nonatomic) NSObject<PXDisplayAsset> *loadingAsset; // ivar: _loadingAsset
@property (readonly, nonatomic) PXLoadingFailureBadgeView *loadingFailureBadgeView; // ivar: _loadingFailureBadgeView
@property (readonly, nonatomic) PXRoundProgressView *loadingProgressBadgeView; // ivar: _loadingProgressBadgeView
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_ensureImageAnalysisOverlayView;
-(void)_ensureLivePhotoBadgeView;
-(void)_ensureLoadingFailureBadgeView;
-(void)_ensureLoadingProgressBadgeView;
-(void)_invalidateCanShowLoadingProgress;
-(void)_invalidateImageAnalysisOverlay;
-(void)_invalidateLayout;
-(void)_invalidateLivePhotoBadge;
-(void)_invalidateLoadingFailureBadgeView;
-(void)_invalidateLoadingProgressBadgeView;
-(void)_loadingProgressDelayElapsed;
-(void)_setNeedsUpdate;
-(void)_updateCanShowLoadingProgress;
-(void)_updateImageAnalysisOverlay;
-(void)_updateLayout;
-(void)_updateLivePhotoBadge;
-(void)_updateLoadingFailureBadgeView;
-(void)_updateLoadingProgressBadgeView;
-(void)layoutSubviews;
-(void)livePhotoBadgeView:(id)arg0 wantsPlayback:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif