// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMOVIECONTROLLER_H
#define ICMOVIECONTROLLER_H

@class NSString, AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "ICMovieAttachmentView.h"

@interface ICMovieController : NSObject <AVPlayerViewControllerDelegate>



@property (retain, nonatomic) ICMovieAttachmentView *activeMovieAttachmentView; // ivar: _activeMovieAttachmentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (retain, nonatomic) AVPlayerViewController *moviePlayerController; // ivar: _moviePlayerController
@property (nonatomic) BOOL playbackForPreview; // ivar: _playbackForPreview
@property (readonly) Class superclass;


+(id)sharedController;
+(void)pauseIfPlaying;
+(void)stopIfPlaying;
-(BOOL)prepareForPlayback;
-(id)ic_viewControllerManager;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)dealloc;
-(void)moviePlayerTapped;
-(void)pauseIfPlaying;
-(void)play;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)stopIfPlaying;
-(void)updatePlayer;


@end


#endif