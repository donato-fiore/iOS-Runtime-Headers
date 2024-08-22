// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPITUNESPLAYBUTTONCONTROL_H
#define LPITUNESPLAYBUTTONCONTROL_H

@class NSString;
@protocol LPMediaPlayable, LPMediaRemotePlaybackObserverClient, NSObject;


#import "LPPlayButtonControl.h"
#import "LPInlineMediaPlaybackInformation.h"

@interface LPiTunesPlayButtonControl : LPPlayButtonControl <LPMediaPlayable, LPMediaRemotePlaybackObserverClient>

 {
    LPInlineMediaPlaybackInformation *_playbackInformation;
    id<NSObject> *_playbackDidEndNotificationToken;
    BOOL _wasPlayingMusicWhenLyricExcerptPlaybackStarted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;


-(BOOL)matchesNowPlayingItem;
-(CGFloat)desiredUpdateIntervalForMediaRemotePlaybackObserver:(id)arg0 ;
-(id)initWithPlaybackInformation:(id)arg0 style:(id)arg1 theme:(id)arg2 ;
-(id)mediaPlaybackApplicationID;
-(id)playable;
-(struct _MRSystemAppPlaybackQueue *)createPlaybackQueue;
-(void)buttonPressed:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)mediaRemotePlaybackObserverPlayingItemDidChange:(id)arg0 ;
-(void)resetPlaybackState;
-(void)startPlaybackForLyricExcerpt;
-(void)startPlaying;
-(void)updatePlayState;


@end


#endif