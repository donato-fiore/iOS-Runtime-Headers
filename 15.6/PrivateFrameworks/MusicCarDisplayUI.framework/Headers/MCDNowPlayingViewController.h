// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCDNOWPLAYINGVIEWCONTROLLER_H
#define MCDNOWPLAYINGVIEWCONTROLLER_H

@class CPUINowPlayingViewController, UIActivityIndicatorView, UIBarButtonItem, MPWeakTimer, NSString, UITableViewController, UILabel;
@protocol MCDNowPlayingContentManagerDelegate, MCDNowPlayingContentManagerProtocol;



@interface MCDNowPlayingViewController : CPUINowPlayingViewController <MCDNowPlayingContentManagerDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIBarButtonItem *activityIndicatorBarButtonItem; // ivar: _activityIndicatorBarButtonItem
@property (retain, nonatomic) MPWeakTimer *activityTimer; // ivar: _activityTimer
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) UIBarButtonItem *backButton; // ivar: _backButton
@property (retain, nonatomic) NSObject<MCDNowPlayingContentManagerProtocol> *contentManager; // ivar: _contentManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL handledWillAppear; // ivar: _handledWillAppear
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *playbackQueueBarButtonItem; // ivar: _playbackQueueBarButtonItem
@property (retain, nonatomic) UITableViewController *playbackQueueViewController; // ivar: _playbackQueueViewController
@property (retain, nonatomic) UILabel *rightTitleLabel; // ivar: _rightTitleLabel
@property (retain, nonatomic) UIBarButtonItem *rightTitleLabelBarButtonItem; // ivar: _rightTitleLabelBarButtonItem
@property (nonatomic) BOOL shouldShowPlaybackQueue; // ivar: _shouldShowPlaybackQueue
@property (nonatomic) BOOL showNavigationBar; // ivar: _showNavigationBar
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackBuffering; // ivar: _trackBuffering


-(id)initWithBundleID:(id)arg0 appName:(id)arg1 ;
-(id)initWithPlayableBundleID:(id)arg0 appName:(id)arg1 ;
-(void)_adjustRightTitleLabelToFit;
-(void)_handleWillAppear;
-(void)_invalidateActivityTimer;
-(void)_popViewControllerAnimated;
-(void)_setupActivityTimer;
-(void)_updateBackButton;
-(void)contentManager:(id)arg0 bufferingItem:(BOOL)arg1 ;
-(void)contentManager:(id)arg0 displayItemIndex:(NSInteger)arg1 totalItemCount:(NSInteger)arg2 ;
-(void)contentManager:(id)arg0 presentViewController:(id)arg1 ;
-(void)contentManager:(id)arg0 sectionName:(id)arg1 ;
-(void)contentManager:(id)arg0 shouldShowPlaybackQueue:(BOOL)arg1 ;
-(void)contentManagerCompletedAllPlayback:(id)arg0 ;
-(void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg0 ;
-(void)contentManagerReloadData:(id)arg0 ;
-(void)dealloc;
-(void)setRightTitle:(id)arg0 ;
-(void)upNextButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif