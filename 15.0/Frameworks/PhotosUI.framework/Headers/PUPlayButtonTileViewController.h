// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPLAYBUTTONTILEVIEWCONTROLLER_H
#define PUPLAYBUTTONTILEVIEWCONTROLLER_H

@class UIView<PXVideoOverlayButton>, NSString;
@protocol PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver, PUPlayButtonTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUBrowsingVideoPlayer.h"
#import "PUAssetViewModel.h"
#import "PUBrowsingViewModel.h"

@interface PUPlayButtonTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver>

 {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer; // ivar: __browsingVideoPlayer
@property (retain, nonatomic, setter=_setPlayButton:) UIView<PXVideoOverlayButton> *_playButton; // ivar: __playButton
@property (nonatomic, setter=_setShouldShowPlayButton:) BOOL _shouldShowPlayButton; // ivar: __shouldShowPlayButton
@property (nonatomic, setter=_setShouldSuppressButtonUpdates:) BOOL _shouldSuppressButtonUpdates; // ivar: __shouldSuppressButtonUpdates
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, nonatomic) BOOL canShowPauseButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPlayButtonTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL showPlayButtonWhileActivated;
@property (readonly) Class superclass;


+(struct CGSize )playButtonTileSize;
-(id)loadView;
-(void)_playButtonTapped:(id)arg0 ;
-(void)_updateButtonAnimated:(BOOL)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif