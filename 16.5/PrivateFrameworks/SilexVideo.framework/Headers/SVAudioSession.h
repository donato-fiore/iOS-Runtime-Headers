// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVAUDIOSESSION_H
#define SVAUDIOSESSION_H

@class AVAudioSession, NSMapTable;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "SVMediaPlaybackController.h"

@interface SVAudioSession : NSObject

@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionActive; // ivar: _audioSessionActive
@property (readonly, nonatomic) SVMediaPlaybackController *playbackController; // ivar: _playbackController
@property (readonly, nonatomic) NSMapTable *players; // ivar: _players
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


+(id)sharedSession;
+(id)sharedSessionForMode:(int)arg0 ;
+(id)sharedSilentSession;
-(BOOL)canDeactivateAudioSession;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)shouldActivateAudioSession;
-(id)desiredAudioSessionConfiguration;
-(id)initWithAudioSession:(id)arg0 ;
-(void)activateAudioSessionCategory;
-(void)addInterestForPlayer:(id)arg0 withMode:(int)arg1 ;
-(void)deactivateAudioSessionCategory;
-(void)registerPlaybackControlForPlayer:(id)arg0 withMode:(int)arg1 ;
-(void)removeInterestForPlayer:(id)arg0 ;
-(void)setupAudioSessionCategory;


@end


#endif