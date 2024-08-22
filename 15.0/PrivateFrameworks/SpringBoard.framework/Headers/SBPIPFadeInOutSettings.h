// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPFADEINOUTSETTINGS_H
#define SBPIPFADEINOUTSETTINGS_H

@class PTSettings, SBFAnimationSettings;



@interface SBPIPFadeInOutSettings : PTSettings

@property (nonatomic) CGFloat fadeInInitialBlurRadius; // ivar: _fadeInInitialBlurRadius
@property (nonatomic) CGFloat fadeInInitialOpacity; // ivar: _fadeInInitialOpacity
@property (nonatomic) CGFloat fadeInInitialScale; // ivar: _fadeInInitialScale
@property (readonly, nonatomic) ? fadeInInitialValues;
@property (retain, nonatomic) SBFAnimationSettings *fadeInOutAnimationSettings; // ivar: _fadeInOutAnimationSettings
@property (nonatomic) CGFloat fadeOutFinalBlurRadius; // ivar: _fadeOutFinalBlurRadius
@property (nonatomic) CGFloat fadeOutFinalOpacity; // ivar: _fadeOutFinalOpacity
@property (nonatomic) CGFloat fadeOutFinalScale; // ivar: _fadeOutFinalScale
@property (readonly, nonatomic) ? fadeOutFinalValues;


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif