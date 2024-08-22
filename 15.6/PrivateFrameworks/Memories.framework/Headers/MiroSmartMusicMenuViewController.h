// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROSMARTMUSICMENUVIEWCONTROLLER_H
#define MIROSMARTMUSICMENUVIEWCONTROLLER_H

@class UITableViewController, NSString, AVPlayer;
@protocol OS_dispatch_queue, PMEditProviderDelegate, PMEditorToolbarOwner;


#import "PMMusicProvider.h"
#import "VEKSong.h"
#import "VEKReachability.h"

@interface MiroSmartMusicMenuViewController : UITableViewController {
    NSObject<OS_dispatch_queue> *_downloadQueue;
}


@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *moodID; // ivar: _moodID
@property (retain, nonatomic) PMMusicProvider *musicProvider; // ivar: _musicProvider
@property (nonatomic) BOOL observingAppWillResign; // ivar: _observingAppWillResign
@property (retain, nonatomic) id *playbackObserver; // ivar: _playbackObserver
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) VEKSong *playingSong; // ivar: _playingSong
@property (nonatomic) NSInteger playingSongRow; // ivar: _playingSongRow
@property (retain, nonatomic) VEKSong *productionSong; // ivar: _productionSong
@property (retain, nonatomic) VEKReachability *reachability; // ivar: _reachability
@property (nonatomic) NSInteger selectedRow; // ivar: _selectedRow
@property (nonatomic) NSInteger selectedSection; // ivar: _selectedSection
@property (retain, nonatomic) id *timeObserver; // ivar: _timeObserver
@property (weak, nonatomic) NSObject<PMEditorToolbarOwner> *toolbarOwner; // ivar: _toolbarOwner


-(BOOL)canBecomeFirstResponder;
-(NSInteger)networkStatus;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)statusForSong:(id)arg0 ;
-(id)_getPlayingCell;
-(id)_selectedTableViewCell;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addObserverForAppWillResign;
-(void)_addObserverForPlaybackEnded;
-(void)_addObserverForTextSizeDidChange;
-(void)_applicationWillResign;
-(void)_pausePreview;
-(void)_postProgressUpdate:(struct ? )arg0 ;
-(void)_previewSong:(id)arg0 ;
-(void)_removeObserverForAppWillResign;
-(void)_removeObserverForPlaybackEnded;
-(void)_setupReachabiliy;
-(void)_updateProductionWithSong:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)networkStatusChanged:(id)arg0 ;
-(void)resetPlayingCell;
-(void)scrollToSelectedIndexPath;
-(void)setup;
-(void)shouldPreviewSong:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)toggleDownloadInCell:(id)arg0 ;
-(void)userTextSizeDidChange;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif