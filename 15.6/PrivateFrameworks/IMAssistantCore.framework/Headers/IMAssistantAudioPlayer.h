// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTAUDIOPLAYER_H
#define IMASSISTANTAUDIOPLAYER_H

@class AVAudioPlayer, NSString;
@protocol AVAudioPlayerDelegate, IMAssistantAudioPlayerDelegate;

#import <Foundation/Foundation.h>


@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate>

 {
    id<IMAssistantAudioPlayerDelegate> *_delegate;
    AVAudioPlayer *_player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)setupAudioSession;
-(BOOL)startPlayingAudioURL:(id)arg0 ;
-(NSInteger)playerState;
-(id)initWithDelegate:(id)arg0 identifier:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)cleanupAudioSession;
-(void)stopPlaying;


@end


#endif