// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPROGRESSINDICATORTILEVIEWCONTROLLER_H
#define PUPROGRESSINDICATORTILEVIEWCONTROLLER_H

@class UILabel, UIButton, PLRoundProgressView, NSString, UIView;
@protocol PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, _PUProgressIndicatorTileViewDelegate, OS_os_log;


#import "PUTileViewController.h"
#import "PUOperationStatus.h"
#import "PUAssetSharedViewModel.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"
#import "PUBrowsingVideoPlayer.h"

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver, PUBrowsingViewModelChangeObserver, _PUProgressIndicatorTileViewDelegate>



@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // ivar: __debugProgressLabel
@property (nonatomic, getter=_didStartProgressLogging, setter=_setDidStartProgressLogging:) BOOL _didStartProgressLogging; // ivar: __didStartProgressLogging
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // ivar: __errorButton
@property (nonatomic, setter=_setProgressViewVisible:) BOOL _isProgressViewVisible; // ivar: __isProgressViewVisible
@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) BOOL _needsUpdateProgressViewStyle; // ivar: __needsUpdateProgressViewStyle
@property (nonatomic, setter=_setNeedsUpdateSizeClass:) BOOL _needsUpdateSizeClass; // ivar: __needsUpdateSizeClass
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus; // ivar: __needsUpdateStatus
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) BOOL _needsUpdateStatusViews; // ivar: __needsUpdateStatusViews
@property (readonly, nonatomic) NSObject<OS_os_log> *_progressLog;
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // ivar: __progressView
@property (nonatomic, setter=_setProgressViewStyle:) NSInteger _progressViewStyle; // ivar: __progressViewStyle
@property (nonatomic, setter=_setSizeClass:) NSInteger _sizeClass; // ivar: __sizeClass
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status; // ivar: __status
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // ivar: _assetSharedViewModel
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorPresenter; // ivar: _errorPresenter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProgressViewAnimatingOut; // ivar: _isProgressViewAnimatingOut
@property (readonly) Class superclass;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // ivar: _videoPlayer
@property (weak, nonatomic) UIButton *vkAnalysisButton; // ivar: _vkAnalysisButton
@property (weak, nonatomic) UIView *vkVisualSearchCornerView; // ivar: _vkVisualSearchCornerView


+(id)_loadErrorIconForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )progressIndicatorIconSizeForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )progressIndicatorTileSizeForSizeClass:(NSInteger)arg0 ;
+(struct UIEdgeInsets )progressIndicatorIconInsetsForSizeClass:(NSInteger)arg0 ;
-(BOOL)_needsUpdate;
-(id)loadView;
-(id)view;
-(void)_handleAssetSharedViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleBrowsingViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleErrorButtonTap:(id)arg0 ;
-(void)_handleVideoPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_invalidateProgressViewStyle;
-(void)_invalidateSizeClass;
-(void)_invalidateStatus;
-(void)_invalidateStatusViews;
-(void)_layoutVKAnalysisButton;
-(void)_layoutVisualSearchCornerView;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateProgressViewStyleIfNeeded;
-(void)_updateSizeClassIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_updateStatusViewsIfNeeded;
-(void)_updateSubviewOrdering;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)postReloadNotification;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)viewTraitCollectionDidChange:(id)arg0 ;


@end


#endif