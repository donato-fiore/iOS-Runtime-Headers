// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTROLCENTERMODULESTATE_H
#define AVCONTROLCENTERMODULESTATE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AVControlCenterModuleState : NSObject {
    NSString *_bundleID;
    BOOL _isVOIPApp;
    BOOL _isOptedInForBackgroundBlur;
    os_unfair_lock_s _stateLock;
    BOOL _holdingStateLock;
    BOOL _centerStageSupported;
    NSInteger _centerStageControlMode;
    BOOL _centerStageEnabled;
    NSString *_centerStageControlModeKey;
    NSString *_centerStageEnabledKey;
    NSString *_centerStageUnavailableReasonsKey;
    BOOL _backgroundBlurSupported;
    NSInteger _backgroundBlurControlMode;
    BOOL _backgroundBlurEnabled;
    NSString *_backgroundBlurControlModeKey;
    NSString *_backgroundBlurEnabledKey;
    NSString *_backgroundBlurUnavailableReasonsKey;
    BOOL _studioLightingSupported;
    NSInteger _studioLightingControlMode;
    BOOL _studioLightingEnabled;
    NSString *_studioLightingControlModeKey;
    NSString *_studioLightingEnabledKey;
    NSString *_studioLightingUnavailableReasonsKey;
    BOOL _micModesSupported;
    BOOL _auVoiceIOBypassVoiceProcessing;
    NSString *_auVoiceIOBypassVoiceProcessingKey;
    NSInteger _microphoneMode;
    NSInteger _activeMicrophoneMode;
    NSString *_microphoneModeKey;
    NSString *_activeMicrophoneModeKey;
    NSArray *_supportedMicrophoneModes;
    NSString *_supportedMicrophoneModesKey;
    NSArray *_hiddenMicrophoneModes;
    NSString *_hiddenMicrophoneModesKey;
}


@property (readonly, getter=isActive) BOOL active;
@property BOOL backgroundBlurSupported;
@property BOOL centerStageSupported;
@property BOOL micModesSupported;
@property BOOL studioLightingSupported;


+(id)moduleStateForBundleID:(id)arg0 micModesSupported:(BOOL)arg1 ;
-(BOOL)isEnabledForVideoEffect:(id)arg0 ;
-(BOOL)setEnabled:(BOOL)arg0 forVideoEffect:(id)arg1 ;
-(BOOL)setMicrophoneMode:(NSInteger)arg0 ;
-(BOOL)supportsVideoEffect:(id)arg0 ;
-(BOOL)voiceProcessingBypassed;
-(NSInteger)activeMicrophoneMode;
-(NSInteger)controlModeForVideoEffect:(id)arg0 ;
-(NSInteger)microphoneMode;
-(NSUInteger)unavailableReasonsForVideoEffect:(id)arg0 ;
-(id)hiddenMicrophoneModes;
-(id)initForBundleID:(id)arg0 micModesSupported:(BOOL)arg1 ;
-(id)supportedMicrophoneModes;
-(void)_proprietaryDefaultChanged:(id)arg0 keyPath:(id)arg1 context:(*void)arg2 ;
-(void)dealloc;


@end


#endif