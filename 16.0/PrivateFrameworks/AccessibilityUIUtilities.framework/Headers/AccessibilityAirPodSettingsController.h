// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCESSIBILITYAIRPODSETTINGSCONTROLLER_H
#define ACCESSIBILITYAIRPODSETTINGSCONTROLLER_H

@class PSSpecifier, BluetoothDevice, UISlider, UIImpactFeedbackGenerator;


#import "AXUISettingsBaseListController.h"

@interface AccessibilityAirPodSettingsController : AXUISettingsBaseListController {
    PSSpecifier *_doubleTapGroup;
    PSSpecifier *_holdGroup;
    BluetoothDevice *_btDevice;
    UISlider *_toneVolumeSlider;
    UIImpactFeedbackGenerator *_hapticGenerator;
    BOOL _hapticPlayedValue;
}


@property (retain, nonatomic) BluetoothDevice *bluetoothDevice; // ivar: _bluetoothDevice


-(BOOL)isBeatsProduct;
-(BOOL)isInWatchSettings;
-(BOOL)supportsSpatialAudio;
-(CGFloat)defaultToneVolumeValue;
-(CGFloat)displayedMaxValue;
-(CGFloat)holdSpeedValue;
-(CGFloat)tapSpeedValue;
-(CGFloat)toneVolumeValue;
-(CGFloat)volumeSwipeDurationValue;
-(id)_btDeviceAddress;
-(id)init;
-(id)noiseCancellation:(id)arg0 ;
-(id)spatialAudioLock:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)toneVolume:(id)arg0 ;
-(id)volumeSwipeEnabled:(id)arg0 ;
-(void)_updateToneVolumeFooter:(float)arg0 ;
-(void)applyHapticIfNecessary:(id)arg0 ;
-(void)jumpToAVSettings:(id)arg0 ;
-(void)setNoiseCancellation:(id)arg0 specifier:(id)arg1 ;
-(void)setSpatialAudioLock:(id)arg0 specifier:(id)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setToneVolume:(id)arg0 specifier:(id)arg1 ;
-(void)setVolumeSwipeEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif