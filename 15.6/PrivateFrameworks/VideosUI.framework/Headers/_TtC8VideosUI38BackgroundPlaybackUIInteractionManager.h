// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI38BACKGROUNDPLAYBACKUIINTERACTIONMANAGER_H
#define _TTC8VIDEOSUI38BACKGROUNDPLAYBACKUIINTERACTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI38BackgroundPlaybackUIInteractionManager : NSObject {
    ? backgroundMediaController;
    ? hostingView;
    ? overridesUserInterfaceStyleWhenPlaying;
    ? supportsFullScreenTransition;
    ? swipeUpView;
    ? playbackState;
    ? fullscreenTransitionHandler;
    ? playbackStateChangeHandler;
    ? hostingViewController;
    ? menuGestureRecognizer;
    ? userInterfaceStyleToRestore;
    ? playbackDidStartObserver;
    ? playbackDidStopObserver;
    ? firstShowcasing;
    ? showcaseObserver;
}




-(id)init;
-(void)dealloc;


@end


#endif