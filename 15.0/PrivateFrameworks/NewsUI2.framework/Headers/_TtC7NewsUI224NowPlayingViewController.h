// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI224NOWPLAYINGVIEWCONTROLLER_H
#define _TTC7NEWSUI224NOWPLAYINGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC7NewsUI224NowPlayingViewController : UIViewController {
    ? dockPresentationMode;
    ? nowPlayingViewController;
    ? tracker;
    ? eventHandler;
    ? playbackState;
    ? publisherImageCache;
    ? nowPlayingImageCache;
    ? activityViewControllerFactory;
    ? currentTrack;
    ? miniPlayerView;
    ? commands;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif