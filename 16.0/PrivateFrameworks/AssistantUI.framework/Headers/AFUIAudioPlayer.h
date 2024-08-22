// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUIAUDIOPLAYER_H
#define AFUIAUDIOPLAYER_H

@class NSUUID, NSString, AceObject, AVAudioPlayer;
@protocol AVAudioPlayerDelegate, AFUIAudioPlayerDelegate;

#import <Foundation/Foundation.h>


@interface AFUIAudioPlayer : NSObject <AVAudioPlayerDelegate>



@property (weak, nonatomic) NSUUID *conversationItemIdentifier; // ivar: _conversationItemIdentifier
@property (nonatomic) BOOL deactivateAudioSessionOnPlaybackFinished; // ivar: _deactivateAudioSessionOnPlaybackFinished
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUIAudioPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AceObject *playbackCommand; // ivar: _playbackCommand
@property (retain, nonatomic, getter=_player, setter=_setPlayer:) AVAudioPlayer *player; // ivar: _player
@property (readonly) Class superclass;


+(id)audioMessagePlayer;
+(id)voicemailPlayer;
-(NSUInteger)_audioOptions;
-(id)_audioCategory;
-(id)_audioURL;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)startPlaying;
-(void)stopPlaying;


@end


#endif