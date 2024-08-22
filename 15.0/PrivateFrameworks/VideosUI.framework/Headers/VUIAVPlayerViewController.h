// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAVPLAYERVIEWCONTROLLER_H
#define VUIAVPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController, UIView, NSArray, AVPlayerViewControllerCustomControlsView, NSString, AVPlayer, UIViewController;
@protocol VUIPlayerViewController;



@interface VUIAVPlayerViewController : AVPlayerViewController <VUIPlayerViewController>



@property (nonatomic) BOOL allowAutorotate; // ivar: _allowAutorotate
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (copy, nonatomic) NSArray *customControlItems;
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect videoBounds;
@property (readonly, nonatomic) CGFloat videoDisplayScale;
@property (readonly, nonatomic) CGSize videoDisplaySize;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;


-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;


@end


#endif