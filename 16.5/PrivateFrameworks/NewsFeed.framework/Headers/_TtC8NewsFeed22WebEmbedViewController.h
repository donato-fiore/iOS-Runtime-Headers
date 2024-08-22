// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED22WEBEMBEDVIEWCONTROLLER_H
#define _TTC8NEWSFEED22WEBEMBEDVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC8NewsFeed22WebEmbedViewController : UIViewController {
    ? layoutIdentifier;
    ? onReuse;
    ? webLinkPresentingViewController;
    ? contentFrame;
    ? resizingProvider;
    ? onEmbedInteraction;
    ? showsLoadingSpinner;
    ? interactionProvider;
    ? delegate;
    ? contentFrameChanged;
    ? embedURL;
    ? dataFeedURL;
    ? location;
    ? sourceURL;
    ? feedConfiguration;
    ? viewportSize;
    ? isResizable;
    ? webContentViewController;
    ? configurationManager;
    ? errorProvider;
    ? presentationManager;
    ? configurationProvider;
    ? pictureInPictureState;
    ? sportsEventManager;
    ? coordinator;
    ? sportsDataVisualization;
    ? stateMachine;
    ? errorState;
    ? loadedState;
    ? activityIndicator;
    ? errorView;
    ? tapGestureRecognizer;
    ? _lastDatastoreUpdate;
    ? debugLoadView;
    ? debugSportsView;
}


@property (nonatomic, copy) NSArray *accessibilityElements;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTapWithRecognizer:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif