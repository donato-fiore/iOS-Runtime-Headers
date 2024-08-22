// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSESSIONCMS_H
#define VCAUDIOSESSIONCMS_H



#import "VCAudioSession.h"

@interface VCAudioSessionCMS : VCAudioSession

@property (readonly, nonatomic) *opaqueCMSession cmSession; // ivar: _cmSession


-(BOOL)applyAudioSessionMediaProperties:(id)arg0 ;
-(BOOL)applyRequestedProperty:(id)arg0 defaultValue:(*void)arg1 ;
-(BOOL)hasStarted;
-(BOOL)internalSelectMicrophoneWithType:(unsigned int)arg0 ;
-(BOOL)setSampleRate:(CGFloat)arg0 ;
-(BOOL)startInternal;
-(BOOL)startSessionWithMediaProperties:(id)arg0 sessionRef:(*unsigned int)arg1 ;
-(BOOL)stopSession;
-(void)applyAudioSessionMediaPropertiesForSystemAudio;
-(void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)arg0 ;
-(void)applyClientPid;
-(void)didBeginQuietTime;
-(void)didEndQuietTime;
-(void)handleAudioInterruption:(struct opaqueCMSession *)arg0 interruptionInfo:(struct __CFDictionary *)arg1 ;
-(void)handleSecureMicNotificationWithInterruptionInfo:(struct __CFDictionary *)arg0 ;
-(void)resetOverrideRoute;
-(void)setBlockSize:(CGFloat)arg0 sampleRate:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)setClientName;
-(void)setSpeakerProperty:(id)arg0 ;
-(void)setVPBlockConfigurationProperties:(id)arg0 ;
-(void)setupInputBeamforming;
-(void)setupSharePlayWithVPOperatingMode:(unsigned int)arg0 ;


@end


#endif