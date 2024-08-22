// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPLAYBACKTIMEINDICATORTILEVIEWCONTROLLER_H
#define PUPLAYBACKTIMEINDICATORTILEVIEWCONTROLLER_H

@class NSString, NSDate;
@protocol PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PUPlaybackTimeIndicatorTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUPlaybackTimeLabel.h"
#import "PUBrowsingVideoPlayer.h"
#import "PUBrowsingViewModel.h"

@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver>

 {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setIndicatorFormat:) NSInteger _indicatorFormat; // ivar: __indicatorFormat
@property (nonatomic, setter=_setIndicatorVisible:) BOOL _isIndicatorVisible; // ivar: __isIndicatorVisible
@property (readonly, nonatomic) PUPlaybackTimeLabel *_label; // ivar: __label
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPlaybackTimeIndicatorTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *forcedIndicatorVisibilityEndDate; // ivar: _forcedIndicatorVisibilityEndDate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // ivar: _videoPlayer
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


+(struct CGSize )playbackTimeIndicatorTileSize;
-(void)_cancelFlashTimeIndicator;
-(void)_flashTimeIndicator;
-(void)_handleVideoPlayer:(id)arg0 change:(id)arg1 ;
-(void)_handleViewModel:(id)arg0 change:(id)arg1 ;
-(void)_updateIndicatorDisplayStyle;
-(void)_updateIndicatorValueWithTime:(struct ? )arg0 ;
-(void)becomeReusable;
-(void)videoPlayer:(id)arg0 currentTimeDidChange:(struct ? )arg1 ;
-(void)videoPlayer:(id)arg0 desiredSeekTimeDidChange:(struct ? )arg1 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif