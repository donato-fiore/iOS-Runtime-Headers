// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFEEDBACKDATA_H
#define _UIFEEDBACKDATA_H

@class NSString, NSURL;
@protocol _UIFeedbackData;

#import <Foundation/Foundation.h>

#import "_UIFeedbackParameters.h"

@interface _UIFeedbackData : NSObject <_UIFeedbackData>



@property (retain, nonatomic, setter=_setAudioParameters:) _UIFeedbackParameters *audioParameters; // ivar: _audioParameters
@property (nonatomic, setter=_setCanReuseCoreHapticsPlayer:) BOOL canReuseCoreHapticsPlayer; // ivar: _canReuseCoreHapticsPlayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDisableEventUseVolumeEnvelope:) BOOL disableEventUseVolumeEnvelope; // ivar: _disableEventUseVolumeEnvelope
@property (nonatomic, setter=_setEffectiveDelay:) CGFloat effectiveDelay; // ivar: _effectiveDelay
@property (nonatomic, setter=_setEffectiveDuration:) CGFloat effectiveDuration; // ivar: _effectiveDuration
@property (nonatomic, setter=_setEffectiveEnabledFeedbackTypes:) NSUInteger effectiveEnabledFeedbackTypes; // ivar: _effectiveEnabledFeedbackTypes
@property (nonatomic, setter=_setEffectiveEventType:) NSUInteger effectiveEventType; // ivar: _effectiveEventType
@property (nonatomic, setter=_setEffectiveSystemSoundID:) unsigned int effectiveSystemSoundID; // ivar: _effectiveSystemSoundID
@property (nonatomic, setter=_setFileFeedbackType:) NSUInteger fileFeedbackType; // ivar: _fileFeedbackType
@property (retain, nonatomic, setter=_setFileURL:) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic, setter=_setHapticParameters:) _UIFeedbackParameters *hapticParameters; // ivar: _hapticParameters
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setIntensity:) float intensity; // ivar: _intensity
@property (nonatomic, setter=_setIsTransientHaptic:) BOOL isTransientHaptic; // ivar: _isTransientHaptic
@property (nonatomic, setter=_setSharpness:) float sharpness; // ivar: _sharpness
@property (readonly) Class superclass;




@end


#endif