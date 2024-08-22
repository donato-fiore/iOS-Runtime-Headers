// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBAVPLAYERVIEWCONTROLLER_H
#define WEBAVPLAYERVIEWCONTROLLER_H

@class NSString;
@protocol AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegate_WebKitOnly;

#import <Foundation/Foundation.h>


@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate>

 {
    *void _fullscreenInterface;
    RetainPtr<AVPlayerViewController> _avPlayerViewController;
    RetainPtr<NSTimer> _startPictureInPictureTimer;
    RetainPtr<AVObservationController> _avPlayerViewControllerObservationController;
    id<AVPlayerViewControllerDelegate_WebKitOnly> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPicturePossible;
-(BOOL)pictureInPictureActive;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)arg0 ;
-(BOOL)showsPlaybackControls;
-(id)avPlayerViewController;
-(id)initWithFullscreenInterface:(*void)arg0 ;
-(id)view;
-(void)dealloc;
-(void)enterFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)exitFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)flashPlaybackControlsWithDuration:(CGFloat)arg0 ;
-(void)removeFromParentViewController;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPlayerController:(id)arg0 ;
-(void)setShowsPlaybackControls:(BOOL)arg0 ;
-(void)setWebKitOverrideRouteSharingPolicy:(NSUInteger)arg0 routingContextUID:(id)arg1 ;
-(void)startPictureInPicture;
-(void)stopPictureInPicture;
-(void)tryToStartPictureInPicture;


@end


#endif