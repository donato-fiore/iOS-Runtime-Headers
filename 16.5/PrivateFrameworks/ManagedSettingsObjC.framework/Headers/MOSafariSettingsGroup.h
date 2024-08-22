// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOSAFARISETTINGSGROUP_H
#define MOSAFARISETTINGSGROUP_H

@class NSString, NSNumber;


#import "MOSettingsGroup.h"

@interface MOSafariSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSString *cookiePolicy;
@property (retain, nonatomic) NSNumber *denyAutoFill;


+(id)groupName;


@end


#endif