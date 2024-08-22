// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOAPPLICATIONSETTINGSGROUP_H
#define MOAPPLICATIONSETTINGSGROUP_H

@class NSSet, NSNumber;


#import "MOSettingsGroup.h"

@interface MOApplicationSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSSet *blockedApplications;
@property (retain, nonatomic) NSNumber *denyAppInstallation;
@property (retain, nonatomic) NSNumber *denyAppRemoval;
@property (retain, nonatomic) NSSet *unremovableApplications;


+(id)groupName;


@end


#endif