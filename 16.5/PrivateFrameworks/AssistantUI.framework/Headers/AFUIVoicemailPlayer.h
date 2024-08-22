// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUIVOICEMAILPLAYER_H
#define AFUIVOICEMAILPLAYER_H

@class VMVoicemailManager, VMVoicemail;


#import "AFUIAudioPlayer.h"

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {
    VMVoicemailManager *_voicemailManager;
}


@property (retain, nonatomic, getter=_voicemailObject, setter=_setVoicemailObject:) VMVoicemail *voicemailObject; // ivar: _voicemailObject


-(NSInteger)_voicemailID;
-(NSUInteger)_audioOptions;
-(id)_audioCategory;
-(id)_audioURL;
-(id)_voicemailManager;
-(void)_updateVoicemailPlayedState:(id)arg0 finished:(BOOL)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)setPlaybackCommand:(id)arg0 ;


@end


#endif