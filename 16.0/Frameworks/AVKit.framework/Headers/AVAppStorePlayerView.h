// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAPPSTOREPLAYERVIEW_H
#define AVAPPSTOREPLAYERVIEW_H

@class UIView, AVPlayer, NSString, NSMutableDictionary;
@protocol AVPlayerViewControllerDelegate;


#import "AVObservationController.h"
#import "AVAppStorePlayerLayerView.h"
#import "AVPlayerViewController.h"
#import "AVButton.h"
#import "AVLayoutView.h"
#import "AVMobileChromeControlsStyleSheet.h"

@interface AVAppStorePlayerView : UIView

@property (nonatomic) BOOL allowsEnteringFullScreen; // ivar: _allowsEnteringFullScreen
@property (nonatomic) BOOL canPausePlaybackWhenExitingFullScreen; // ivar: _canPausePlaybackWhenExitingFullScreen
@property (readonly, nonatomic) UIView *contentOverlayView; // ivar: _contentOverlayView
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (copy, nonatomic) id *playButtonHandlerForLazyPlayerLoading; // ivar: _playButtonHandlerForLazyPlayerLoading
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVAppStorePlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (weak, nonatomic) NSObject<AVPlayerViewControllerDelegate> *playerViewControllerDelegate; // ivar: _playerViewControllerDelegate
@property (nonatomic) NSInteger preferredUnobscuredArea; // ivar: _preferredUnobscuredArea
@property (retain, nonatomic) AVButton *prominentPlayButton; // ivar: _prominentPlayButton
@property (retain, nonatomic) AVLayoutView *prominentPlayButtonLayoutView; // ivar: _prominentPlayButtonLayoutView
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; // ivar: _showsMinimalPlaybackControlsWhenEmbeddedInline
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (retain, nonatomic) AVMobileChromeControlsStyleSheet *styleSheet; // ivar: _styleSheet
@property (nonatomic) BOOL updatesNowPlayingInfoCenter; // ivar: _updatesNowPlayingInfoCenter
@property (copy, nonatomic) NSString *videoGravity; // ivar: _videoGravity
@property (retain, nonatomic) NSMutableDictionary *videoGravityForLayoutClassDictionary; // ivar: _videoGravityForLayoutClassDictionary


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_makeActualVideoViewWithPlayerIfNeeded:(id)arg0 ;
-(void)_makePlayerLayerViewWithPlayer:(id)arg0 ;
-(void)_makePlayerViewControllerWithPlayer:(id)arg0 ;
-(void)_prominentPlayButtonTouchUpInside:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setClipsToBounds:(BOOL)arg0 ;


@end


#endif