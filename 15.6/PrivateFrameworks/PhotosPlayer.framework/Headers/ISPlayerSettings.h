// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISPLAYERSETTINGS_H
#define ISPLAYERSETTINGS_H



#import "ISSettings.h"

@interface ISPlayerSettings : ISSettings

@property (nonatomic) BOOL allowFrameBlending; // ivar: _allowFrameBlending
@property (nonatomic) BOOL allowVideoPreRoll; // ivar: _allowVideoPreRoll
@property (nonatomic) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic) BOOL crossfadeEnabled; // ivar: _crossfadeEnabled
@property (nonatomic) BOOL easingEnabled; // ivar: _easingEnabled
@property (nonatomic) CGFloat forceScrubMaximumInteractiveRate; // ivar: _forceScrubMaximumInteractiveRate
@property (nonatomic) CGFloat forceScrubMinRateChange; // ivar: _forceScrubMinRateChange
@property (nonatomic) CGFloat forceScrubMinimumRate; // ivar: _forceScrubMinimumRate
@property (nonatomic) CGFloat forceScrubRewindFactor; // ivar: _forceScrubRewindFactor
@property (nonatomic) BOOL longExposureVitality; // ivar: _longExposureVitality
@property (nonatomic) BOOL loopingEnabled; // ivar: _loopingEnabled
@property (nonatomic) BOOL playDuringHint; // ivar: _playDuringHint
@property (nonatomic) BOOL playIsSticky; // ivar: _playIsSticky
@property (nonatomic) BOOL prerollBeforePlaying; // ivar: _prerollBeforePlaying
@property (nonatomic) BOOL scaleDuringPlayback; // ivar: _scaleDuringPlayback
@property (nonatomic) BOOL showStateOverlay; // ivar: _showStateOverlay
@property (nonatomic) NSInteger startBehavior; // ivar: _startBehavior
@property (nonatomic) BOOL useDedicatedQueues; // ivar: _useDedicatedQueues
@property (nonatomic) CGFloat vitalityEaseDuration; // ivar: _vitalityEaseDuration
@property (nonatomic) float vitalityEaseMinRate; // ivar: _vitalityEaseMinRate


+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)setDefaultValues;


@end


#endif