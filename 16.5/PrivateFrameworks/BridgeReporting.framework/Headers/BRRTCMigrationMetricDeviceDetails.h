// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRRTCMIGRATIONMETRICDEVICEDETAILS_H
#define BRRTCMIGRATIONMETRICDEVICEDETAILS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface BRRTCMigrationMetricDeviceDetails : NSObject

@property (retain, nonatomic) NSString *gizmoBuild; // ivar: _gizmoBuild
@property (retain, nonatomic) NSString *gizmoBuildType; // ivar: _gizmoBuildType
@property (retain, nonatomic) NSNumber *gizmoEnclosureMaterial; // ivar: _gizmoEnclosureMaterial
@property (retain, nonatomic) NSString *gizmoHardware; // ivar: _gizmoHardware
@property (retain, nonatomic) NSNumber *gizmoMaxPairingVersion; // ivar: _gizmoMaxPairingVersion
@property (retain, nonatomic) NSNumber *pairedDeviceCount; // ivar: _pairedDeviceCount
@property (retain, nonatomic) NSNumber *switchCounter; // ivar: _switchCounter


-(id)dictionaryOfMetricKeysWithRecordedValues;


@end


#endif