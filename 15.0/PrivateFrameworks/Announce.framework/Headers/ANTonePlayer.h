// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANTONEPLAYER_H
#define ANTONEPLAYER_H

@class AVAudioSession, NSUUID, AVPlayer, AVPlayerItem;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface ANTonePlayer : NSObject

@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, nonatomic) NSUUID *endpointUUID; // ivar: _endpointUUID
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem


-(BOOL)_activateAudioSessionForPlayer:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEndpointUUID:(id)arg0 ;
-(void)_callHandler:(id)arg0 ;
-(void)_deactivateAudioSession;
-(void)_deregisterForNotificationsWithAudioSession:(id)arg0 ;
-(void)_handleFailure;
-(void)_handlePlayerItemFailedToPlayToEnd:(id)arg0 ;
-(void)_handlePlayerItemPlayedToEnd:(id)arg0 ;
-(void)_playFileURL:(id)arg0 ;
-(void)_playSystemSoundWithFileURL:(id)arg0 ;
-(void)_registerForNotificationsWithAudioSession:(id)arg0 ;
-(void)audioSessionInterruptionHandler:(id)arg0 ;
-(void)dealloc;
-(void)playFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)playerRateChangedHandler:(id)arg0 ;
-(void)stop;


@end


#endif