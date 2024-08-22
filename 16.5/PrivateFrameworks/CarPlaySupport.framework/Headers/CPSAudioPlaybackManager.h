// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSAUDIOPLAYBACKMANAGER_H
#define CPSAUDIOPLAYBACKMANAGER_H

@class MPArtworkCatalog, NSString, UIImage, CPUINowPlayingSnapshot, CPUINowPlayingManager, CPNowPlayingTemplate;
@protocol CPUINowPlayingObserving, CARSessionObserving, CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate, CPNowPlayingClientTemplateDelegate;

#import <Foundation/Foundation.h>

#import "CPSTemplateEnvironment.h"
#import "CPSNowPlayingViewController.h"

@interface CPSAudioPlaybackManager : NSObject <CPUINowPlayingObserving, CARSessionObserving, CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate>



@property (nonatomic) BOOL actionStateHeld; // ivar: _actionStateHeld
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CPSTemplateEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) UIImage *fullSizeArtwork; // ivar: _fullSizeArtwork
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPUINowPlayingSnapshot *lastSnapshot; // ivar: _lastSnapshot
@property (retain, nonatomic) CPUINowPlayingManager *nowPlayingManager; // ivar: _nowPlayingManager
@property (weak, nonatomic) CPSNowPlayingViewController *nowPlayingViewController; // ivar: _nowPlayingViewController
@property (nonatomic) BOOL shouldShowAlbumArt; // ivar: _shouldShowAlbumArt
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPNowPlayingTemplate *template; // ivar: _template
@property (retain, nonatomic) NSObject<CPNowPlayingClientTemplateDelegate> *templateDelegate; // ivar: _templateDelegate


-(BOOL)nowPlayingViewController:(id)arg0 buttonShouldBeActive:(NSInteger)arg1 ;
-(BOOL)nowPlayingViewController:(id)arg0 shouldDisplayButton:(NSInteger)arg1 withImage:(*id)arg2 existingIdentifier:(id)arg3 tinted:(*BOOL)arg4 ;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowAlbumArt:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowAlbumLink:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowUpNext:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsRightHandDrive:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg0 ;
-(NSInteger)placeholderTypeForNowPlayingViewController:(id)arg0 ;
-(NSInteger)repeatTypeForNowPlayingViewController:(id)arg0 ;
-(NSInteger)shuffleTypeForNowPlayingViewController:(id)arg0 ;
-(id)albumTextForNowPlayingController:(id)arg0 ;
-(id)artistTextForNowPlayingController:(id)arg0 ;
-(id)backgroundArtForNowPlayingController:(id)arg0 ;
-(id)customPlaybackControlButtonsForNowPlayingViewController:(id)arg0 ;
-(id)initWithNowPlayingTemplate:(id)arg0 templateDelegate:(id)arg1 environment:(id)arg2 ;
-(id)nowPlayingButtonWithClass:(Class)arg0 ;
-(id)nowPlayingButtonWithIdentifier:(id)arg0 ;
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg0 ;
-(id)titleForNowPlayingController:(id)arg0 ;
-(id)titleForUpNextInNowPlayingViewController:(id)arg0 ;
-(struct ? )durationSnapshotForNowPlayingViewController:(id)arg0 ;
-(void)_loadArtwork:(id)arg0 ;
-(void)_updateAlbumArtFromSessionConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)nowPlayingManager:(id)arg0 didThrottleUpdateForBundleIdentifier:(id)arg1 ;
-(void)nowPlayingManager:(id)arg0 didUpdateSnapshot:(id)arg1 ;
-(void)nowPlayingViewController:(id)arg0 didSelectButton:(id)arg1 ;
-(void)nowPlayingViewController:(id)arg0 didSendAction:(NSInteger)arg1 state:(NSInteger)arg2 ;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg0 ;
-(void)nowPlayingViewControllerAlbumArtistButtonTapped:(id)arg0 ;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg0 ;
-(void)nowPlayingViewControllerMore:(id)arg0 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg0 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg0 ;
-(void)nowPlayingViewControllerUpNextButtonTapped:(id)arg0 ;
-(void)nowPlayingViewControllerWillAppear:(id)arg0 ;
-(void)session:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)updateNowPlayingTemplate:(id)arg0 templateDelegate:(id)arg1 ;


@end


#endif