// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWSETTINGS_H
#define PUSLIDESHOWSETTINGS_H

@class PXSettings, OKProducerPreset, NSString;



@interface PUSlideshowSettings : PXSettings

@property (nonatomic) BOOL allowUserInteractivity; // ivar: _allowUserInteractivity
@property (retain, nonatomic) OKProducerPreset *currentPreset; // ivar: _currentPreset
@property (retain, nonatomic) NSString *currentPresetUniqueIdentifier; // ivar: _currentPresetUniqueIdentifier
@property (nonatomic) CGFloat interactiveTransitionFingerTrackingBoxRadiusDefaultValue; // ivar: _interactiveTransitionFingerTrackingBoxRadiusDefaultValue
@property (nonatomic) CGFloat interactiveTransitionFingerTrackingBoxRadiusIncrementValue; // ivar: _interactiveTransitionFingerTrackingBoxRadiusIncrementValue
@property (nonatomic) CGFloat interactiveTransitionFingerTrackingBoxRadiusMaxValue; // ivar: _interactiveTransitionFingerTrackingBoxRadiusMaxValue
@property (nonatomic) CGFloat interactiveTransitionFingerTrackingBoxRadiusMinValue; // ivar: _interactiveTransitionFingerTrackingBoxRadiusMinValue
@property (nonatomic) CGFloat interactiveTransitionProgressThresholdDefaultValue; // ivar: _interactiveTransitionProgressThresholdDefaultValue
@property (nonatomic) CGFloat interactiveTransitionProgressThresholdIncrementValue; // ivar: _interactiveTransitionProgressThresholdIncrementValue
@property (nonatomic) CGFloat interactiveTransitionProgressThresholdMaxValue; // ivar: _interactiveTransitionProgressThresholdMaxValue
@property (nonatomic) CGFloat interactiveTransitionProgressThresholdMinValue; // ivar: _interactiveTransitionProgressThresholdMinValue
@property (nonatomic) CGFloat interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue; // ivar: _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue
@property (nonatomic) CGFloat interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue; // ivar: _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue
@property (nonatomic) CGFloat interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue; // ivar: _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue
@property (nonatomic) CGFloat interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue; // ivar: _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue
@property (nonatomic) BOOL slideshowSettingsEnableFullscreenSupport; // ivar: _slideshowSettingsEnableFullscreenSupport


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)transitionSettingsAreDefaults;
-(id)archiveValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)parentSettings;
-(void)applyArchiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)performPostSaveActions;
-(void)removeTransitionTimingCustomizationsFromUserDefaults;
-(void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
-(void)saveInteractiveSlideshowSettingsInUserDefaults;
-(void)setDefaultPresetTransitionValues;
-(void)setDefaultValues;


@end


#endif