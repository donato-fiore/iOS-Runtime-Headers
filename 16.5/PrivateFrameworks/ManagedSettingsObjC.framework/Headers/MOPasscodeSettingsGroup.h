// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOPASSCODESETTINGSGROUP_H
#define MOPASSCODESETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOPasscodeSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *lockPasscode;


+(id)groupName;


@end


#endif