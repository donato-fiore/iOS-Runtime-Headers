// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOWPOWERFINDMYALERTITEM_H
#define SBLOWPOWERFINDMYALERTITEM_H

@class SBAlertItem, SPBeaconManager;



@interface SBLowPowerFindMyAlertItem : SBAlertItem

@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager


+(void)_readSupportsFindMy:(id)arg0 ;
+(void)showFindMyAlert;
-(BOOL)shouldShowInLockScreen;
-(BOOL)wakeDisplay;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif