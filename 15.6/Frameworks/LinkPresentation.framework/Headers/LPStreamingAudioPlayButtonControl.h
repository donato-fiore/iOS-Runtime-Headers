// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPSTREAMINGAUDIOPLAYBUTTONCONTROL_H
#define LPSTREAMINGAUDIOPLAYBUTTONCONTROL_H

@protocol LPAudioPlayerClient, LPAudioPlayer;


#import "LPPlayButtonControl.h"
#import "LPAudioPlayerMediaPlayableAdaptor.h"

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPAudioPlayerClient>

 {
    id<LPAudioPlayer> *_player;
    LPAudioPlayerMediaPlayableAdaptor *_playableAdaptor;
}




-(id)initWithAudio:(id)arg0 style:(id)arg1 theme:(id)arg2 player:(id)arg3 ;
-(id)playable;
-(void)audioPlayer:(id)arg0 didChangeProgress:(float)arg1 ;
-(void)audioPlayer:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)audioPlayerDidFailToPlay:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)dealloc;


@end


#endif