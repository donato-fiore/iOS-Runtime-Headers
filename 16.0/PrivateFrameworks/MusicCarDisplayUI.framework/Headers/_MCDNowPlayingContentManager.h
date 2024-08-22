// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MCDNOWPLAYINGCONTENTMANAGER_H
#define _MCDNOWPLAYINGCONTENTMANAGER_H

@class UIImage, UIAlertController, NSMutableDictionary, MPArtworkCatalog, MSVTimer, NSString, CARSessionStatus, MPModelPlaylist, MPModelPlaylistEntry, MPModelRadioStation, MPModelSong, MPCPlayerResponse, MPCPlayerResponseItem, MPRequestResponseController, UITableView;
@protocol MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, CARSessionObserving, MCDNowPlayingContentManagerProtocol, CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate, MCDNowPlayingDataSource, MCDNowPlayingContentManagerDelegate;

#import <Foundation/Foundation.h>


@interface _MCDNowPlayingContentManager : NSObject <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, CARSessionObserving, MCDNowPlayingContentManagerProtocol, CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate>



@property (retain, nonatomic) UIImage *albumArtwork; // ivar: _albumArtwork
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (nonatomic) BOOL allowsAlbumArt; // ivar: _allowsAlbumArt
@property (retain, nonatomic) NSMutableDictionary *artworkCache; // ivar: _artworkCache
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (retain, nonatomic) MSVTimer *artworkTimer; // ivar: _artworkTimer
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) CARSessionStatus *carSessionStatus; // ivar: _carSessionStatus
@property (retain, nonatomic) MPModelPlaylist *currentPlayingPlaylist; // ivar: currentPlayingPlaylist
@property (retain, nonatomic) MPModelPlaylistEntry *currentPlayingPlaylistEntry; // ivar: currentPlayingPlaylistEntry
@property (retain, nonatomic) MPModelRadioStation *currentPlayingRadioStation; // ivar: currentPlayingRadioStation
@property (retain, nonatomic) MPModelSong *currentPlayingSong; // ivar: currentPlayingSong
@property (weak, nonatomic) NSObject<MCDNowPlayingDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MCDNowPlayingContentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCPlayerResponse *lastReceivedResponse; // ivar: _lastReceivedResponse
@property (nonatomic) BOOL limitedUI; // ivar: limitedUI
@property (readonly, copy, nonatomic) NSString *nowPlayingBundleID;
@property (retain, nonatomic) MPCPlayerResponseItem *nowPlayingItem; // ivar: _nowPlayingItem
@property (nonatomic) NSInteger playerState; // ivar: _playerState
@property (retain, nonatomic) MPRequestResponseController *requestController; // ivar: _requestController
@property (readonly) Class superclass;
@property (weak, nonatomic) Class tableCellClass; // ivar: tableCellClass
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_sessionAllowsAlbumArt:(id)arg0 ;
-(BOOL)_shouldShowPlaybackQueueForItemCount:(NSInteger)arg0 ;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowAlbumArt:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowAlbumLink:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowUpNext:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsRightHandDrive:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg0 ;
-(BOOL)nowPlayingViewControllerShouldUseMusicExplicitGlyph:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)placeholderTypeForNowPlayingViewController:(id)arg0 ;
-(NSInteger)repeatTypeForNowPlayingViewController:(id)arg0 ;
-(NSInteger)shuffleTypeForNowPlayingViewController:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_setupRequest;
-(id)albumTextForNowPlayingController:(id)arg0 ;
-(id)artistTextForNowPlayingController:(id)arg0 ;
-(id)backgroundArtForNowPlayingController:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 bundleID:(id)arg2 ;
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg0 ;
-(struct ? )durationSnapshotForNowPlayingViewController:(id)arg0 ;
-(void)_limitedUIChanged:(id)arg0 ;
-(void)_performChangeRequest:(id)arg0 ;
-(void)_performRequest;
-(void)_processResponse:(id)arg0 error:(id)arg1 ;
-(void)_showPlaceholderArtwork;
-(void)beginRequestObservation;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)dealloc;
-(void)endRequestObservation;
-(void)modelResponseDidInvalidate:(id)arg0 ;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg0 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg0 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg0 ;
-(void)nowPlayingViewControllerUpNextButtonTapped:(id)arg0 ;
-(void)processArtworkForCurrentlyPlayingSong;
-(void)session:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillDisappear;


@end


#endif