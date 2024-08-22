// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFULLSCREENVIDEOCONTROLLER_H
#define LPFULLSCREENVIDEOCONTROLLER_H

@class __AVPlayerLayerView, AVPlayerController, AVPlayer, NSString;
@protocol AVPlayerViewControllerDelegatePrivate;

#import <Foundation/Foundation.h>

#import "LPVideoView.h"
#import "LPAVPlayerViewController.h"

@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate>

 {
    LPVideoView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg0 ;
-(id)initWithPlayer:(id)arg0 sourceView:(id)arg1 ;
-(void)didCompleteDismissal;
-(void)dismiss;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;
-(void)present;
-(void)setUpFullScreenVideoViewControllerIfNeeded;


@end


#endif