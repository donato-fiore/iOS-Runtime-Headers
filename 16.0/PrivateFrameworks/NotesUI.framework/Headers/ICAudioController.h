// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUDIOCONTROLLER_H
#define ICAUDIOCONTROLLER_H

@class ICAttachment, AVPlayer;

#import <Foundation/Foundation.h>


@interface ICAudioController : NSObject

@property (retain, nonatomic) ICAttachment *currentAttachment; // ivar: _currentAttachment
@property (retain, nonatomic) AVPlayer *currentPlayer; // ivar: _currentPlayer
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSObject *playbackTimeObserver; // ivar: _playbackTimeObserver


+(id)sharedAudioController;
+(void)pauseIfPlaying;
-(NSInteger)remotePause:(id)arg0 ;
-(NSInteger)remotePlay:(id)arg0 ;
-(NSInteger)remoteSkipBackward:(id)arg0 ;
-(NSInteger)remoteSkipForward:(id)arg0 ;
-(NSInteger)remoteStop:(id)arg0 ;
-(NSInteger)remoteTogglePlayPause:(id)arg0 ;
-(id)init;
-(void)attachmentWillBeDeletedNotification:(id)arg0 ;
-(void)dealloc;
-(void)notifyPaused;
-(void)notifyPlaying;
-(void)notifyStopped;
-(void)pause;
-(void)play;
-(void)play:(id)arg0 ;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)skipAheadByInterval:(CGFloat)arg0 ;
-(void)skipBackByInterval:(CGFloat)arg0 ;
-(void)stop;
-(void)togglePlayPause;
-(void)updateNowPlayingInfo;
-(void)updateTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif