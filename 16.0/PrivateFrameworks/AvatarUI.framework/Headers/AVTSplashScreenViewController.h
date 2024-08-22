// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSPLASHSCREENVIEWCONTROLLER_H
#define AVTSPLASHSCREENVIEWCONTROLLER_H

@class OBWelcomeFullCenterContentController, OBBoldTrayButton, AVPlayerLooper, AVPlayerViewController, AVQueuePlayer, NSLayoutConstraint, UIView;
@protocol AVTSplashScreenViewControllerDelegate;


#import "AVTSplashScreenConfiguration.h"

@interface AVTSplashScreenViewController : OBWelcomeFullCenterContentController

@property (retain, nonatomic) AVTSplashScreenConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) OBBoldTrayButton *continueButton; // ivar: _continueButton
@property (weak, nonatomic) NSObject<AVTSplashScreenViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isPlayingVideos; // ivar: _isPlayingVideos
@property (retain, nonatomic) AVPlayerLooper *playerLooper; // ivar: _playerLooper
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic) AVPlayerViewController *primaryVideoController;
@property (readonly, nonatomic) AVPlayerLooper *primaryVideoLooper;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (retain, nonatomic) AVPlayerLooper *secondaryPlayerLooper; // ivar: _secondaryPlayerLooper
@property (retain, nonatomic) AVPlayerViewController *secondaryPlayerViewController; // ivar: _secondaryPlayerViewController
@property (retain, nonatomic) AVQueuePlayer *secondaryQueuePlayer; // ivar: _secondaryQueuePlayer
@property (retain, nonatomic) NSLayoutConstraint *videoContentHeightConstraint; // ivar: _videoContentHeightConstraint
@property (retain, nonatomic) UIView *videoContentView; // ivar: _videoContentView
@property (retain, nonatomic) NSLayoutConstraint *videoContentWidthConstraint; // ivar: _videoContentWidthConstraint


-(CGFloat)desiredHeightForVideoContent;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 styleProvider:(id)arg1 ;
-(id)initWithDefaultConfiguration;
-(void)detachVideoControllerAndLooper;
-(void)didTapContinueButton:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startPlayingVideos;
-(void)stopPlayingVideos;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif