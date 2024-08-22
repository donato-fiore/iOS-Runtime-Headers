// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNAUDIOMANAGER_H
#define MNAUDIOMANAGER_H

@class NSString;
@protocol MNAudioHardwareEngineObserver;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNUserOptions.h"
#import "MNAudioHardwareEngine.h"

@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver>

 {
    MNObserverHashTable *_observers;
    MNUserOptions *_options;
    MNAudioHardwareEngine *_audioEngine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSUInteger voiceGuidanceLevel;


-(BOOL)_deviceIsMuted;
-(BOOL)_deviceSettingsAllowSpeech;
-(BOOL)isSpeaking;
-(BOOL)vibrateForShortPrompt:(NSUInteger)arg0 ;
-(BOOL)voiceGuidanceEnabled;
-(CGFloat)durationOf:(id)arg0 ;
-(id)initWithTransportType:(int)arg0 andVoiceGuidanceLevel:(NSUInteger)arg1 andVoiceLanguage:(id)arg2 ;
-(int)_supportedTransportTypeForTransportType:(int)arg0 ;
-(void)_changeVoiceGuidanceLevel:(NSUInteger)arg0 forTransportType:(int)arg1 ;
-(void)_pushAudioSystemOptionsFromUserOptions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)audioHardwareEngine:(id)arg0 didActivateAudioSession:(BOOL)arg1 ;
-(void)audioHardwareEngine:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)changeTransportType:(int)arg0 ;
-(void)changeVoiceGuidanceLevel:(NSUInteger)arg0 forTransportType:(int)arg1 ;
-(void)clearAllAnnouncements;
-(void)dealloc;
-(void)didChangeUserOptionsFrom:(id)arg0 to:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)speak:(id)arg0 withVoiceGuidanceLevel:(NSUInteger)arg1 andCondition:(NSUInteger)arg2 usingShortPrompt:(NSUInteger)arg3 thenCallCompletion:(id)arg4 ;
-(void)stopSpeaking;


@end


#endif