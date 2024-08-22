// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUMEDIAPLAYERVIEWCONTROLLER_H
#define SUMEDIAPLAYERVIEWCONTROLLER_H

@class UIViewController, UIView, NSMutableArray, NSString, AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate, ISOperationDelegate;


#import "SUClientInterface.h"
#import "SUMediaPlayerItem.h"

@interface SUMediaPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, ISOperationDelegate>

 {
    UIView *_backgroundContainerView;
    NSMutableArray *_operations;
    NSInteger _playerState;
}


@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem; // ivar: _mediaItem
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly) Class superclass;


+(BOOL)_URLIsITunesU:(id)arg0 ;
+(void)_sendPingRequestsForURLs:(id)arg0 URLBagKey:(id)arg1 playerItem:(id)arg2 ;
+(void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg0 ;
+(void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)_backgroundContainerView;
-(id)copyScriptViewController;
-(id)init;
-(id)initWithMediaPlayerItem:(id)arg0 ;
-(void)_dequeueOperation:(id)arg0 ;
-(void)_enqueueOperation:(id)arg0 ;
-(void)_loadBackgroundImage;
-(void)_playbackFinishedNotification:(id)arg0 ;
-(void)_prepareMediaItem;
-(void)_setIsActivePlayer:(BOOL)arg0 ;
-(void)_showBackgroundImage:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)operationFinished:(id)arg0 ;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif