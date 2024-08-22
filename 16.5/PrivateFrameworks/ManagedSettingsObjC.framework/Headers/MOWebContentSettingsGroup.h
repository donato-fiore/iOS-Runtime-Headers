// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBCONTENTSETTINGSGROUP_H
#define MOWEBCONTENTSETTINGSGROUP_H



#import "MOSettingsGroup.h"
#import "MOWebContentFilterPolicy.h"

@interface MOWebContentSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) MOWebContentFilterPolicy *blockedByFilter;


+(id)groupName;


@end


#endif