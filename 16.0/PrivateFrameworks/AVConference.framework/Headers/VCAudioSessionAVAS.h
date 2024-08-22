// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOSESSIONAVAS_H
#define VCAUDIOSESSIONAVAS_H

@class AVAudioSession, NSDictionary, NSSet;


#import "VCAudioSession.h"

@interface VCAudioSessionAVAS : VCAudioSession {
    AVAudioSession *_avAudioSession;
    NSDictionary *_cmSessionToAVAudioSessionMapping;
    NSSet *_genericSessionProperties;
}




-(BOOL)applyAudioSessionMediaProperties:(id)arg0 ;
-(BOOL)applyRequestedProperty:(id)arg0 defaultValue:(*void)arg1 ;
-(BOOL)hasStarted;
-(BOOL)internalSelectMicrophoneWithType:(unsigned int)arg0 ;
-(BOOL)setSampleRate:(CGFloat)arg0 ;
-(BOOL)setSessionProperty:(id)arg0 value:(id)arg1 ;
-(BOOL)startInternal;
-(BOOL)startSessionWithMediaProperties:(id)arg0 sessionRef:(*unsigned int)arg1 ;
-(BOOL)stopSession;
-(NSUInteger)avAudioSessionAllowedRouteTypesFromCMSession:(id)arg0 ;
-(id)avAudioSessionKeyFromCMSessionKey:(id)arg0 ;
-(id)initWithMode:(int)arg0 ;
-(void)applyAudioSessionMediaPropertiesForSystemAudio;
-(void)applyClientPid;
-(void)dealloc;
-(void)destroyAudioSession;
-(void)handleAudioSessionAvailableSampleRateChange:(id)arg0 ;
-(void)handleAudioSessionInterruption:(id)arg0 ;
-(void)handleAudioSessionMediaServicesWereLostNotification:(id)arg0 ;
-(void)handleSecureMicNotificationWithInterruptionInfo:(id)arg0 ;
-(void)resetOverrideRoute;
-(void)setBlockSize:(CGFloat)arg0 sampleRate:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)setSpeakerProperty:(id)arg0 ;
-(void)setVPBlockConfigurationProperties:(id)arg0 ;
-(void)setupInputBeamforming;
-(void)setupSharePlayWithVPOperatingMode:(unsigned int)arg0 ;


@end


#endif