// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAUDIOCOMPONENTVIEW_H
#define SXAUDIOCOMPONENTVIEW_H

@class NSString, AVPlayerViewController;
@protocol SXMediaPlaybackDelegate, AVPlayerViewControllerDelegate_AppStoreOnly, SXHost, SXResourceDataSource;


#import "SXMediaComponentView.h"
#import "SXAudioComponentOverlayView.h"
#import "SXAVPlayer.h"

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate, AVPlayerViewControllerDelegate_AppStoreOnly>



@property (nonatomic) BOOL audioHasPlayed; // ivar: _audioHasPlayed
@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) SXAudioComponentOverlayView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) SXAVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (nonatomic) BOOL startPlaybackWhenReady; // ivar: _startPlaybackWhenReady
@property (readonly) Class superclass;


-(BOOL)allowHierarchyRemoval;
-(BOOL)shouldAutoStartPlayback;
-(NSUInteger)analyticsMediaType;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 resourceDataSource:(id)arg6 host:(id)arg7 ;
-(void)discardContents;
-(void)hidePlaybackControls;
-(void)layoutViews;
-(void)loadAudio;
-(void)loadImage;
-(void)pauseMediaPlayback;
-(void)playButtonTapped:(id)arg0 ;
-(void)playbackFinished;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackStarted;
-(void)playerViewController:(id)arg0 metricsCollectionEventOccured:(NSInteger)arg1 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;
-(void)setupPlayerViewControllerWithPlayer:(id)arg0 ;
-(void)showPlaybackControls;
-(void)submitMediaEngageCompleteEvent;
-(void)submitMediaEngageEventForUserAction:(NSUInteger)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;


@end


#endif