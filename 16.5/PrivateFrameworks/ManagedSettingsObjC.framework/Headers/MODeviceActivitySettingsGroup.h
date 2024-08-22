// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODEVICEACTIVITYSETTINGSGROUP_H
#define MODEVICEACTIVITYSETTINGSGROUP_H

@class NSSet, NSNumber;


#import "MOSettingsGroup.h"

@interface MODeviceActivitySettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSNumber *shareAcrossDevices;
@property (retain, nonatomic) NSSet *sharingAppleIDs;


+(id)groupName;


@end


#endif