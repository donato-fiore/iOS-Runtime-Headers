// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOWPOWERALERTITEM_H
#define SBLOWPOWERALERTITEM_H

@class SBAlertItem, SPBeaconManager;



@interface SBLowPowerAlertItem : SBAlertItem {
    unsigned int _talkLevel;
}


@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (nonatomic) BOOL hasEnableLowPowerModeAction; // ivar: _hasEnableLowPowerModeAction
@property (nonatomic) BOOL showFindMyAlert; // ivar: _showFindMyAlert


+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg0 ;
+(unsigned int)_thresholdForLevel:(unsigned int)arg0 ;
+(void)initialize;
+(void)setBatteryLevel:(unsigned int)arg0 ;
-(BOOL)_isLowPowerModeEnabled;
-(BOOL)_supportsLowPowerMode;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)wakeDisplay;
-(id)_batteryPercentageString;
-(id)_createSystemApertureElement;
-(id)_enableLowPowerModeActionTitle;
-(id)_lowBatteryTitle;
-(id)init;
-(id)initWithLevel:(unsigned int)arg0 ;
-(void)_didDeactivateForDismissAction;
-(void)_enableLowPowerMode;
-(void)_enableLowPowerModeActionTriggered;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)didDeactivateForReason:(int)arg0 ;


@end


#endif