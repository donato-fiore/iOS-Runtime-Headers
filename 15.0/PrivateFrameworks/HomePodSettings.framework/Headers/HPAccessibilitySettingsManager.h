// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPACCESSIBILITYSETTINGSMANAGER_H
#define HPACCESSIBILITYSETTINGSMANAGER_H


#import <Foundation/Foundation.h>


@interface HPAccessibilitySettingsManager : NSObject



+(BOOL)getVoiceOverSiriQuietRoomDisabled;
+(void)setTapAssistanceGestureDelay:(CGFloat)arg0 ;
+(void)setTouchAccommodationsEnabled:(BOOL)arg0 ;
+(void)setTouchAccommodationsHoldDuration:(CGFloat)arg0 ;
+(void)setTouchAccommodationsHoldDurationEnabled:(BOOL)arg0 ;
+(void)setTouchAccommodationsIgnoreRepeatDuration:(CGFloat)arg0 ;
+(void)setTouchAccommodationsIgnoreRepeatEnabled:(BOOL)arg0 ;
+(void)setTouchAccommodationsTapActivationMethod:(NSInteger)arg0 ;
+(void)setTouchAccommodationsTapActivationTimeout:(CGFloat)arg0 ;
+(void)setTouchAccomodationsEnabled:(BOOL)arg0 ;
+(void)setVoiceOverAudioDuckingEnabled:(BOOL)arg0 ;
+(void)setVoiceOverDoubleTapInterval:(CGFloat)arg0 ;
+(void)setVoiceOverDoubleTapTimeoutInterval:(CGFloat)arg0 ;
+(void)setVoiceOverSiriQuietRoomDisabled:(BOOL)arg0 ;
+(void)setVoiceOverTouchSpeakingRate:(float)arg0 ;
-(void)homeKitAccessibilitySettingForKeyPathChanged:(id)arg0 settingValueFromHome:(id)arg1 settingValue:(id)arg2 ;


@end


#endif