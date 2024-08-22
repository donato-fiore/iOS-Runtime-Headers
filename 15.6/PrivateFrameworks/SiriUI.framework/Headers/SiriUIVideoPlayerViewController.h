// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIVIDEOPLAYERVIEWCONTROLLER_H
#define SIRIUIVIDEOPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController, NSString;
@protocol SiriUIVideoPlayerViewControllerDelegate;



@interface SiriUIVideoPlayerViewController : AVPlayerViewController {
    BOOL _observingPlayerStatus;
    BOOL _observingItemStatus;
    BOOL _observingPlayback;
    BOOL _observingViewController;
    *void _playerStatusObserverContext;
    *void _itemStatusObserverContext;
    NSString *_savedAudioSessionCategory;
    NSUInteger _savedAudioSessionCategoryOptions;
}


@property (readonly, nonatomic) BOOL shouldPlayHighResolutionContent;
@property (weak, nonatomic) NSObject<SiriUIVideoPlayerViewControllerDelegate> *videoPlayerControllerDelegate; // ivar: _videoPlayerControllerDelegate


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_playbackDidFinish:(id)arg0 ;
-(void)_registerObservers;
-(void)_removeObservers;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(void)_updateAudioSessionCategory;
-(void)dealloc;
-(void)doneButtonTapped:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPlayer:(id)arg0 ;


@end


#endif