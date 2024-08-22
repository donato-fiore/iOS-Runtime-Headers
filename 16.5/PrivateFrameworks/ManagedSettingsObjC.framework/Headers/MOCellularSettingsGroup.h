// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOCELLULARSETTINGSGROUP_H
#define MOCELLULARSETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOCellularSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *lockAppCellularData;
@property (retain, nonatomic) NSNumber *lockCellularPlan;
@property (retain, nonatomic) NSNumber *lockESIM;


+(id)groupName;


@end


#endif