// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMECONTROLSVIEWCONTROLLER_H
#define AVMOBILECHROMECONTROLSVIEWCONTROLLER_H

@class NSValue;


#import "AVMobileControlsViewController.h"
#import "AVPlayerViewController.h"
#import "AVMobileChromeControlsView.h"
#import "AVPlaybackControlsController.h"
#import "AVMobileChromeControlsStyleSheet.h"
#import "AVPlaybackControlsView.h"
#import "AVTurboModePlaybackControlsPlaceholderView.h"

@interface AVMobileChromeControlsViewController : AVMobileControlsViewController {
    AVPlayerViewController *_playerViewController;
    AVMobileChromeControlsView *_controlsView;
    AVPlaybackControlsController *_playbackControlsController;
    AVMobileChromeControlsStyleSheet *_styleSheet;
}


@property (retain, nonatomic) NSValue *embeddedInlineLayoutMargins; // ivar: _embeddedInlineLayoutMargins
@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView; // ivar: _playbackControlsView
@property (nonatomic) BOOL prefersCompactFullScreenControls; // ivar: _prefersCompactFullScreenControls
@property (nonatomic) CGAffineTransform transformForProminentPlayButton; // ivar: _transformForProminentPlayButton
@property (readonly, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModeControlsView; // ivar: _turboModeControlsView


-(BOOL)showsFullScreenControl;
-(id)displayModeControlsLayoutItem;
-(id)initWithPlayerViewController:(id)arg0 ;
-(id)transportControlsLayoutItem;
-(id)volumeControlsLayoutItem;
-(void)_updateStyleSheet;
-(void)dealloc;
-(void)flashControlsWithDuration:(CGFloat)arg0 ;
-(void)loadView;
-(void)setControlItems:(id)arg0 ;
-(void)setIncludedControls:(NSUInteger)arg0 ;
-(void)setOptimizeForPerformance:(BOOL)arg0 ;
-(void)setRoutingConfiguration:(id)arg0 ;
-(void)setShowsFullScreenControl:(BOOL)arg0 ;
-(void)setTransportBarCustomMenuItems:(id)arg0 ;
-(void)setVolumeController:(id)arg0 ;
-(void)toggleVisibility:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif