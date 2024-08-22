// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBUFFERINGINDICATORTILEVIEWCONTROLLER_H
#define PUBUFFERINGINDICATORTILEVIEWCONTROLLER_H

@class UIButton, UIActivityIndicatorView, NSString;
@protocol PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver;


#import "PUTileViewController.h"
#import "PUBrowsingVideoPlayer.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"
#import "PUOneUpMergedVideoProvider.h"

@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver>



@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // ivar: __errorButton
@property (nonatomic, setter=_setIndicatorStyle:) NSInteger _indicatorStyle; // ivar: __indicatorStyle
@property (retain, nonatomic, setter=_setSpinner:) UIActivityIndicatorView *_spinner; // ivar: __spinner
@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // ivar: __videoPlayer
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorAlertControllerDisplayer; // ivar: _errorAlertControllerDisplayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // ivar: _mergedVideoProvider
@property (readonly) Class superclass;


+(BOOL)canShowBufferingIndicatorTileForAsset:(id)arg0 ;
+(struct CGSize )bufferingIndicatorTileSize;
-(void)_handleErrorButton:(id)arg0 ;
-(void)_updateIndicator;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif