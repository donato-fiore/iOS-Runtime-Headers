// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSAUDIOPLAYBACK_H
#define SHSAUDIOPLAYBACK_H

@class AVAudioSession, AVPlayerItem, AVPlayerLooper, AVQueuePlayer, NSString;

#import <Foundation/Foundation.h>


@interface SHSAudioPlayback : NSObject

@property (retain, nonatomic) AVAudioSession *_audioSession; // ivar: __audioSession
@property (retain, nonatomic) AVPlayerItem *_currentItem; // ivar: __currentItem
@property (retain, nonatomic) AVPlayerLooper *_playerLooper; // ivar: __playerLooper
@property (retain, nonatomic) AVQueuePlayer *_queuePlayer; // ivar: __queuePlayer
@property (retain, nonatomic) id *_serverConnectionDiedToken; // ivar: __serverConnectionDiedToken
@property (retain, nonatomic) NSString *ringtoneIdentifier; // ivar: _ringtoneIdentifier


-(BOOL)isPlayingRingtone;
-(id)init;
-(void)dealloc;
-(void)playRingtoneWithIdentifier:(id)arg0 loop:(BOOL)arg1 ;
-(void)setAudioSessionCategory;
-(void)stopPlayback;
-(void)stopRingtoneWithFadeOut:(float)arg0 ;


@end


#endif