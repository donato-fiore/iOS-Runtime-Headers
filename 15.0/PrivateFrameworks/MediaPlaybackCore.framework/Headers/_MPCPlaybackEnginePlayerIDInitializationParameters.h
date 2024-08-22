// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYBACKENGINEPLAYERIDINITIALIZATIONPARAMETERS_H
#define _MPCPLAYBACKENGINEPLAYERIDINITIALIZATIONPARAMETERS_H

@class AVAudioSession, NSString, MPNowPlayingInfoCenter, MPRemoteCommandCenter;
@protocol MPCPlaybackEngineInitializationParameters;

#import <Foundation/Foundation.h>


@interface _MPCPlaybackEnginePlayerIDInitializationParameters : NSObject <MPCPlaybackEngineInitializationParameters>



@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter; // ivar: _nowPlayingInfoCenter
@property (readonly, copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // ivar: _remoteCommandCenter
@property (readonly) Class superclass;


-(id)initWithPlayerID:(id)arg0 ;


@end


#endif