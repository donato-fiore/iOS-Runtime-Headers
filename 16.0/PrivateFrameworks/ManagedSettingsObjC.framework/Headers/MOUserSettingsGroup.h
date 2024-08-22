// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOUSERSETTINGSGROUP_H
#define MOUSERSETTINGSGROUP_H

@class NSNumber, NSString;


#import "MOSettingsGroup.h"

@interface MOUserSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denySharing;
@property (retain, nonatomic) NSNumber *denyUnrestrictedSharing;
@property (retain, nonatomic) NSString *sharingPolicy;


+(id)groupName;


@end


#endif