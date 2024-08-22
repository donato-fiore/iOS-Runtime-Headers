// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMUSICMENUVIEWCONTROLLER_H
#define MIROMUSICMENUVIEWCONTROLLER_H

@class UIViewController, NSString, AVPlayer, UITableView;
@protocol MPMediaPickerControllerDelegate, UITableViewDelegate, UITableViewDataSource, OS_dispatch_queue, NSObject, PMEditProviderDelegate;


#import "PMMusicProvider.h"
#import "VEKSong.h"
#import "VEKBlueprint.h"
#import "VEKReachability.h"

@interface MiroMusicMenuViewController : UIViewController <MPMediaPickerControllerDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    NSObject<OS_dispatch_queue> *_downloadQueue;
}


@property (retain, nonatomic) NSObject<NSObject> *artworkDownloadObserver; // ivar: _artworkDownloadObserver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PMMusicProvider *musicProvider; // ivar: _musicProvider
@property (retain, nonatomic) VEKSong *nonFeaturedSong; // ivar: _nonFeaturedSong
@property (nonatomic) BOOL observingAppWillResign; // ivar: _observingAppWillResign
@property (nonatomic) BOOL observingAppWillResignActive; // ivar: _observingAppWillResignActive
@property (retain, nonatomic) id *playbackObserver; // ivar: _playbackObserver
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) VEKSong *playingSong; // ivar: _playingSong
@property (nonatomic) NSInteger playingSongRow; // ivar: _playingSongRow
@property (nonatomic) NSInteger playingSongSection; // ivar: _playingSongSection
@property (retain, nonatomic) VEKBlueprint *previousBlueprint; // ivar: _previousBlueprint
@property (retain, nonatomic) VEKReachability *reachability; // ivar: _reachability
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) id *timeObserver; // ivar: _timeObserver


-(BOOL)_has_iTunesMusic;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)networkStatus;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)statusForSong:(id)arg0 ;
-(id)_getPlayingCell;
-(id)albumArtworkForSong:(id)arg0 ;
-(id)fetchAlbumArtworkFromMediaIdentifier:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addObserverForAppWillResign;
-(void)_addObserverForPlaybackEnded;
-(void)_addObserverForTextSizeDidChange;
-(void)_applicationWillResign;
-(void)_pausePreview;
-(void)_postProgressUpdate:(struct ? )arg0 ;
-(void)_previewSong:(id)arg0 ;
-(void)_removeObserverForAppWillResign;
-(void)_removeObserverForPlaybackEnded;
-(void)_removeObserverForTextSizeDidChange;
-(void)_setupReachabiliy;
-(void)_updateProductionWithSong:(id)arg0 ;
-(void)dealloc;
-(void)didChangeMusicSwitch:(id)arg0 ;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)networkStatusChanged:(id)arg0 ;
-(void)popFromNavigationController;
-(void)resetPlayingCell;
-(void)shouldPreviewSong:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)toggleDownloadInCell:(id)arg0 ;
-(void)userTextSizeDidChange;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif