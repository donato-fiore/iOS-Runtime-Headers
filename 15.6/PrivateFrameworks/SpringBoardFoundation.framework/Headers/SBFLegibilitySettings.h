// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLEGIBILITYSETTINGS_H
#define SBFLEGIBILITYSETTINGS_H

@class PTSettings;



@interface SBFLegibilitySettings : PTSettings

@property CGFloat appIconGrabberDarkShadowStrength; // ivar: _appIconGrabberDarkShadowStrength
@property CGFloat appIconGrabberLightShadowStrength; // ivar: _appIconGrabberLightShadowStrength
@property CGFloat dateDarkShadowStrength; // ivar: _dateDarkShadowStrength
@property CGFloat dateLightShadowStrength; // ivar: _dateLightShadowStrength
@property CGFloat folderTitleDarkShadowStrength; // ivar: _folderTitleDarkShadowStrength
@property CGFloat folderTitleLightShadowStrength; // ivar: _folderTitleLightShadowStrength
@property CGFloat iconLabelDarkShadowStrength; // ivar: _iconLabelDarkShadowStrength
@property CGFloat iconLabelLightShadowStrength; // ivar: _iconLabelLightShadowStrength
@property CGFloat logoutButtonGlyphDarkShadowStrength; // ivar: _logoutButtonGlyphDarkShadowStrength
@property CGFloat logoutButtonGlyphLightShadowStrength; // ivar: _logoutButtonGlyphLightShadowStrength
@property CGFloat logoutButtonTextDarkShadowStrength; // ivar: _logoutButtonTextDarkShadowStrength
@property CGFloat logoutButtonTextLightShadowStrength; // ivar: _logoutButtonTextLightShadowStrength
@property CGFloat slideToUnlockDarkShadowStrength; // ivar: _slideToUnlockDarkShadowStrength
@property CGFloat slideToUnlockLightShadowStrength; // ivar: _slideToUnlockLightShadowStrength
@property CGFloat statusTextDarkShadowStrength; // ivar: _statusTextDarkShadowStrength
@property CGFloat statusTextLightShadowStrength; // ivar: _statusTextLightShadowStrength
@property CGFloat timeDarkShadowStrength; // ivar: _timeDarkShadowStrength
@property CGFloat timeLightShadowStrength; // ivar: _timeLightShadowStrength
@property CGFloat timerDialDarkShadowStrength; // ivar: _timerDialDarkShadowStrength
@property CGFloat timerDialLightShadowStrength; // ivar: _timerDialLightShadowStrength
@property CGFloat timerTextDarkShadowStrength; // ivar: _timerTextDarkShadowStrength
@property CGFloat timerTextLightShadowStrength; // ivar: _timerTextLightShadowStrength
@property CGFloat userPictureDarkShadowStrength; // ivar: _userPictureDarkShadowStrength
@property CGFloat userPictureLightShadowStrength; // ivar: _userPictureLightShadowStrength


+(id)settingsControllerModule;
-(CGFloat)appIconGrabberStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)dateStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)folderTitleStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)iconLabelStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)logoutButtonGlyphStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)logoutButtonTextStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)slideToUnlockStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)statusTextStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)timeStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)timerDialStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)timerTextStrengthForStyle:(NSInteger)arg0 ;
-(CGFloat)userPictureStrengthForStyle:(NSInteger)arg0 ;
-(void)setDefaultValues;


@end


#endif