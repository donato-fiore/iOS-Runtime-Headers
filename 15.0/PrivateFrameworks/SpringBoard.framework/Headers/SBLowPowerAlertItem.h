// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOWPOWERALERTITEM_H
#define SBLOWPOWERALERTITEM_H

@class SBAlertItem, SPBeaconManager;



@interface SBLowPowerAlertItem : SBAlertItem {
    unsigned int _talkLevel;
}


@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (nonatomic) BOOL showFindMyAlert; // ivar: _showFindMyAlert


+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg0 ;
+(unsigned int)_thresholdForLevel:(unsigned int)arg0 ;
+(void)initialize;
+(void)setBatteryLevel:(unsigned int)arg0 ;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)wakeDisplay;
-(id)init;
-(id)initWithLevel:(unsigned int)arg0 ;
-(void)_enableLowPowerMode;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif