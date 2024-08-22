// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SMSAPPLICATIONSOUNDHELPER_H
#define SMSAPPLICATIONSOUNDHELPER_H

@class TLAlert;

#import <Foundation/Foundation.h>


@interface SMSApplicationSoundHelper : NSObject {
    TLAlert *_alert;
}


@property (nonatomic) BOOL bulletinSuppressed; // ivar: _bulletinSuppressed


-(BOOL)_isPlaySoundEnabled;
-(BOOL)_shouldPlayTapbackSound;
-(BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg0 ;
-(BOOL)playTapbackReceivedSoundForMessageInCurrentTranscript:(id)arg0 ;
-(void)_playIncomingMessageSoundAndHapticForMessage:(id)arg0 messageIsForCurrentTranscript:(BOOL)arg1 ;
-(void)playIncomingMessageSoundAndHapticForMessage:(id)arg0 messageIsForCurrentTranscript:(BOOL)arg1 ;
-(void)playSendSoundForMessage:(id)arg0 ;
-(void)stopPlayingAlert;


@end


#endif