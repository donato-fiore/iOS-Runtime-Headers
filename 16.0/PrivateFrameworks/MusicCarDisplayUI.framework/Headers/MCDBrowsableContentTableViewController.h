// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCDBROWSABLECONTENTTABLEVIEWCONTROLLER_H
#define MCDBROWSABLECONTENTTABLEVIEWCONTROLLER_H

@class UIViewController, UITableView, CPUINowPlayingButton, NSIndexPath, _UIFilteredDataSource, MPWeakTimer, UIView, CARSessionStatus, UIAlertController, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate, CARSessionObserving, OS_dispatch_queue;


#import "MCDPCContainer.h"

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate, CARSessionObserving>

 {
    UITableView *_tableView;
    CPUINowPlayingButton *_nowPlayingButton;
    NSInteger _count;
    NSIndexPath *_selectedNextIndexPath;
    _UIFilteredDataSource *_dataSource;
    NSIndexPath *_reselectIndexPath;
    MPWeakTimer *_delayTimer;
    UIView *_MCD_tableView;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CARSessionStatus *_carSessionStatus;
    BOOL _limited;
    BOOL _hasCarScreen;
    BOOL _hasNoBrowsableContent;
    BOOL _didPushToNowPlayingAtLaunch;
    BOOL _isRootTableViewController;
    BOOL _hasTabbedBrowsing;
}


@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) MCDPCContainer *container; // ivar: _container
@property (nonatomic) BOOL currentlyPlayingApp; // ivar: _currentlyPlayingApp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishInitialLoad; // ivar: _didFinishInitialLoad
@property (nonatomic) BOOL didFinishInitialViewAppear; // ivar: _didFinishInitialViewAppear
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPWeakTimer *loadingTimer; // ivar: _loadingTimer
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView
@property (nonatomic) BOOL pushToNowPlaying; // ivar: _pushToNowPlaying
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_shouldLimitLists;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)contentScrollView;
-(id)initWithContainer:(id)arg0 ;
-(id)initWithContainer:(id)arg0 tabbedBrowsing:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_appRegisteredForContent:(id)arg0 ;
-(void)_clearLoadingActivity;
-(void)_clearTableViewSelectionAnimated:(BOOL)arg0 ;
-(void)_configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)_displayErrorAlertController:(id)arg0 ;
-(void)_displayLoadingActivity;
-(void)_limitedUIChanged:(id)arg0 ;
-(void)_nowPlayingButtonTapped:(id)arg0 ;
-(void)_nowPlayingDidChange:(id)arg0 ;
-(void)_playbackStateChanged:(id)arg0 ;
-(void)_pushToNowPlaying:(BOOL)arg0 ;
-(void)_replacePlaceholderViewWithView:(id)arg0 ;
-(void)_showLoadingScreen;
-(void)_showTimeoutScreen;
-(void)_updateNowPlayingButtonVisibility;
-(void)container:(id)arg0 didInvalidateIndicies:(id)arg1 ;
-(void)containerDidChangeCount:(id)arg0 ;
-(void)dealloc;
-(void)errorViewDidTapButton:(id)arg0 ;
-(void)reloadTable;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 didFocusRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif