// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETEXPLORERREVIEWSCREENPROGRESSINDICATORTILEVIEWCONTROLLER_H
#define PUASSETEXPLORERREVIEWSCREENPROGRESSINDICATORTILEVIEWCONTROLLER_H

@class UILabel, UIButton, PLRoundProgressView, NSString;
@protocol PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver;


#import "PUTileViewController.h"
#import "PUOperationStatus.h"
#import "PUAssetSharedViewModel.h"
#import "PUBrowsingVideoPlayer.h"

@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>



@property (retain, nonatomic, setter=_setDebugProgressLabel:) UILabel *_debugProgressLabel; // ivar: __debugProgressLabel
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // ivar: __errorButton
@property (nonatomic, setter=_setProgressViewVisible:) BOOL _isProgressViewVisible; // ivar: __isProgressViewVisible
@property (nonatomic, setter=_setNeedsUpdateProgressViewStyle:) BOOL _needsUpdateProgressViewStyle; // ivar: __needsUpdateProgressViewStyle
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus; // ivar: __needsUpdateStatus
@property (nonatomic, setter=_setNeedsUpdateStatusViews:) BOOL _needsUpdateStatusViews; // ivar: __needsUpdateStatusViews
@property (retain, nonatomic, setter=_setProgressView:) PLRoundProgressView *_progressView; // ivar: __progressView
@property (nonatomic, setter=_setProgressViewStyle:) NSInteger _progressViewStyle; // ivar: __progressViewStyle
@property (copy, nonatomic, setter=_setStatus:) PUOperationStatus *_status; // ivar: __status
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // ivar: _assetSharedViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // ivar: _videoPlayer


+(id)_loadErrorIcon;
+(struct CGSize )progressIndicatorTileSize;
-(BOOL)_needsUpdate;
-(void)_handleAssetSharedViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleErrorButtonTap:(id)arg0 ;
-(void)_handleVideoPlayer:(id)arg0 didChange:(id)arg1 ;
-(void)_invalidateProgressViewStyle;
-(void)_invalidateStatus;
-(void)_invalidateStatusViews;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateProgressViewStyleIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_updateStatusViewsIfNeeded;
-(void)_updateSubviewOrdering;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif