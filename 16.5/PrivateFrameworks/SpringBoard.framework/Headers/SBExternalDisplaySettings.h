// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYSETTINGS_H
#define SBEXTERNALDISPLAYSETTINGS_H

@class PTSettings, PTOutlet;


#import "SBExternalDisplayRuntimeAvailabilitySettings.h"

@interface SBExternalDisplaySettings : PTSettings

@property (nonatomic) NSInteger activeDisplayTrackingMethodology; // ivar: _activeDisplayTrackingMethodology
@property (retain, nonatomic) SBExternalDisplayRuntimeAvailabilitySettings *availabilitySettings; // ivar: _availabilitySettings
@property (nonatomic) BOOL fakeStorageForChamois97748869Enabling; // ivar: _fakeStorageForChamois97748869Enabling
@property (nonatomic) CGFloat fakeStorageForContentsScale; // ivar: _fakeStorageForContentsScale
@property (nonatomic) BOOL fakeStorageForUnderpoweredDeviceSupport; // ivar: _fakeStorageForUnderpoweredDeviceSupport
@property (nonatomic) BOOL fakeStorageForWirelessDisplaySupport; // ivar: _fakeStorageForWirelessDisplaySupport
@property (retain, nonatomic) PTOutlet *killSpringBoardOutlet; // ivar: _killSpringBoardOutlet


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif