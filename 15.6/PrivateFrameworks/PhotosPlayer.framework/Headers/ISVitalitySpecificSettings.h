// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISVITALITYSPECIFICSETTINGS_H
#define ISVITALITYSPECIFICSETTINGS_H

@class NSString;
@protocol ISVitalitySettings;


#import "ISSettings.h"

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings>



@property (nonatomic) NSInteger behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endTimeOffset; // ivar: _endTimeOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxVitalityDelay; // ivar: _maxVitalityDelay
@property (nonatomic) CGFloat maximumDelayBeforePlayback; // ivar: _maximumDelayBeforePlayback
@property (nonatomic) CGFloat minimumPhotoTransitionDuration; // ivar: _minimumPhotoTransitionDuration
@property (nonatomic) CGFloat minimumVisibilityFactor; // ivar: _minimumVisibilityFactor
@property (nonatomic) CGFloat playbackRate; // ivar: _playbackRate
@property (nonatomic) CGFloat postDuration; // ivar: _postDuration
@property (nonatomic) CGFloat preDuration; // ivar: _preDuration
@property (nonatomic) CGFloat startSeekTolerance; // ivar: _startSeekTolerance
@property (readonly) Class superclass;


+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)setDefaultValues;


@end


#endif