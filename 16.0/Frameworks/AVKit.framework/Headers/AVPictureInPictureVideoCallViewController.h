// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPICTUREINPICTUREVIDEOCALLVIEWCONTROLLER_H
#define AVPICTUREINPICTUREVIDEOCALLVIEWCONTROLLER_H

@class UIViewController, UIWindow, NSString, NSTimer;
@protocol AVPictureInPictureContentSource;


#import "AVPictureInPictureControllerContentSource.h"
#import "AVPictureInPictureController.h"
#import "AVPictureInPictureViewController.h"
#import "AVVideoCallPlayerController.h"

@interface AVPictureInPictureVideoCallViewController : UIViewController <AVPictureInPictureContentSource>



@property (readonly, nonatomic) BOOL avkit_isVisible;
@property (readonly, nonatomic) CGRect avkit_videoRectInWindow;
@property (readonly, nonatomic) UIWindow *avkit_window;
@property (weak, nonatomic) AVPictureInPictureControllerContentSource *contentSource; // ivar: _contentSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastKnownIsVisible; // ivar: _lastKnownIsVisible
@property (nonatomic) CGRect lastKnownVideoRectInWindow; // ivar: _lastKnownVideoRectInWindow
@property (retain, nonatomic) NSTimer *observeSourceViewTimer; // ivar: _observeSourceViewTimer
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController; // ivar: _pictureInPictureController
@property (weak, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // ivar: _pictureInPictureViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVVideoCallPlayerController *videoCallPlayerController; // ivar: _videoCallPlayerController


-(BOOL)avkit_wantsManagedSecondScreenPlayback;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_observeSourceView;
-(void)_removeFromParent;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)startObservingSourceView;
-(void)stopObservingSourceView;


@end


#endif