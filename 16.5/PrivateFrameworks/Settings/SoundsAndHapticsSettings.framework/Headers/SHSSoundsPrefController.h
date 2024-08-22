// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSSOUNDSPREFCONTROLLER_H
#define SHSSOUNDSPREFCONTROLLER_H

@class PSListController, NSNumber, CoreTelephonyClient, PSSpecifier, ADASManager, PSCloudSyncButton, NSString, NSNumberFormatter;
@protocol SHSRingerControlDelegate, CoreTelephonyClientCarrierBundleDelegate, PSCloudSyncDelegate, PSListControllerTestableSpecifiers;


#import "SHSAudioPlayback.h"
#import "SHSRingerControl.h"

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, CoreTelephonyClientCarrierBundleDelegate, PSCloudSyncDelegate, PSListControllerTestableSpecifiers>

 {
    BOOL _hasTelephony;
    BOOL _volumeHUDsuppressed;
}


@property (retain, nonatomic) SHSAudioPlayback *_audioPlayback; // ivar: __audioPlayback
@property (retain, nonatomic) NSNumber *_cachedShouldHideValue; // ivar: __cachedShouldHideValue
@property (retain, nonatomic) CoreTelephonyClient *_client; // ivar: __client
@property (readonly, nonatomic) BOOL _isKeyHapticsSupported;
@property (retain, nonatomic) SHSRingerControl *_ringerControl; // ivar: __ringerControl
@property (retain, nonatomic) PSSpecifier *_voiceMailSpecifier; // ivar: __voiceMailSpecifier
@property (nonatomic) NSInteger _voiceMailSpecifierIndex; // ivar: __voiceMailSpecifierIndex
@property (nonatomic, getter=_isVolumeSliderVisible) BOOL _volumeSliderVisible; // ivar: __volumeSliderVisible
@property (retain, nonatomic) ADASManager *audioSettingsManager; // ivar: _audioSettingsManager
@property (retain, nonatomic) PSCloudSyncButton *cloudSyncButton; // ivar: _cloudSyncButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (readonly) Class superclass;


+(id)booleanCapabilitiesToTest;
-(BOOL)hasMergeConflict;
-(NSUInteger)ageOfToggle:(id)arg0 ;
-(id)_keyboardClicksTitle:(id)arg0 ;
-(id)_keyboardFeedbackSpecifier;
-(id)_volumeSliderCell;
-(id)canChangeRingtoneWithButtons:(id)arg0 ;
-(id)detailTextForToneWithSpecifier:(id)arg0 ;
-(id)getHeadphoneLevelLimitSetting;
-(id)init;
-(id)soundEffects:(id)arg0 ;
-(id)specifiers;
-(id)systemHapticsEnabled:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)volume:(id)arg0 ;
-(int)_deviceType;
-(void)carrierBundleChange:(id)arg0 ;
-(void)dealloc;
-(void)didBackground;
-(void)didLock;
-(void)endInterruption;
-(void)isCloudSyncEnabled:(id)arg0 ;
-(void)refreshShouldHideAllVoicemailUI;
-(void)resolveMergeConflict:(NSUInteger)arg0 ;
-(void)ringerControl:(id)arg0 volumeValueDidChange:(float)arg1 ;
-(void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)arg0 ;
-(void)setCanChangeRingtoneWithButtons:(id)arg0 specifier:(id)arg1 ;
-(void)setCloudSyncEnabled:(BOOL)arg0 ;
-(void)setPlayKeyboardSound:(id)arg0 specifier:(id)arg1 ;
-(void)setPlayLockSound:(id)arg0 specifier:(id)arg1 ;
-(void)setSoundEffects:(id)arg0 specifier:(id)arg1 ;
-(void)setSystemHapticsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setVibrateWithRingMode:(id)arg0 specifier:(id)arg1 ;
-(void)setVibrateWithSilentMode:(id)arg0 specifier:(id)arg1 ;
-(void)setVolume:(id)arg0 specifier:(id)arg1 ;
-(void)setVolumeHUDsuppression:(BOOL)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)startRingtonePreview;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateVoiceMailVisibility;
-(void)updateVolume;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willForeground;
-(void)willHideSlider;
-(void)willResignActive;
-(void)willShowSlider;


@end


#endif