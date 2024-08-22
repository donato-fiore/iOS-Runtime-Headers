// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOGAMECENTERSETTINGSGROUP_H
#define MOGAMECENTERSETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOGameCenterSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denyAddingFriends;
@property (retain, nonatomic) NSNumber *denyMultiplayerGaming;


+(id)groupName;


@end


#endif