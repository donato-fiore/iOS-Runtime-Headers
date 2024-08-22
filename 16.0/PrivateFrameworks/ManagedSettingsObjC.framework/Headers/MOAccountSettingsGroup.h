// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOACCOUNTSETTINGSGROUP_H
#define MOACCOUNTSETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOAccountSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denyiCloudLogout;
@property (retain, nonatomic) NSNumber *lockAccounts;


+(id)groupName;


@end


#endif