// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDATA_H
#define _UISTATUSBARDATA_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIStatusBarDataActivityEntry.h"
#import "_UIStatusBarDataEntry.h"
#import "_UIStatusBarDataBoolEntry.h"
#import "_UIStatusBarDataStringEntry.h"
#import "_UIStatusBarDataBackgroundActivityEntry.h"
#import "_UIStatusBarDataBluetoothEntry.h"
#import "_UIStatusBarDataCellularEntry.h"
#import "_UIStatusBarDataLocationEntry.h"
#import "_UIStatusBarDataLockEntry.h"
#import "_UIStatusBarDataBatteryEntry.h"
#import "_UIStatusBarDataQuietModeEntry.h"
#import "_UIStatusBarDataTetheringEntry.h"
#import "_UIStatusBarDataThermalEntry.h"
#import "_UIStatusBarDataVoiceControlEntry.h"
#import "_UIStatusBarDataIntegerEntry.h"
#import "_UIStatusBarDataWifiEntry.h"

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) _UIStatusBarDataActivityEntry *activityEntry; // ivar: _activityEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *airPlayEntry; // ivar: _airPlayEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *airplaneModeEntry; // ivar: _airplaneModeEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *alarmEntry; // ivar: _alarmEntry
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *announceNotificationsEntry; // ivar: _announceNotificationsEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *assistantEntry; // ivar: _assistantEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *backNavigationEntry; // ivar: _backNavigationEntry
@property (copy, nonatomic) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry; // ivar: _backgroundActivityEntry
@property (copy, nonatomic) _UIStatusBarDataBluetoothEntry *bluetoothEntry; // ivar: _bluetoothEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *carPlayEntry; // ivar: _carPlayEntry
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *cellularEntry; // ivar: _cellularEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *dateEntry; // ivar: _dateEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *deviceNameEntry; // ivar: _deviceNameEntry
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry; // ivar: _electronicTollCollectionEntry
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingEntryKeys;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *forwardNavigationEntry; // ivar: _forwardNavigationEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *liquidDetectionEntry; // ivar: _liquidDetectionEntry
@property (copy, nonatomic) _UIStatusBarDataLocationEntry *locationEntry; // ivar: _locationEntry
@property (copy, nonatomic) _UIStatusBarDataLockEntry *lockEntry; // ivar: _lockEntry
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *mainBatteryEntry; // ivar: _mainBatteryEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *nikeEntry; // ivar: _nikeEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *personNameEntry; // ivar: _personNameEntry
@property (copy, nonatomic) _UIStatusBarDataQuietModeEntry *quietModeEntry; // ivar: _quietModeEntry
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *radarEntry; // ivar: _radarEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *rotationLockEntry; // ivar: _rotationLockEntry
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *secondaryCellularEntry; // ivar: _secondaryCellularEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *sensorActivityEntry; // ivar: _sensorActivityEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *shortTimeEntry; // ivar: _shortTimeEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *studentEntry; // ivar: _studentEntry
@property (copy, nonatomic) _UIStatusBarDataTetheringEntry *tetheringEntry; // ivar: _tetheringEntry
@property (copy, nonatomic) _UIStatusBarDataThermalEntry *thermalEntry; // ivar: _thermalEntry
@property (copy, nonatomic) _UIStatusBarDataStringEntry *timeEntry; // ivar: _timeEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *ttyEntry; // ivar: _ttyEntry
@property (copy, nonatomic) _UIStatusBarDataVoiceControlEntry *voiceControlEntry; // ivar: _voiceControlEntry
@property (copy, nonatomic) _UIStatusBarDataIntegerEntry *volumeEntry; // ivar: _volumeEntry
@property (copy, nonatomic) _UIStatusBarDataEntry *vpnEntry; // ivar: _vpnEntry
@property (copy, nonatomic) _UIStatusBarDataWifiEntry *wifiEntry; // ivar: _wifiEntry


+(BOOL)supportsSecureCoding;
+(id)entryKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingOverlay:(id)arg0 ;
-(id)dataByApplyingUpdate:(id)arg0 keys:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)updateFromData:(id)arg0 ;
-(void)_applyUpdate:(id)arg0 keys:(id)arg1 ;
-(void)applyUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)makeUpdateFromData:(id)arg0 ;


@end


#endif