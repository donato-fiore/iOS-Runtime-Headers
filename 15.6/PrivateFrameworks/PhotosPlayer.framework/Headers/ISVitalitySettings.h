// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISVITALITYSETTINGS_H
#define ISVITALITYSETTINGS_H

@class NSString;
@protocol ISVitalitySettings;


#import "ISSettings.h"
#import "ISVitalitySpecificSettings.h"

@interface ISVitalitySettings : ISSettings <ISVitalitySettings>



@property (retain, nonatomic) ISVitalitySpecificSettings *activityViewSettings; // ivar: _activityViewSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ISVitalitySpecificSettings *oneUpSettings; // ivar: _oneUpSettings
@property (retain, nonatomic) ISVitalitySpecificSettings *orbPreviewSettings; // ivar: _orbPreviewSettings
@property (retain, nonatomic) ISVitalitySpecificSettings *shareViewSettings; // ivar: _shareViewSettings
@property (nonatomic) BOOL shouldPreroll; // ivar: _shouldPreroll
@property (readonly) Class superclass;
@property (nonatomic) BOOL useLegacyBehavior; // ivar: _useLegacyBehavior


+(id)settingsControllerModule;
+(id)sharedInstance;
-(CGFloat)endTimeOffset;
-(CGFloat)maxVitalityDelay;
-(CGFloat)maximumDelayBeforePlayback;
-(CGFloat)minimumPhotoTransitionDuration;
-(CGFloat)minimumVisibilityFactor;
-(CGFloat)playbackRate;
-(CGFloat)postDuration;
-(CGFloat)preDuration;
-(NSInteger)behavior;
-(id)_defaultSettings;
-(void)setDefaultValues;


@end


#endif