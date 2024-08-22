// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDAPPCONFIGURATIONPREDICATEMO_H
#define DNDAPPCONFIGURATIONPREDICATEMO_H

@class NSString;


#import "DNDPerAppSettingsMO.h"

@interface DNDAppConfigurationPredicateMO : DNDPerAppSettingsMO

@property (copy, nonatomic) NSString *predicateFormat;


+(id)fetchRequest;
-(Class)dnd_settingsType;


@end


#endif