// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOMANAGEDSETTINGSSETTINGSGROUP_H
#define MOMANAGEDSETTINGSSETTINGSGROUP_H

@class NSSet, NSData;


#import "MOSettingsGroup.h"

@interface MOManagedSettingsSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSSet *tokenDecodingKeys;
@property (retain, nonatomic) NSData *tokenEncodingKey;


+(id)groupName;


@end


#endif