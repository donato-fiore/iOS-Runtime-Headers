// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMEDIAREMOTECONTROLLER_H
#define IMMEDIAREMOTECONTROLLER_H

@class MPRemoteCommandCenter, NSArray;

#import <Foundation/Foundation.h>

#import "IMAVPlayer.h"

@interface IMMediaRemoteController : NSObject

@property (retain, nonatomic) IMAVPlayer *player; // ivar: _player
@property (retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // ivar: _remoteCommandCenter
@property (retain, nonatomic) NSArray *supportedPlaybackRates; // ivar: _supportedPlaybackRates


-(NSInteger)_decreasePlayerPlaybackSpeed;
-(NSInteger)_increasePlayerPlaybackSpeed;
-(NSInteger)remoteChangePlaybackRate:(id)arg0 ;
-(NSInteger)remoteNextTrack:(id)arg0 ;
-(NSInteger)remotePause:(id)arg0 ;
-(NSInteger)remotePreviousTrack:(id)arg0 ;
-(NSInteger)remoteSeekBackward:(id)arg0 ;
-(NSInteger)remoteSeekForward:(id)arg0 ;
-(NSInteger)remoteSetPlayhead:(id)arg0 ;
-(NSInteger)remoteSkipBackward:(id)arg0 ;
-(NSInteger)remoteSkipForward:(id)arg0 ;
-(NSInteger)remoteStop:(id)arg0 ;
-(id)initWithPlayer:(id)arg0 ;
-(struct __CFArray *)copySupportedCommands;
-(void)_updatePlaybackSpeed;
-(void)dealloc;
-(void)remoteTogglePlayPauseCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupRemoteCommandCenter:(id)arg0 ;
-(void)tearDownRemoteCommandCenter:(id)arg0 ;


@end


#endif