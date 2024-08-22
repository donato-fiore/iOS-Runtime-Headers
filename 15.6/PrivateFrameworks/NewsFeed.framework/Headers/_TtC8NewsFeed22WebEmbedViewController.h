// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED22WEBEMBEDVIEWCONTROLLER_H
#define _TTC8NEWSFEED22WEBEMBEDVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed22WebEmbedViewController : UIViewController {
    ? reuseIdentifier;
    ? onReuse;
    ? webLinkPresentingViewController;
    ? contentFrame;
    ? debugButton;
    ? interactionProvider;
    ? delegate;
    ? contentFrameChanged;
    ? embedURL;
    ? dataFeedURL;
    ? location;
    ? sourceURL;
    ? webContentViewController;
    ? configurationManager;
    ? errorProvider;
    ? presentationManager;
    ? configurationProvider;
    ? pictureInPictureState;
    ? stateMachine;
    ? errorState;
    ? activityIndicator;
    ? errorView;
    ? tapGestureRecognizer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTapWithRecognizer:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif